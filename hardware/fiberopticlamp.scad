////////////////////////////////////////////////////////////////////////////////
// fiber optic lamp
////////////////////////////////////////////////////////////////////////////////


Radius3      = 2.5 ; // [2:0.1:10]
Width        = 2   ; // [1:0.1:5]
Delta        = 0.8 ; // [0:0.1:1]
WidthWS2812  = 5   ; // [4:0.1:6]
LengthWS2812 = 8   ; // [6:0.1:9]
mode         = "foot" ; // ["main", "top", "bottom", "ws2812", "foot"]

/* [Hidden] */

$fn = 60 ;

Area3 = PI * Radius3 * Radius3 ;
Area1 = Area3 * 3 ;
Radius1 = sqrt(Area1/PI) ;

if (false)
{
  echo(Radius1=Radius1) ;
  echo(Area1=Area1) ;
  echo(Radius3=Radius3) ;
  echo(Area3=Area3) ;
}

module Hole(R1, R3, W)
{
  union()
  {
    translate([0,0,1.8*R1])
      color("blue") cylinder(r=R1, h=2*R1) ;
    
    translate([0,0,R1])
      color("yellow") cylinder(r1=1.5*R1, r2=R1, h=R1) ;
    
    for (i=[0:2])
      rotate([0,0,120*i])
        translate([-2.5*R3, 0, 0])
        rotate([0,30,0])
        translate([0,0,-3.5*R3])
        color("green") cylinder(r=R3, h=5.5*R3+W) ;
  }
}

module Solid(R1, R3, W)
{
  union()
  {
    color("gray")
      translate([0,0,-3.3*R1])
      cylinder(r=R3, h=3.5*R1) ;

    minkowski()
    {
      sphere(r=W) ;
      hull()
      {
        color("pink")
          cylinder(r=1.5*(R1), h=2*R3) ;
    
        color("white")
          translate([0,0,R1+0.1])
          cylinder(r1=1.5*(R1), r2=(R1), h=R1*1.6) ;
      }
    }
    for (i=[0:2])
      rotate([0,0,120*i])
        translate([-2.5*R3, 0, 0])
        rotate([0,30,0])
        translate([0,0,-2.8*R3])
        color("green") cylinder(r=R3+W, h=4.5*R3+W) ;
  }
}


module Body(R1, R3, W)
{
  difference()
  {
    Solid(R1, R3, W) ;
    Hole(R1,R3,W) ;
  }
}

module Part(R1, R3, W, m)
{
  difference()
  {
    Body(R1, R3, W) ;

    if (mode == "top")
      translate([0,0,-4*R1])
        cylinder(r=3*R1+W, h=5*R1) ;

    if (mode == "bottom")
      translate([0,0,R1])
        cylinder(r=3*R1+W, h=R1*3) ;
  }
}

module Foot(R1, R3, W, delta)
{
  difference()
  {
    union()
    {
      color("blue")
        cylinder(r=5*R1, h=W) ;
      color("green")
        translate([0,0,W/2])
        cylinder(r=R3+W+delta/2, h=4*R3) ;
    }
    color("pink")
      translate([0,0,R3])
      cylinder(r=R3+delta/2, h=5*R3) ;
  }
}

module Ws2812(R1, R3, W, delta, Wws, Lws)
{
  difference()
  {
    color("green")
      cylinder(r=R3+2*W+delta/2, h=3*R3) ;

    color("red")
      translate([0,0,R3])
      cube([Wws+delta, Lws+delta, 3*R3], center=true) ;

    translate([0,0,1.8*R3])
      cylinder(r=R3+W+delta/2, h=2*R3) ;
  }
}

if      (mode == "main")    Body(Radius1, Radius3, Width) ;
else if (mode == "top")     Part(Radius1, Radius3, Width, mode) ;
else if (mode == "middle")  Part(Radius1, Radius3, Width, mode) ;
else if (mode == "bottom")  Part(Radius1, Radius3, Width, mode) ;
else if (mode == "ws2812")  Ws2812(Radius1, Radius3, Width, Delta, WidthWS2812, LengthWS2812) ;
else if (mode == "foot")    Foot(Radius1, Radius3, Width, Delta) ;
