#define  GPIO_LED                P05               /* NuMaker LED define */
#define  GPIO_LED_QUASI_MODE     P05_QUASI_MODE
#define  GPIO_PRINTF             P06

#define  BOOT_APROM     0
#define  BOOT_LDROM     2

extern BIT BIT_TMP;


extern __data uint8_t TA_REG_TMP,BYTE_TMP,SFRS_TMP;
extern uint8_t Read_APROM_BYTE(const uint16_t __code *u16_addr);

void Software_Reset(uint8_t u8Bootarea);
void PowerDown_Mode(uint8_t PDStatus);
void Idle_Mode(uint8_t IdleStatus);
void _delay_(void);
void Global_Interrupt(uint8_t u8IntStatus);
