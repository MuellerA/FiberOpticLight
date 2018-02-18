<h1>Fiber Optic Lamp</h1>
<table>
<tr><th>Date</th><td>2017-12</td></tr>
<tr><th>Tools</th><td>avrdude 6.3, avr-gcc 4.9.2, openscad 2015-03</td></tr>
<tr><th>Keywords</th><td>LED, WS2812, Arduino, ATmega8, 3D Print</td></tr>
</table>

<h2>Introduction</h2>
<p>- TODO -</p>
<p>The WS2812 LEDs are not very bright, the lamp only looks good in a dark environment.</p>

<h2>License</h2>
<p>Software: <a href="LICENSE.md">MIT License</a></p>
<p>Hardware: <a href="http://creativecommons.org/licenses/by/4.0/">CC Attribution</a></p>

<h2>Hardware Configuration</h2>

<table>
  <tr><th></th><th>Arduino</th><th>ATmega8</th></tr>
  <tr><th>Clock</th><td>external 16MHz</td><td>internal 8MHz</td></tr>
  <tr><th>Voltage</th><td colspan=2>5V</td></tr>
  <tr><th>Current</th><td colspan=2>0.2A</td></tr>
  <tr><th>WS2812 Din</th><td>Pin D10</td><td>Pin 16 (port B2)</td></tr>
</table>

<h2>Compile &amp; Upload the Software</h2>
Check the settings in the source/Makefile
<pre>
  cd source
  make -k Upload       (for Arduino)
  make -k Upload Fuses (for ATmega8)
</pre>

<h2>Generate the STL files</h2>
You can download the STL files from <a href="- todo -">Thingiverse - TODO -</a> or build them yourself.<br>
Check the settings in the hardware/Makefile
<pre>
  cd hardware
  make -k
</pre>

Use your favorite slicer and print the top, bottom, foot and 3x ws2812 parts.

<h2>Assemble the Lamp</h2>
<p>- TODO - WS2812</p>
<p>- TODO - Fiber Optic</p>
<p>- TODO - Combine</p>
<p>- TODO - Put on foot</p>
<p>- TODO - Connect</p>

<h2>Links</h2>
<ul>
  <li>http://www.atmel.com/images/Atmel-8271-8-bit-AVR-Microcontroller-ATmega48A-48PA-88A-88PA-168A-168PA-328-328P_datasheet_Complete.pdf</li>
  <li>http://www.atmel.com/Images/Atmel-2486-8-bit-AVR-microcontroller-ATmega8_L_datasheet.pdf</li>
  <li>http://www.atmel.com/images/atmel-8159-8-bit-avr-microcontroller-atmega8a_datasheet.pdf</li>
  <li>http://www.atmel.com/Images/Atmel-0856-AVR-Instruction-Set-Manual.pdf</li>
</ul>
<ul>
  <li>http://eleccelerator.com/fusecalc/fusecalc.php?chip=atmega8&LOW=E4&HIGH=D9
</ul>


