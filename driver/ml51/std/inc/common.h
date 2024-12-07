#define  GPIO_LED  P32    /* the NuMaker board GPIO LED pin define */
#define  LED_GPIO_MODE          MFP_P32_GPIO
#define  GPIO_LED_QUASI_MODE    P32_QUASI_MODE
#define  UART0_PRINTF_GPIO      P31

#define  BOOT_APROM     0
#define  BOOT_LDROM     2

extern BIT BIT_TMP;
extern unsigned char __data  TA_REG_TMP,BYTE_TMP,SFRS_TMP;

unsigned char Read_APROM_BYTE(const uint16_t __code *u16_addr);
void Software_Reset(unsigned char u8Bootarea);
void PowerDown_Mode(unsigned char PDStatus);
void Idle_Mode(unsigned char IdleStatus);
void Global_Interrupt(unsigned char u8IntStatus);
void _delay_(void);
