////////////////////////////////////////////////////////////////////////////////
// fiber optic lamp
////////////////////////////////////////////////////////////////////////////////

Radius =  3   ; // [2:0.1:6]
Width  =  1.6 ; // [1:0.1:3.5]
Height = 45   ; // [40:2:90]

WidthLed  = 5   ; // [4:0.1:6]
LengthLed = 8   ; // [6:0.1:9]

FitTolerance = 0.9 ; // [0.4:0.1:1.5]

parts = "all" ;    // [all,center,bottom,top,led]


/* [Hidden] */

$fa = 1 ;
$fs = 0.3 ;

module FiberOpticLamp(Radius3, Width)
{
  Area3 = PI * Radius3*Radius3 ;
  Area1 = Area3 * 3 ;
  Radius1 = sqrt(Area1/PI) ;

  H1 = Height / 3 ;
  H3 = Height ;
  H2 = (H1+H3)/2 ;
  X1 = 4 ;
  
  function fX(z) = (z - H3) * X1 * Radius3 / (H1 - H3) ;
  function fP(z) = [fX(z), 0, z] ;

  alpha = atan(X1*Radius3 / (H3-H1)) ;
  function fXR(z, r) = (z - (H3+r/sin(alpha))) * X1 * Radius3 / (H1 - H3) ;
  function fPR(z, r) = [fXR(z,r), 0, z] ;
  
  P0 = [0,0,0] ;
  P1 = fP(H1) ;
  P2 = fP(H2) ;
  P3 = fP(H3) ;
  
  module cylinderP(p, pr, q, qr)
  {
    d = q - p ;
    h = norm(d) ;

    translate(p)
    rotate([0, 0, atan2(d.y, d.x)])
    rotate([0, atan2(norm([d.x,d.y]), d.z), 0])
    cylinder(h = h, r1 = pr, r2 = qr) ;
  }


  module Center()
  {
    module Hole()
    {
      Px = fP(0) ;
      
      union()
      {
        for (i=[0:2])
        rotate([0,0,120*i])
        color(c=[0, 1, 0])
        cylinderP(Px, Radius3, P3, Radius3) ;

        cylinderP([0,0,H2], Radius3*10, [0,0,2*H3], Radius3*10) ;
      }
    }

    module Coat()
    {
      union()
      {
        for (i=[0:2])
        rotate([0,0,120*i])
        color(c=[1,0,0])
        cylinderP(P1, Radius3+Width, P3, Radius3+Width) ; // fiber optic

        color(c=[0.8, 0.2, 0.2])
        cylinderP([0,0,H3], fX(H2), [0,0,(H1+H2)/2], fX(H2)) ; // enhancment
        
        color(c=[1, 0.4, 0.4])
        cylinderP(P0+[0,0,Width], Radius3, [0,0,H2-0.01], Radius3) ; // stand
      }
    }

    difference()
    {
      Coat() ;
      Hole() ;
    }
  }
  
  module BoxBottom()
  {
    R = max(fXR(H1, Radius3+3*Width), Radius3 + 32) ;

    // base plate
    cylinderP([0,0,0], R+Width, [0,0,Width], R+Width) ;
    difference()
    {
      cylinderP([0,0,0], R-FitTolerance/2, [0,0,2*Width], R-FitTolerance/2) ;
      cylinderP([0,0,0], R-FitTolerance/2-Width, [0,0,2*Width+0.01], R-FitTolerance/2-Width) ;            
    }

    // socket
    difference()
    {
      cylinder(h=H1*0.8, r=Radius3+Width+FitTolerance/2) ;
      translate([0,0,Width-0.01]) cylinder(h=H1+0.02, r=Radius3+FitTolerance/2) ;
    }
    
    translate([R-8, -9, Width]) cube([8,18,Width]) ; // pcb base
    cylinderP([R-3,  7, Width], 1.6, [R-3,  7, 2*Width+2], 1.6) ; // pcb hole
    cylinderP([R-3, -7, Width], 1.6, [R-3, -7, 2*Width+2], 1.6) ; // pcb hole
  }

  module BoxTop()
  {
    R = max(fXR(H1, Radius3+3*Width), Radius3 + 32) ;
    
    color(c=[0.5,0.5,1, 0.5])
    difference()
    {
      union()
      {
        cylinderP([0,0,Width], R+Width, [0,0,H1], R+Width) ;
        cylinderP([0,0,H1], R+Width, P3, fXR(H3, Radius3+3*Width)) ;
      }
      union()
      {
        zMid = (H2 + H3) / 2 ;
        zMidLo = zMid - 0.01 ;
        zMidHi = zMid + 0.01 ;
        rMidLo = fXR(zMidLo, Radius3+2*Width) ;
        rMidHi = fXR(zMidHi, Radius3+2*Width) ;
        zTopHi = Height+0.01 ;
        rTopHi = fXR(zTopHi, Radius3+2*Width) ;
        
        cylinderP([0,0,0], R, [0,0,H1+0.01], R) ;
        cylinderP([0, 0, H1], R, [0,0,zMidHi], rMidHi) ;
        cylinderP([0, 0, zMidLo], rMidLo, [0,0,zTopHi], rTopHi) ;
        color("yellow") translate([R,0,Width+2.5]) cube([10,18+FitTolerance,2*Width+5.0], center=true) ;
      }
    }
  }

  module Led()
  {
    difference()
    {
      color("green")
        cylinder(r = Radius3 + 2*Width + FitTolerance/2, h = 5 * Width) ;

      color("red")
        cube([WidthLed + FitTolerance, LengthLed + FitTolerance, 7 * Width], center=true) ;

      translate([0,0,3*Width])
        cylinder(r = Radius3 + Width + FitTolerance/2, h = 4 * Width) ;

      translate([0,0,Width])
        cylinder(r = Radius3 + FitTolerance/2, h = 4 * Width) ;
    }
  }
  
  if ((parts == "all") || (parts == "center"))
    Center() ;
  
  if ((parts == "all") || (parts == "bottom"))
    BoxBottom() ;

  if ((parts == "all") || (parts == "top"))
    BoxTop() ;
    
  if (parts == "led")
    Led() ;  
}

FiberOpticLamp(Radius, Width) ;



////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////
