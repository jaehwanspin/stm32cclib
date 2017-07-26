#include "isr_extend.hh"
#include "isr_extend_impl.hh" 

__attribute__((naked, noreturn)) void isr::default_handler_extend() {
    // nothing in prototype
    while (true);
}

__attribute__((section(".vectors.device"))) extern const isr::device_vectors device_vectors_table = {
    isr::WWDG,
    isr::PVD,
    isr::tamp_stamp,
    isr::rtc_wkup,
    isr::flash,
    isr::RCC,
    isr::EXTI0,
    isr::EXTI1,
    isr::EXTI2,
    isr::EXTI3,
    isr::EXTI4,
    isr::DMA1_channel1,
    isr::DMA1_channel2,
    isr::DMA1_channel3,
    isr::DMA1_channel4,
    isr::DMA1_channel5,
    isr::DMA1_channel6,
    isr::DMA1_channel7,
    isr::ADC1,
    isr::USB_HP,
    isr::USB_LP,
    isr::DAC,
    isr::COMP_TSC,
    isr::EXTI9_5_IRQ,
    isr::LCD,
    isr::TIM9,
    isr::TIM10,
    isr::TIM11,
    isr::TIM2,
    isr::TIM3,
    isr::TIM4,
    isr::I2C1_EV,
    isr::I2C1_ER,
    isr::I2C2_EV,
    isr::I2C2_ER,
    isr::SPI1,
    isr::SPI2,
    isr::USART1,
    isr::USART2,
    isr::USART3,
    isr::EXTI15_10,
    isr::RTC_Alarm,
    isr::USB_WKUP,
    isr::TIM6,
    isr::TIM7
};
