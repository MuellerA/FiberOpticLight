;;; generated by ../../BootSetup/BootSetup.rb (2018-02-18 11:55:47 +0100)

	.equiv ATmega328P, 328     	
	.equiv ATmega8, 8          	
	.equiv ATtiny45, 45        	
	.equiv ATtiny85, 85        	
	.equiv ATtiny24, 24        	
	.equiv ATtiny44, 44        	
	.equiv MCU, ATmega8        	
	.equiv MCUclock, 8000000   	

	.equiv TWBR, 0x00          	; TWI Bit Rate Register
	.equiv TWBR_TWBR7, 7       	
	.equiv TWBR_TWBR6, 6       	
	.equiv TWBR_TWBR5, 5       	
	.equiv TWBR_TWBR4, 4       	
	.equiv TWBR_TWBR3, 3       	
	.equiv TWBR_TWBR2, 2       	
	.equiv TWBR_TWBR1, 1       	
	.equiv TWBR_TWBR0, 0       	

	.equiv TWSR, 0x01          	; TWI Status Register
	.equiv TWSR_TWS7, 7        	; TWI Status
	.equiv TWSR_TWS6, 6        	
	.equiv TWSR_TWS5, 5        	
	.equiv TWSR_TWS4, 4        	
	.equiv TWSR_TWS3, 3        	
	.equiv TWSR_TWPS1, 1       	; TWI Prescaler Bits
	.equiv TWSR_TWPS0, 0       	

	.equiv TWAR, 0x02          	; TWI (Slave) Address Register
	.equiv TWAR_TWA6, 7        	; TWI (Slave) Address Register
	.equiv TWAR_TWA5, 6        	
	.equiv TWAR_TWA4, 5        	
	.equiv TWAR_TWA3, 4        	
	.equiv TWAR_TWA2, 3        	
	.equiv TWAR_TWA1, 2        	
	.equiv TWAR_TWA0, 1        	
	.equiv TWAR_TWGCE, 0       	

	.equiv TWDR, 0x03          	; TWI Data Register

	.equiv UBRRL, 0x09         	; USART Baud Rate Register Low

	.equiv UCSRB, 0x0a         	; USART Control and Status Register B
	.equiv UCSRB_RXCIE, 7      	; RX Complete Interrupt Enable
	.equiv UCSRB_TXCIE, 6      	; TX Complete Interrupt Enable
	.equiv UCSRB_UDRIE, 5      	; Register Empty Interrupt Enable
	.equiv UCSRB_RXEN, 4       	; Receiver Enable
	.equiv UCSRB_TXEN, 3       	; Transmitter Enable
	.equiv UCSRB_UCSZ2, 2      	; Character Size
	.equiv UCSRB_RXB8, 1       	; Receive Data Bit 8
	.equiv UCSRB_TXB8, 0       	; Transmit Data Bit 8

	.equiv UCSRA, 0x0b         	; USART Control and Status Register A
	.equiv UCSRA_RXC, 7        	; Receive Complete
	.equiv UCSRA_TXC, 6        	; Transmit Complete
	.equiv UCSRA_UDRE, 5       	; Data Register Empty
	.equiv UCSRA_FE, 4         	; Frame Error
	.equiv UCSRA_DOR, 3        	; Data OverRun
	.equiv UCSRA_PE, 2         	; Parity Error
	.equiv UCSRA_U2X, 1        	; Double Transmission Speed
	.equiv UCSRA_MPCM, 0       	; Multi-processor Communication Mode

	.equiv UDR, 0x0c           	; USART I/O Data Register 0

	.equiv SPCR, 0x0d          	; SPI Control Register
	.equiv SPCR_SPIE, 7        	; Interrupt Enable
	.equiv SPCR_SPE, 6         	; Enable
	.equiv SPCR_DORD, 5        	; Data Order
	.equiv SPCR_MSTR, 4        	; Master/Slave Select
	.equiv SPCR_CPOL, 3        	; Clock Polarity
	.equiv SPCR_CPHA, 2        	; Clock Phase
	.equiv SPCR_SPR1, 1        	; Clock Rate Select
	.equiv SPCR_SPR0, 0        	

	.equiv SPSR, 0x0e          	; SPI Status Register
	.equiv SPSR_SPIF, 7        	; Interrupt Flag
	.equiv SPSR_WCOL, 6        	; Write COLlision Flag
	.equiv SPSR_SPI2X, 0       	; Double Speed

	.equiv SPDR, 0x0f          	; SPI Data Register

	.equiv PIND, 0x10          	; Port D Input Pins Address
	.equiv PIND_7, 7           	
	.equiv PIND_6, 6           	
	.equiv PIND_5, 5           	
	.equiv PIND_4, 4           	
	.equiv PIND_3, 3           	
	.equiv PIND_2, 2           	
	.equiv PIND_1, 1           	
	.equiv PIND_0, 0           	

	.equiv DDRD, 0x11          	; Port D Data Direction Register
	.equiv DDRD_7, 7           	
	.equiv DDRD_6, 6           	
	.equiv DDRD_5, 5           	
	.equiv DDRD_4, 4           	
	.equiv DDRD_3, 3           	
	.equiv DDRD_2, 2           	
	.equiv DDRD_1, 1           	
	.equiv DDRD_0, 0           	

	.equiv PORTD, 0x12         	; Port D Data Register
	.equiv PORTD_7, 7          	
	.equiv PORTD_6, 6          	
	.equiv PORTD_5, 5          	
	.equiv PORTD_4, 4          	
	.equiv PORTD_3, 3          	
	.equiv PORTD_2, 2          	
	.equiv PORTD_1, 1          	
	.equiv PORTD_0, 0          	

	.equiv PINC, 0x13          	; Port C Input Pins Address
	.equiv PINC_6, 6           	
	.equiv PINC_5, 5           	
	.equiv PINC_4, 4           	
	.equiv PINC_3, 3           	
	.equiv PINC_2, 2           	
	.equiv PINC_1, 1           	
	.equiv PINC_0, 0           	

	.equiv DDRC, 0x14          	; Port C Data Direction Register
	.equiv DDRC_6, 6           	
	.equiv DDRC_5, 5           	
	.equiv DDRC_4, 4           	
	.equiv DDRC_3, 3           	
	.equiv DDRC_2, 2           	
	.equiv DDRC_1, 1           	
	.equiv DDRC_0, 0           	

	.equiv PORTC, 0x15         	; Port C Data Register
	.equiv PORTC_6, 6          	
	.equiv PORTC_5, 5          	
	.equiv PORTC_4, 4          	
	.equiv PORTC_3, 3          	
	.equiv PORTC_2, 2          	
	.equiv PORTC_1, 1          	
	.equiv PORTC_0, 0          	

	.equiv PINB, 0x16          	; Port B Input Pins Address
	.equiv PINB_7, 7           	
	.equiv PINB_6, 6           	
	.equiv PINB_5, 5           	
	.equiv PINB_4, 4           	
	.equiv PINB_3, 3           	
	.equiv PINB_2, 2           	
	.equiv PINB_1, 1           	
	.equiv PINB_0, 0           	

	.equiv DDRB, 0x17          	; Port B Data Direction Register
	.equiv DDRB_7, 7           	
	.equiv DDRB_6, 6           	
	.equiv DDRB_5, 5           	
	.equiv DDRB_4, 4           	
	.equiv DDRB_3, 3           	
	.equiv DDRB_2, 2           	
	.equiv DDRB_1, 1           	
	.equiv DDRB_0, 0           	

	.equiv PORTB, 0x18         	; Port B Data Register
	.equiv PORTB_7, 7          	
	.equiv PORTB_6, 6          	
	.equiv PORTB_5, 5          	
	.equiv PORTB_4, 4          	
	.equiv PORTB_3, 3          	
	.equiv PORTB_2, 2          	
	.equiv PORTB_1, 1          	
	.equiv PORTB_0, 0          	

	.equiv EECR, 0x1c          	; EEPROM Control Register
	.equiv EECR_EERIE, 3       	; EEPROM Ready Interrupt Enable
	.equiv EECR_EEMWE, 2       	; EEPROM Master Write Enable
	.equiv EECR_EEWE, 1        	; EEPROM Write Enable
	.equiv EECR_EERE, 0        	; EEPROM Read Enable

	.equiv EEDR, 0x1d          	; EEPROM Data Register

	.equiv EEARL, 0x1e         	; EEPROM Address Register Low

	.equiv EEARH, 0x1f         	; EEPROM Address Register High

	.equiv UBRRH, 0x20         	; USART Baud Rate Register High
	.equiv UBRRH_URSEL, 7      	; Register Select
	.equiv UBRRH_UBRR11, 3     	; USART Baud Rate Register
	.equiv UBRRH_UBRR10, 2     	
	.equiv UBRRH_UBRR9, 1      	
	.equiv UBRRH_UBRR8, 0      	

	.equiv UCSRC, 0x20         	; USART Control and Status Register 0 C
	.equiv UCSRC_URSEL, 7      	; Register Select
	.equiv UCSRC_UMSEL, 6      	; Mode Select
	.equiv UCSRC_UPM1, 5       	; Parity Mode
	.equiv UCSRC_UPM0, 4       	
	.equiv UCSRC_USBS, 3       	; Stop Bit Select
	.equiv UCSRC_UCSZ1, 2      	; Character Size
	.equiv UCSRC_UCSZ0, 1      	
	.equiv UCSRC_UCPOL, 0      	; Clock Polarity

	.equiv TCNT0, 0x32         	; Timer/Counter Register
	.equiv TCNT0_TCNT07, 7     	
	.equiv TCNT0_TCNT06, 6     	
	.equiv TCNT0_TCNT05, 5     	
	.equiv TCNT0_TCNT04, 4     	
	.equiv TCNT0_TCNT03, 3     	
	.equiv TCNT0_TCNT02, 2     	
	.equiv TCNT0_TCNT01, 1     	
	.equiv TCNT0_TCNT00, 0     	

	.equiv TCCR0, 0x33         	; Timer/Counter Control Register
	.equiv TCCR0_CS02, 2       	; Clock Select
	.equiv TCCR0_CS01, 1       	
	.equiv TCCR0_CS00, 0       	

	.equiv MCUCR, 0x35         	; MCU Control Register
	.equiv MCUCR_SE, 7         	; Sleep Enable
	.equiv MCUCR_SM2, 6        	; Sleep Mode Select Bit 2
	.equiv MCUCR_SM1, 5        	; Sleep Mode Select Bit 1
	.equiv MCUCR_SM0, 4        	; Sleep Mode Select Bit 0
	.equiv MCUCR_ISC11, 3      	; Interrupt Sense Control 1 Bit 1
	.equiv MCUCR_ISC10, 2      	; Interrupt Sense Control 1 Bit 0
	.equiv MCUCR_ISC01, 1      	; Interrupt Sense Control 0 Bit 1
	.equiv MCUCR_ISC00, 0      	; Interrupt Sense Control 0 Bit 0

	.equiv TWCR, 0x36          	; TWI Control Register
	.equiv TWCR_TWINT, 7       	; TWI Interrupt Flag
	.equiv TWCR_TWEA, 6        	; TWI Enable Acknowledge Bit
	.equiv TWCR_TWSTA, 5       	; TWI START Condition Bit
	.equiv TWCR_TWSTO, 4       	; TWI STOP Condition Bit
	.equiv TWCR_TWWC, 3        	; TWI Write Collision Flag
	.equiv TWCR_TWEN, 2        	; TWI Enable Bit
	.equiv TWCR_TWIE, 0        	; TWI Interrupt Enable

	.equiv TIFR, 0x38          	; Timer/Counter Interrupt Flag Register
	.equiv TIFR_OCF2, 7        	; Output Compare Flag 2
	.equiv TIFR_TOV2, 6        	; Timer/Counter2 Overflow Flag
	.equiv TIFR_ICF1, 5        	; Timer/Counter1, Input Capture Flag
	.equiv TIFR_OCF1A, 4       	; Timer/Counter1, Output Compare A Match Flag
	.equiv TIFR_OCF1B, 3       	; Timer/Counter1, Output Compare B Match Flag
	.equiv TIFR_TOV1, 2        	; Timer/Counter1, Overflow Flag
	.equiv TIFR_TOV0, 0        	; Timer/Counter0 Overflow Flag

	.equiv TIMSK, 0x39         	; Timer/Counter Interrupt Mask Register
	.equiv TIMSK_OCIE2, 7      	; Timer/Counter2 Output Compare Match Interrupt Enable
	.equiv TIMSK_TOIE2, 6      	; Timer/Counter2 Overflow Interrupt Enable
	.equiv TIMSK_TICIE1, 5     	; Timer/Counter1, Input Capture Interrupt Enable
	.equiv TIMSK_OCIE1A, 4     	; Timer/Counter1, Output Compare A Match Interrupt Enable
	.equiv TIMSK_OCIE1B, 3     	; Timer/Counter1, Output Compare B Match Interrupt Enable
	.equiv TIMSK_TOIE1, 2      	; Timer/Counter1, Overflow Interrupt Enable
	.equiv TIMSK_TOIE, 0       	; Timer/Counter0 Overflow Interrupt Enable

	.equiv GICR, 0x3b          	; General Interrupt Control Register
	.equiv GICR_INT1, 7        	; External Interrupt Request 1 Enable
	.equiv GICR_INT0, 6        	; External Interrupt Request 0 Enable
	.equiv GICR_IVSEL, 1       	; Interrupt Vector Select
	.equiv GICR_IVCE, 0        	; Interrupt Vector Change Enable

	.equiv SPL, 0x3d           	; Stack Pointer Low

	.equiv SPH, 0x3e           	; Stack Pointer High

	.equiv SREG, 0x3f          	; Status Register

	.equiv RAMSTART, 0x60      	; RAM Start

	.equiv EEPROMEND, 0x1ff    	; EEPROM End

	.equiv RAMEND, 0x45f       	; RAM End

	.equiv ROMEND, 0xfff       	; ROM End

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

;;; generated by ../../BootSetup/BootSetup.rb (2018-02-18 11:55:47 +0100)
