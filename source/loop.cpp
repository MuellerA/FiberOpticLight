////////////////////////////////////////////////////////////////////////////////
// loop.cpp
////////////////////////////////////////////////////////////////////////////////

extern "C"
{
  unsigned char Rnd() ;
  void SendDataRGB(unsigned char r, unsigned char g, unsigned char b) ;
  void Delay() ;

  void loop() ;
}

////////////////////////////////////////////////////////////////////////////////

const unsigned char LEDS = 3 ;

struct Led
{
  unsigned char _delay ;
  unsigned char _r ;
  unsigned char _g ;
  unsigned char _b ;
} ;

void loop()
{
  Led leds[LEDS] ;
  unsigned char iLed ;

  for (iLed = 0 ; iLed < LEDS ; ++iLed)
    leds[iLed]._delay = 0 ;

  while (true)
  {
    for (iLed = 0 ; iLed < LEDS ; ++iLed)
    {
      Led &led = leds[iLed] ;

      switch (led._delay)
      {
      case 0:
        {
          led._r = 255 ;
          led._g = 255 ;
          led._b = 255 ;
          led._delay -= 1 ;
        }
        break ;

      case 254:
        {
          led._delay = Rnd() ;

          unsigned short sum = 0 ;
          while (sum < 384)
          {
            led._r = Rnd() ;
            led._g = Rnd() ;
            led._b = Rnd() ;
            sum = led._r + led._g + led._b  ;
          }
        }
        break ;

      default:
        led._delay -= 1 ;
        break ;
      }
    }

    for (iLed = 0 ; iLed < LEDS ; ++iLed)
    {
      Led &led = leds[iLed] ;
      SendDataRGB(led._r, led._g, led._b) ;
    }
    Delay() ;
  }
}

////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////
