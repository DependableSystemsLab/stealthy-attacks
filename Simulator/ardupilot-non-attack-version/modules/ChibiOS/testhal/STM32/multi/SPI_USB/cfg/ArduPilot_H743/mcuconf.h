/*
    ChibiOS - Copyright (C) 2006..2018 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef MCUCONF_H
#define MCUCONF_H

/*
 * STM32H7xx drivers configuration.
 * The following settings override the default settings present in
 * the various device driver implementation headers.
 * Note that the settings for each driver only have effect if the whole
 * driver is enabled in halconf.h.
 *
 * IRQ priorities:
 * 15...0       Lowest...Highest.
 *
 * DMA priorities:
 * 0...3        Lowest...Highest.
 */

#define STM32H7xx_MCUCONF
#define STM32H743_MCUCONF

/*
 * General settings.
 */
#define STM32_NO_INIT                       FALSE
#define STM32_SYS_CK_ENFORCED_VALUE         STM32_HSICLK

/*
 * Memory attributes settings.
 */
#define STM32_NOCACHE_SRAM1_SRAM2           FALSE
#define STM32_NOCACHE_SRAM3                 TRUE

/*
 * PWR system settings.
 * Reading STM32 Reference Manual is required.
 * Register constants are taken from the ST header.
 */
#define STM32_VOS                           STM32_VOS_SCALE1
#define STM32_PWR_CR1                       (PWR_CR1_SVOS_1 | PWR_CR1_SVOS_0)
#define STM32_PWR_CR2                       (PWR_CR2_BREN)
#define STM32_PWR_CR3                       (PWR_CR3_LDOEN | PWR_CR3_USB33DEN)
#define STM32_PWR_CPUCR                     0

/*
 * IRQ system settings.
 */
#define STM32_IRQ_EXTI0_PRIORITY            6
#define STM32_IRQ_EXTI1_PRIORITY            6
#define STM32_IRQ_EXTI2_PRIORITY            6
#define STM32_IRQ_EXTI3_PRIORITY            6
#define STM32_IRQ_EXTI4_PRIORITY            6
#define STM32_IRQ_EXTI5_9_PRIORITY          6
#define STM32_IRQ_EXTI10_15_PRIORITY        6
#define STM32_IRQ_EXTI16_PRIORITY           6
#define STM32_IRQ_EXTI17_PRIORITY           15
#define STM32_IRQ_EXTI18_PRIORITY           6
#define STM32_IRQ_EXTI19_PRIORITY           6
#define STM32_IRQ_EXTI20_PRIORITY           6
#define STM32_IRQ_EXTI21_PRIORITY           15
#define STM32_IRQ_EXTI22_PRIORITY           15

/*
 * ADC driver system settings.
 */
#define STM32_ADC_DUAL_MODE                 FALSE
#define STM32_ADC_COMPACT_SAMPLES           FALSE
#define STM32_ADC_USE_ADC12                 TRUE
#define STM32_ADC_USE_ADC3                  FALSE
#define STM32_ADC_ADC12_DMA_PRIORITY        2
#define STM32_ADC_ADC3_DMA_PRIORITY         2
#define STM32_ADC_ADC12_IRQ_PRIORITY        5
#define STM32_ADC_ADC3_IRQ_PRIORITY         5
#define STM32_ADC_ADC12_CLOCK_MODE          ADC_CCR_CKMODE_AHB_DIV4
#define STM32_ADC_ADC3_CLOCK_MODE           ADC_CCR_CKMODE_AHB_DIV4

/*
 * CAN driver system settings.
 */
#define STM32_CAN_USE_CAN1                  FALSE
#define STM32_CAN_USE_CAN2                  FALSE
#define STM32_CAN_USE_CAN3                  FALSE
#define STM32_CAN_CAN1_IRQ_PRIORITY         11
#define STM32_CAN_CAN2_IRQ_PRIORITY         11
#define STM32_CAN_CAN3_IRQ_PRIORITY         11

/*
 * DAC driver system settings.
 */
#define STM32_DAC_DUAL_MODE                 FALSE
#define STM32_DAC_USE_DAC1_CH1              FALSE
#define STM32_DAC_USE_DAC1_CH2              FALSE
#define STM32_DAC_DAC1_CH1_IRQ_PRIORITY     10
#define STM32_DAC_DAC1_CH2_IRQ_PRIORITY     10
#define STM32_DAC_DAC1_CH1_DMA_PRIORITY     2
#define STM32_DAC_DAC1_CH2_DMA_PRIORITY     2
#define STM32_DAC_DAC1_CH1_DMA_STREAM       STM32_DMA_STREAM_ID_ANY
#define STM32_DAC_DAC1_CH2_DMA_STREAM       STM32_DMA_STREAM_ID_ANY

/*
 * GPT driver system settings.
 */
#define STM32_GPT_USE_TIM1                  FALSE
#define STM32_GPT_USE_TIM2                  FALSE
#define STM32_GPT_USE_TIM3                  FALSE
#define STM32_GPT_USE_TIM4                  FALSE
#define STM32_GPT_USE_TIM5                  FALSE
#define STM32_GPT_USE_TIM6                  FALSE
#define STM32_GPT_USE_TIM7                  FALSE
#define STM32_GPT_USE_TIM8                  FALSE
#define STM32_GPT_USE_TIM9                  FALSE
#define STM32_GPT_USE_TIM11                 FALSE
#define STM32_GPT_USE_TIM12                 FALSE
#define STM32_GPT_USE_TIM14                 FALSE
#define STM32_GPT_TIM1_IRQ_PRIORITY         7
#define STM32_GPT_TIM2_IRQ_PRIORITY         7
#define STM32_GPT_TIM3_IRQ_PRIORITY         7
#define STM32_GPT_TIM4_IRQ_PRIORITY         7
#define STM32_GPT_TIM5_IRQ_PRIORITY         7
#define STM32_GPT_TIM6_IRQ_PRIORITY         7
#define STM32_GPT_TIM7_IRQ_PRIORITY         7
#define STM32_GPT_TIM8_IRQ_PRIORITY         7
#define STM32_GPT_TIM9_IRQ_PRIORITY         7
#define STM32_GPT_TIM11_IRQ_PRIORITY        7
#define STM32_GPT_TIM12_IRQ_PRIORITY        7
#define STM32_GPT_TIM14_IRQ_PRIORITY        7

/*
 * I2C driver system settings.
 */
#define STM32_I2C_BUSY_TIMEOUT              50
#define STM32_I2C_I2C1_IRQ_PRIORITY         5
#define STM32_I2C_I2C2_IRQ_PRIORITY         5
#define STM32_I2C_I2C3_IRQ_PRIORITY         5
#define STM32_I2C_I2C4_IRQ_PRIORITY         5
#define STM32_I2C_I2C1_DMA_PRIORITY         3
#define STM32_I2C_I2C2_DMA_PRIORITY         3
#define STM32_I2C_I2C3_DMA_PRIORITY         3
#define STM32_I2C_I2C4_DMA_PRIORITY         3
#define STM32_I2C_DMA_ERROR_HOOK(i2cp)      osalSysHalt("DMA failure")

/*
 * ICU driver system settings.
 */
#define STM32_ICU_USE_TIM1                  FALSE
#define STM32_ICU_USE_TIM2                  FALSE
#define STM32_ICU_USE_TIM3                  FALSE
#define STM32_ICU_USE_TIM4                  FALSE
#define STM32_ICU_USE_TIM5                  FALSE
#define STM32_ICU_USE_TIM8                  FALSE
#define STM32_ICU_USE_TIM9                  FALSE
#define STM32_ICU_TIM1_IRQ_PRIORITY         7
#define STM32_ICU_TIM2_IRQ_PRIORITY         7
#define STM32_ICU_TIM3_IRQ_PRIORITY         7
#define STM32_ICU_TIM4_IRQ_PRIORITY         7
#define STM32_ICU_TIM5_IRQ_PRIORITY         7
#define STM32_ICU_TIM8_IRQ_PRIORITY         7
#define STM32_ICU_TIM9_IRQ_PRIORITY         7

/*
 * MAC driver system settings.
 */
#define STM32_MAC_TRANSMIT_BUFFERS          2
#define STM32_MAC_RECEIVE_BUFFERS           4
#define STM32_MAC_BUFFERS_SIZE              1522
#define STM32_MAC_PHY_TIMEOUT               100
#define STM32_MAC_ETH1_CHANGE_PHY_STATE     TRUE
#define STM32_MAC_ETH1_IRQ_PRIORITY         13
#define STM32_MAC_IP_CHECKSUM_OFFLOAD       0

/*
 * PWM driver system settings.
 */
#define STM32_PWM_TIM1_IRQ_PRIORITY         7
#define STM32_PWM_TIM2_IRQ_PRIORITY         7
#define STM32_PWM_TIM3_IRQ_PRIORITY         7
#define STM32_PWM_TIM4_IRQ_PRIORITY         7
#define STM32_PWM_TIM5_IRQ_PRIORITY         7
#define STM32_PWM_TIM8_IRQ_PRIORITY         7
#define STM32_PWM_TIM9_IRQ_PRIORITY         7

/*
 * RTC driver system settings.
 */
#define STM32_RTC_PRESA_VALUE               32
#define STM32_RTC_PRESS_VALUE               1024
#define STM32_RTC_CR_INIT                   0
#define STM32_RTC_TAMPCR_INIT               0

/*
 * SDC driver system settings.
 */
#define STM32_SDC_SDMMC_UNALIGNED_SUPPORT   TRUE
#define STM32_SDC_SDMMC_WRITE_TIMEOUT       1000
#define STM32_SDC_SDMMC_READ_TIMEOUT        1000
#define STM32_SDC_SDMMC_CLOCK_DELAY         10
#define STM32_SDC_SDMMC1_DMA_STREAM         STM32_DMA_STREAM_ID_ANY
#define STM32_SDC_SDMMC1_DMA_PRIORITY       3
#define STM32_SDC_SDMMC1_IRQ_PRIORITY       9

/*
 * SERIAL driver system settings.
 */
#define STM32_SERIAL_USART1_PRIORITY        12
#define STM32_SERIAL_USART2_PRIORITY        12
#define STM32_SERIAL_USART3_PRIORITY        12
#define STM32_SERIAL_UART4_PRIORITY         12
#define STM32_SERIAL_UART5_PRIORITY         12
#define STM32_SERIAL_USART6_PRIORITY        12
#define STM32_SERIAL_UART7_PRIORITY         12
#define STM32_SERIAL_UART8_PRIORITY         12

#define STM32_UART1CLK STM32_PCLK1
#define STM32_UART2CLK STM32_PCLK1
#define STM32_UART3CLK STM32_PCLK1
#define STM32_UART4CLK STM32_PCLK1
#define STM32_UART5CLK STM32_PCLK1
#define STM32_UART6CLK STM32_PCLK1
#define STM32_UART7CLK STM32_PCLK1
#define STM32_UART8CLK STM32_PCLK1

/*
 * SPI driver system settings.
 */
#ifndef STM32_SPI_USE_SPI1
#define STM32_SPI_USE_SPI1                  TRUE
#endif
#ifndef STM32_SPI_USE_SPI2
#define STM32_SPI_USE_SPI2                  FALSE
#endif
#ifndef STM32_SPI_USE_SPI3
#define STM32_SPI_USE_SPI3                  TRUE
#endif
#ifndef STM32_SPI_USE_SPI4
#define STM32_SPI_USE_SPI4                  FALSE
#endif
#ifndef STM32_SPI_USE_SPI5
#define STM32_SPI_USE_SPI5                  TRUE
#endif
#ifndef STM32_SPI_USE_SPI6
#define STM32_SPI_USE_SPI6                  FALSE
#endif
#define STM32_SPI_SPI1_DMA_PRIORITY         1
#define STM32_SPI_SPI2_DMA_PRIORITY         1
#define STM32_SPI_SPI3_DMA_PRIORITY         1
#define STM32_SPI_SPI4_DMA_PRIORITY         1
#define STM32_SPI_SPI5_DMA_PRIORITY         1
#define STM32_SPI_SPI6_DMA_PRIORITY         1
#define STM32_SPI_SPI1_IRQ_PRIORITY         10
#define STM32_SPI_SPI2_IRQ_PRIORITY         10
#define STM32_SPI_SPI3_IRQ_PRIORITY         10
#define STM32_SPI_SPI4_IRQ_PRIORITY         10
#define STM32_SPI_SPI5_IRQ_PRIORITY         10
#define STM32_SPI_SPI6_IRQ_PRIORITY         10
#define STM32_SPI_DMA_ERROR_HOOK(spip)      osalSysHalt("DMA failure")

/*
 * ST driver system settings.
 */
#define STM32_ST_IRQ_PRIORITY               8
#ifndef STM32_ST_USE_TIMER
#define STM32_ST_USE_TIMER                  5
#endif

/*
 * UART driver system settings.
 */
#define STM32_UART_USART1_IRQ_PRIORITY      12
#define STM32_UART_USART2_IRQ_PRIORITY      12
#define STM32_UART_USART3_IRQ_PRIORITY      12
#define STM32_UART_UART4_IRQ_PRIORITY       12
#define STM32_UART_UART5_IRQ_PRIORITY       12
#define STM32_UART_USART6_IRQ_PRIORITY      12
#define STM32_UART_USART1_DMA_PRIORITY      0
#define STM32_UART_USART2_DMA_PRIORITY      0
#define STM32_UART_USART3_DMA_PRIORITY      0
#define STM32_UART_UART4_DMA_PRIORITY       0
#define STM32_UART_UART5_DMA_PRIORITY       0
#define STM32_UART_USART6_DMA_PRIORITY      0
#define STM32_UART_UART7_DMA_PRIORITY       0
#define STM32_UART_UART8_DMA_PRIORITY       0
#define STM32_UART_DMA_ERROR_HOOK(uartp)    osalSysHalt("DMA failure")

/*
 * USB driver system settings.
 */
#define STM32_USB_USE_OTG1                  TRUE
#define STM32_USB_USE_OTG2                  TRUE
#define STM32_USB_OTG1_IRQ_PRIORITY         14
#define STM32_USB_OTG2_IRQ_PRIORITY         14
#define STM32_USB_OTG1_RX_FIFO_SIZE         512
#define STM32_USB_OTG2_RX_FIFO_SIZE         1024
#define STM32_USB_HOST_WAKEUP_DURATION      2

/*
 * WDG driver system settings.
 */
#define STM32_WDG_USE_IWDG                  FALSE

#define STM32_EXTI_ENHANCED

#endif
