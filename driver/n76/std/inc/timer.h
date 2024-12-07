
extern uint32_t __data TIMER0CT,TIMER1CT,TIMER2CT,TIMER3CT;
extern uint8_t __data TH0TMP,TL0TMP,TH1TMP,TL1TMP;


void Timer0_AutoReload_Interrupt_Initial(uint8_t u8SYSCLK, uint32_t u32DLYUnit);
void Timer0_ReloadCounter(void);
void Timer1_AutoReload_Interrupt_Initial(uint8_t u8SYSCLK, uint32_t u32DLYUnit);
void Timer1_ReloadCounter(void);
void Timer2_AutoReload_Interrupt_Initial(uint8_t u8SYSCLK, uint32_t u32DLYUnit);
void Timer3_AutoReload_Interrupt_Initial(uint8_t u8SYSCLK, uint32_t u32DLYUnit);
