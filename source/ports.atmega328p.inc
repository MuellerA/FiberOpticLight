;;; generated by ../../BootSetup/BootSetup.rb (2018-02-18 11:55:51 +0100)

	.equiv ATmega328P, 328     	
	.equiv ATmega8, 8          	
	.equiv ATtiny45, 45        	
	.equiv ATtiny85, 85        	
	.equiv ATtiny24, 24        	
	.equiv ATtiny44, 44        	
	.equiv MCU, ATmega328P     	
	.equiv MCUclock, 8000000   	

	.equiv PINB, 0x03          	; Port B Input Pins Address
	.equiv PINB_7, 7           	
	.equiv PINB_6, 6           	
	.equiv PINB_5, 5           	
	.equiv PINB_4, 4           	
	.equiv PINB_3, 3           	
	.equiv PINB_2, 2           	
	.equiv PINB_1, 1           	
	.equiv PINB_0, 0           	

	.equiv DDRB, 0x04          	; Port B Data Direction Register
	.equiv DDRB_7, 7           	
	.equiv DDRB_6, 6           	
	.equiv DDRB_5, 5           	
	.equiv DDRB_4, 4           	
	.equiv DDRB_3, 3           	
	.equiv DDRB_2, 2           	
	.equiv DDRB_1, 1           	
	.equiv DDRB_0, 0           	

	.equiv PORTB, 0x05         	; Port B Data Register
	.equiv PORTB_7, 7          	
	.equiv PORTB_6, 6          	
	.equiv PORTB_5, 5          	
	.equiv PORTB_4, 4          	
	.equiv PORTB_3, 3          	
	.equiv PORTB_2, 2          	
	.equiv PORTB_1, 1          	
	.equiv PORTB_0, 0          	

	.equiv PINC, 0x06          	; Port C Input Pins Address
	.equiv PINC_6, 6           	
	.equiv PINC_5, 5           	
	.equiv PINC_4, 4           	
	.equiv PINC_3, 3           	
	.equiv PINC_2, 2           	
	.equiv PINC_1, 1           	
	.equiv PINC_0, 0           	

	.equiv DDRC, 0x07          	; Port C Data Direction Register
	.equiv DDRC_6, 6           	
	.equiv DDRC_5, 5           	
	.equiv DDRC_4, 4           	
	.equiv DDRC_3, 3           	
	.equiv DDRC_2, 2           	
	.equiv DDRC_1, 1           	
	.equiv DDRC_0, 0           	

	.equiv PORTC, 0x08         	; Port C Data Register
	.equiv PORTC_6, 6          	
	.equiv PORTC_5, 5          	
	.equiv PORTC_4, 4          	
	.equiv PORTC_3, 3          	
	.equiv PORTC_2, 2          	
	.equiv PORTC_1, 1          	
	.equiv PORTC_0, 0          	

	.equiv PIND, 0x09          	; Port D Input Pins Address
	.equiv PIND_7, 7           	
	.equiv PIND_6, 6           	
	.equiv PIND_5, 5           	
	.equiv PIND_4, 4           	
	.equiv PIND_3, 3           	
	.equiv PIND_2, 2           	
	.equiv PIND_1, 1           	
	.equiv PIND_0, 0           	

	.equiv DDRD, 0x0a          	; Port D Data Direction Register
	.equiv DDRD_7, 7           	
	.equiv DDRD_6, 6           	
	.equiv DDRD_5, 5           	
	.equiv DDRD_4, 4           	
	.equiv DDRD_3, 3           	
	.equiv DDRD_2, 2           	
	.equiv DDRD_1, 1           	
	.equiv DDRD_0, 0           	

	.equiv PORTD, 0x0b         	; Port D Data Register
	.equiv PORTD_7, 7          	
	.equiv PORTD_6, 6          	
	.equiv PORTD_5, 5          	
	.equiv PORTD_4, 4          	
	.equiv PORTD_3, 3          	
	.equiv PORTD_2, 2          	
	.equiv PORTD_1, 1          	
	.equiv PORTD_0, 0          	

	.equiv TIFR0, 0x15         	; Timer/Counter 0 Interrupt Flag Register
	.equiv TIFR0_OCF0B, 2      	; Timer/Counter 0 Output Compare B Match Flag
	.equiv TIFR0_OCF0A, 1      	; Timer/Counter 0 Output Compare A Match Flag
	.equiv TIFR0_TOV0, 0       	; Timer/Counter0 Overflow Flag

	.equiv EIMSK, 0x1d         	; External Interrupt Mask Register
	.equiv EIMSK_INT1, 1       	; External Interrupt Request 1 Enable
	.equiv EIMSK_INT0, 0       	; External Interrupt Request 0 Enable

	.equiv GPIOR0, 0x1e        	; General Purpose I/O Register 0

	.equiv EECR, 0x1f          	; EEPROM Control Register
	.equiv EECR_EEPM1, 5       	; EEPROM Programming Mode 1
	.equiv EECR_EEPM0, 4       	; EEPROM Programming Mode 0
	.equiv EECR_EERIE, 3       	; EEPROM Ready Interrupt Enable
	.equiv EECR_EEMPE, 2       	; EEPROM Master Write Enable
	.equiv EECR_EEPE, 1        	; EEPROM Write Enable
	.equiv EECR_EERE, 0        	; EEPROM Read Enable

	.equiv EEDR, 0x20          	; EEPROM Data Register

	.equiv EEARL, 0x21         	; EEPROM Address Register Low

	.equiv EEARH, 0x22         	; EEPROM Address Register High

	.equiv TCCR0A, 0x24        	; Timer/Counter Control Register A
	.equiv TCCR0A_COM0A1, 7    	; Compare Match Output A Mode
	.equiv TCCR0A_COM0A0, 6    	
	.equiv TCCR0A_COM0B1, 5    	; Compare Match Output B Mode
	.equiv TCCR0A_COM0B0, 4    	
	.equiv TCCR0A_WGM01, 1     	; Waveform Generation Mode
	.equiv TCCR0A_WGM00, 0     	

	.equiv TCCR0B, 0x25        	; Timer/Counter Control Register B
	.equiv TCCR0B_FOC0A, 7     	; Force Output Compare A
	.equiv TCCR0B_FOC0B, 6     	; Force Output Compare B
	.equiv TCCR0B_WGM02, 3     	; Waveform Generation Mode
	.equiv TCCR0B_CS02, 2      	; Clock Select
	.equiv TCCR0B_CS01, 1      	
	.equiv TCCR0B_CS00, 0      	

	.equiv TCNT0, 0x26         	; Timer/Counter Register
	.equiv TCNT0_TCNT07, 7     	
	.equiv TCNT0_TCNT06, 6     	
	.equiv TCNT0_TCNT05, 5     	
	.equiv TCNT0_TCNT04, 4     	
	.equiv TCNT0_TCNT03, 3     	
	.equiv TCNT0_TCNT02, 2     	
	.equiv TCNT0_TCNT01, 1     	
	.equiv TCNT0_TCNT00, 0     	

	.equiv OCR0A, 0x27         	; Output Compare Register A
	.equiv OCR0A_OCR0A7, 7     	
	.equiv OCR0A_OCR0A6, 6     	
	.equiv OCR0A_OCR0A5, 5     	
	.equiv OCR0A_OCR0A4, 4     	
	.equiv OCR0A_OCR0A3, 3     	
	.equiv OCR0A_OCR0A2, 2     	
	.equiv OCR0A_OCR0A1, 1     	
	.equiv OCR0A_OCR0A0, 0     	

	.equiv OCR0B, 0x28         	; Output Compare Register B
	.equiv OCR0B_OCR0B7, 7     	
	.equiv OCR0B_OCR0B6, 6     	
	.equiv OCR0B_OCR0B5, 5     	
	.equiv OCR0B_OCR0B4, 4     	
	.equiv OCR0B_OCR0B3, 3     	
	.equiv OCR0B_OCR0B2, 2     	
	.equiv OCR0B_OCR0B1, 1     	
	.equiv OCR0B_OCR0B0, 0     	

	.equiv GPIOR1, 0x2a        	; General Purpose I/O Register 1

	.equiv GPIOR2, 0x2b        	; General Purpose I/O Register 2

	.equiv SPCR, 0x2c          	; SPI Control Register
	.equiv SPCR_SPIE, 7        	; Interrupt Enable
	.equiv SPCR_SPE, 6         	; Enable
	.equiv SPCR_DORD, 5        	; Data Order
	.equiv SPCR_MSTR, 4        	; Master/Slave Select
	.equiv SPCR_CPOL, 3        	; Clock Polarity
	.equiv SPCR_CPHA, 2        	; Clock Phase
	.equiv SPCR_SPR1, 1        	; Clock Rate Select
	.equiv SPCR_SPR0, 0        	

	.equiv SPSR, 0x2d          	; SPI Status Register
	.equiv SPSR_SPIF, 7        	; Interrupt Flag
	.equiv SPSR_WCOL, 6        	; Write COLlision Flag
	.equiv SPSR_SPI2X, 0       	; Double Speed

	.equiv SPDR, 0x2e          	; SPI Data Register

	.equiv SMCR, 0x33          	; Sleep Mode Control Register
	.equiv SMCR_SM2, 3         	; Sleep Mode Select
	.equiv SMCR_SM1, 2         	
	.equiv SMCR_SM0, 1         	
	.equiv SMCR_SE, 0          	; Sleep Enable

	.equiv MCUSR, 0x34         	; MCU Status Register
	.equiv MCUSR_WDRF, 3       	; Watchdog Reset Flag
	.equiv MCUSR_BORF, 2       	; Brown-out Reset Flag
	.equiv MCUSR_EXTRF, 1      	; External Reset Flag
	.equiv MCUSR_PORF, 0       	; Power-on Reset Flag

	.equiv MCUCR, 0x35         	; MCU Control Register
	.equiv MCUCR_BODS, 6       	; BOD Sleep
	.equiv MCUCR_BODSE, 5      	; BOD Sleep Enable
	.equiv MCUCR_PUD, 4        	; Pull-up Disable
	.equiv MCUCR_IVSEL, 1      	; Interrupt Vector Select
	.equiv MCUCR_IVCE, 0       	; Interrupt Vector Change Enable

	.equiv SPL, 0x3d           	; Stack Pointer Low

	.equiv SPH, 0x3e           	; Stack Pointer High

	.equiv SREG, 0x3f          	; Status Register

	.equiv WDTCSR, 0x60        	; Watchdog Timer Control and Status Register
	.equiv WDTCSR_WDIF, 7      	; Watchdog Timeout Interrupt Flag
	.equiv WDTCSR_WDIE, 6      	; Watchdog Timeout Interrupt Enable
	.equiv WDTCSR_WDP3, 5      	; Watchdog Timer Prescaler
	.equiv WDTCSR_WDCE, 4      	; Watchdog Change Enable
	.equiv WDTCSR_WDE, 3       	; Watchdog Enable
	.equiv WDTCSR_WDP2, 2      	; Watchdog Timer Prescaler
	.equiv WDTCSR_WDP1, 1      	; Watchdog Timer Prescaler
	.equiv WDTCSR_WDP0, 0      	; Watchdog Timer Prescaler

	.equiv CLKPR, 0x61         	; Clock Prescale Register
	.equiv CLKPR_CLKPCE, 7     	; Clock Prescaler Change Enable
	.equiv CLKPR_CLKPS3, 3     	; Clock Prescaler Select
	.equiv CLKPR_CLKPS2, 2     	
	.equiv CLKPR_CLKPS1, 1     	
	.equiv CLKPR_CLKPS0, 0     	

	.equiv PRR, 0x64           	; Power Reduction Register
	.equiv PRR_PRTWI, 7        	; Power Reduction TWI
	.equiv PRR_PRTIM2, 6       	; Power Reduction Timer/Counter2
	.equiv PRR_PRTIM0, 5       	; Power Reduction Timer/Counter0
	.equiv PRR_PRTIM1, 3       	; Power Reduction Timer/Counter1
	.equiv PRR_PRSPI, 2        	; Power Reduction Serial Peripheral Interface
	.equiv PRR_PRUSART0, 1     	; Power Reduction USART0
	.equiv PRR_PRADC, 0        	; Power Reduction ADC

	.equiv EICRA, 0x69         	; External Interrupt Control Register A
	.equiv EICRA_ISC11, 3      	; Interrupt Sense Control 1
	.equiv EICRA_ISC10, 2      	
	.equiv EICRA_ISC01, 1      	; Interrupt Sense Control 0
	.equiv EICRA_ISC00, 0      	

	.equiv TIMSK0, 0x6e        	; Timer/Counter Interrupt Mask Register
	.equiv TIMSK0_OCIE0B, 2    	; Timer/Counter Output Compare Match B Interrupt Enable
	.equiv TIMSK0_OCIE0A, 1    	; Timer/Counter0 Output Compare Match A Interrupt Enable
	.equiv TIMSK0_TOIE0, 0     	; Timer/Counter0 Overflow Interrupt Enable

	.equiv ADCL, 0x78          	; ADC Data Register Low

	.equiv ADCH, 0x79          	; ADC Data Register High

	.equiv ADCSRA, 0x7a        	; ADC Control and Status Register A
	.equiv ADCSRA_ADEN, 7      	; ADC Enable
	.equiv ADCSRA_ADSC, 6      	; ADC Start Conversion
	.equiv ADCSRA_ADATE, 5     	; ADC Auto Trigger Enable
	.equiv ADCSRA_ADIF, 4      	; ADC Interrupt Flag
	.equiv ADCSRA_ADIE, 3      	; ADC Interrupt Enable
	.equiv ADCSRA_ADPS2, 2     	; ADC Prescaler Select Bit 2
	.equiv ADCSRA_ADPS1, 1     	; ADC Prescaler Select Bit 1
	.equiv ADCSRA_ADPS0, 0     	; ADC Prescaler Select Bit 0

	.equiv ADCSRB, 0x7b        	; ADC Control and Status Register B
	.equiv ADCSRB_ACME, 6      	; Analog Comparator Multiplexer Enabled
	.equiv ADCSRB_ADTS2, 2     	; ADC Auto Trigger Source 2
	.equiv ADCSRB_ADTS1, 1     	; ADC Auto Trigger Source 1
	.equiv ADCSRB_ADTS0, 0     	; ADC Auto Trigger Source 0

	.equiv ADMUX, 0x7c         	; ADC Multiplexer Selection Register
	.equiv ADMUX_REFS1, 7      	; Reference Selection Bit 1
	.equiv ADMUX_REFS0, 6      	; Reference Selection Bit 0
	.equiv ADMUX_ADLAR, 5      	; ADC Left Adjust Result
	.equiv ADMUX_MUX3, 3       	; Analog Channel Selection Bit 3
	.equiv ADMUX_MUX2, 2       	; Analog Channel Selection Bit 2
	.equiv ADMUX_MUX1, 1       	; Analog Channel Selection Bit 1
	.equiv ADMUX_MUX0, 0       	; Analog Channel Selection Bit 0

	.equiv DIDR0, 0x7e         	; Digital Input Disable Register 0
	.equiv DIDR0_ADC5D, 5      	; Digital Input Disable 5
	.equiv DIDR0_ADC4D, 4      	; Digital Input Disable 5
	.equiv DIDR0_ADC3D, 3      	; Digital Input Disable 4
	.equiv DIDR0_ADC2D, 2      	; Digital Input Disable 3
	.equiv DIDR0_ADC1D, 1      	; Digital Input Disable 2
	.equiv DIDR0_ADC0D, 0      	; Digital Input Disable 1

	.equiv TWBR, 0xb8          	; TWI Bit Rate Register
	.equiv TWBR_TWBR7, 7       	
	.equiv TWBR_TWBR6, 6       	
	.equiv TWBR_TWBR5, 5       	
	.equiv TWBR_TWBR4, 4       	
	.equiv TWBR_TWBR3, 3       	
	.equiv TWBR_TWBR2, 2       	
	.equiv TWBR_TWBR1, 1       	
	.equiv TWBR_TWBR0, 0       	

	.equiv TWSR, 0xb9          	; TWI Status Register
	.equiv TWSR_TWS7, 7        	; TWI Status
	.equiv TWSR_TWS6, 6        	
	.equiv TWSR_TWS5, 5        	
	.equiv TWSR_TWS4, 4        	
	.equiv TWSR_TWS3, 3        	
	.equiv TWSR_TWPS1, 1       	; TWI Prescaler Bits
	.equiv TWSR_TWPS0, 0       	

	.equiv TWAR, 0xba          	; TWI (Slave) Address Register
	.equiv TWAR_TWA6, 7        	; TWI (Slave) Address Register
	.equiv TWAR_TWA5, 6        	
	.equiv TWAR_TWA4, 5        	
	.equiv TWAR_TWA3, 4        	
	.equiv TWAR_TWA2, 3        	
	.equiv TWAR_TWA1, 2        	
	.equiv TWAR_TWA0, 1        	
	.equiv TWAR_TWGCE, 0       	

	.equiv TWDR, 0xbb          	; TWI Data Register

	.equiv TWCR, 0xbc          	; TWI Control Register
	.equiv TWCR_TWINT, 7       	; TWI Interrupt Flag
	.equiv TWCR_TWEA, 6        	; TWI Enable Acknowledge Bit
	.equiv TWCR_TWSTA, 5       	; TWI START Condition Bit
	.equiv TWCR_TWSTO, 4       	; TWI STOP Condition Bit
	.equiv TWCR_TWWC, 3        	; TWI Write Collision Flag
	.equiv TWCR_TWEN, 2        	; TWI Enable Bit
	.equiv TWCR_TWIE, 0        	; TWI Interrupt Enable

	.equiv TWAMR, 0xbd         	; TWI (Slave) Address Mask Register
	.equiv TWAMR_TWAM6, 7      	; TWI Address Mask
	.equiv TWAMR_TWAM5, 6      	
	.equiv TWAMR_TWAM4, 5      	
	.equiv TWAMR_TWAM3, 4      	
	.equiv TWAMR_TWAM2, 3      	
	.equiv TWAMR_TWAM1, 2      	
	.equiv TWAMR_TWAM0, 1      	

	.equiv UCSR0A, 0xc0        	; USART Control and Status Register 0 A
	.equiv UCSR0A_RXC0, 7      	; Receive Complete
	.equiv UCSR0A_TXC0, 6      	; Transmit Complete
	.equiv UCSR0A_UDRE0, 5     	; Data Register Empty
	.equiv UCSR0A_FE0, 4       	; Frame Error
	.equiv UCSR0A_DOR0, 3      	; Data OverRun
	.equiv UCSR0A_UPE0, 2      	; Parity Error
	.equiv UCSR0A_U2X0, 1      	; Double Transmission Speed
	.equiv UCSR0A_MPCM0, 0     	; Multi-processor Communication Mode

	.equiv UCSR0B, 0xc1        	; USART Control and Status Register 0 B
	.equiv UCSR0B_RXCIE0, 7    	; RX Complete Interrupt Enable
	.equiv UCSR0B_TXCIE0, 6    	; TX Complete Interrupt Enable
	.equiv UCSR0B_UDRIE0, 5    	; Register Empty Interrupt Enable
	.equiv UCSR0B_RXEN0, 4     	; Receiver Enable
	.equiv UCSR0B_TXEN0, 3     	; Transmitter Enable
	.equiv UCSR0B_UCSZ02, 2    	; Character Size
	.equiv UCSR0B_RXB80, 1     	; Receive Data Bit 8
	.equiv UCSR0B_TXB80, 0     	; Transmit Data Bit 8

	.equiv UCSR0C, 0xc2        	; USART Control and Status Register 0 C
	.equiv UCSR0C_UMSEL01, 7   	; Mode Select
	.equiv UCSR0C_UMSEL00, 6   	
	.equiv UCSR0C_UPM01, 5     	; Parity Mode
	.equiv UCSR0C_UPM00, 4     	
	.equiv UCSR0C_USBS0, 3     	; Stop Bit Select
	.equiv UCSR0C_UCSZ01_UDORD0, 2	; Character Size
	.equiv UCSR0C_UCSZ00_UCPHA0, 1	
	.equiv UCSR0C_UCPOL0, 0    	; Clock Polarity

	.equiv UBRR0L, 0xc4        	; USART Baud Rate Register Low

	.equiv UBRR0H, 0xc5        	; USART Baud Rate Register High

	.equiv UDR0, 0xc6          	; USART I/O Data Register 0

	.equiv RAMSTART, 0x100     	; RAM Start

	.equiv EEPROMEND, 0x3ff    	; EEPROM End

	.equiv RAMEND, 0x8ff       	; RAM End

	.equiv ROMEND, 0x3fff      	; ROM End

	.equiv ZH, 31              	; Z high
	.equiv ZL, 30              	; Z low
	.equiv YH, 29              	; Y high
	.equiv YL, 28              	; Y low
	.equiv XH, 27              	; X high
	.equiv XL, 26              	; X low

	.equiv LedPrt, PORTB       	
	.equiv LedPin, PINB        	
	.equiv LedDdr, DDRB        	
	.equiv LedIdx, 2           	

	.equiv Int0_Enable, 0      	
	.equiv Int1_Enable, 0      	
	.equiv PCInt0_Enable, 0    	
	.equiv PCInt1_Enable, 0    	
	.equiv PCInt2_Enable, 0    	
	.equiv Timer0_Enable, 0    	
	.equiv Timer1_Enable, 0    	
	.equiv Timer2_Enable, 0    	
	.equiv WatchDog_Enable, 0  	
	.equiv USART_Enable, 0     	
	.equiv SPI_Enable, 0       	
	.equiv TwoWire_Enable, 0   	
	.equiv USI_Enable, 0       	
	.equiv ADC_Enable, 0       	
	.equiv EEPROM_Enable, 0    	
	.equiv SelfProg_Enable, 0  	
	.equiv PortB_Enable, 0     	
	.equiv PortC_Enable, 0     	
	.equiv PortA_Enable, 0     	

;;; generated by ../../BootSetup/BootSetup.rb (2018-02-18 11:55:51 +0100)
