// #include <sys/types.h>

// #include "stm32h743-platform/registers/rcc.hpp"
// #include "stm32h743-platform/registers/usart3.hpp"
// #include "stm32h743-platform/registers/dma1.hpp"
// #include "stm32h743-platform/registers/dmamux1.hpp"
// #include "stm32h743-platform/peripherals/gpio.hpp"

// USART3::Registers usart3;
// DMA1::Registers dma1;
// DMAMUX1::Registers dmamux1;
// RCC::Registers rcc;

// void EnableUsart3() {
//   GpioDx pD8(8);
//   GpioDx pD9(9);
//   rcc = RCC::Registers{};
//   usart3 = USART3::Registers{};
  
//   // Enable the USART3 peripheral clock
//   rcc.APB1LENR.SetUSART3EN(true);
  
//   // Set PD8 and PD9 in alternate function mode
//   pD8.SetMode(EGpioMode::eAlternateFunction);
//   pD9.SetMode(EGpioMode::eAlternateFunction);
  
//   pD8.SetPullupPulldown(EGpioPullupPulldown::eNoPullupPulldown);
//   pD9.SetPullupPulldown(EGpioPullupPulldown::eNoPullupPulldown);

//   pD8.SetOutputSpeed(EGpioOutputSpeed::eLowSpeed);
//   pD9.SetOutputSpeed(EGpioOutputSpeed::eLowSpeed);

//   // Set the alternate function for PD8 and PD9 as USART3 (AF7). (Datasheed p93)
//   pD8.SetAlternateFunction(0b0111); // Set AF7 on pin8 -> USART3_RX
//   pD9.SetAlternateFunction(0b0111); // Set AF7 on Pin9 -> USART3_TX

//   //=======
//   // configure usart
  
//   // Disable USART before configuration
//   usart3.CR1.SetUE(false);

//   // Set asynchronous mode
//   usart3.CR2.SetSLVEN(false);

//   // Set OVER8=0 (oversampling by 16)
//   usart3.CR1.SetOVER8(false);
//   // Set baud rate to 115200.
//   // When OVER8 = 0, BRR = USARTDIV.
//   // "APB1 Peripheral Clock" or "PCLK1" = 99.875
//   usart3.BRR.Set(99'875'000U / 115200U); // USARTDIV=866 (better might be 867)

//   // In asynchronous mode, the following bits must be kept cleared:
//   // - LINEN and CLKEN bits in the USART_CR2 register,
//   // - SCEN, HDSEL and IREN  bits in the USART_CR3 register.
//   usart3.CR2.SetLINEN(false);
//   usart3.CR2.SetCLKEN(false);
//   usart3.CR3.SetSCEN(false);
//   usart3.CR3.SetHDSEL(false);
//   usart3.CR3.SetIREN(false);

//   // Enable RX, TX and USART overall
//   usart3.CR1.SetRE(true);
//   usart3.CR1.SetTE(true);
//   usart3.CR1.SetUE(true);

//   // Wait for TEACK and REACK
//   usart3.ISR.WaitForTEACK(true);
//   usart3.ISR.WaitForREACK(true);
// }

// void Usart3Tx(const uint8_t *const buffer, std::size_t size) {  
//   usart3.ISR.WaitForTXE(true);

//   // Tx one byte at a time
//   for (std::size_t i = 0; i < size; i++){
//     usart3.ISR.WaitForTXE(true);
//     usart3.TDR.Set(buffer[i]); // Send data
//   }

//   usart3.ISR.WaitForTC(true);
// }

// uint8_t dma1_buffer[1000]; // TODO remove.

// // Usart with DMA (p2059)
// void ConfigureDma1() {
//   dma1 = DMA1::Registers{};
//   dmamux1 = DMAMUX1::Registers{};
//   // Enable DMA 1 peripheral clock
//   rcc.AHB1ENR.SetDMA1EN(true);

//   // Enable the DMAMUX1 Clock
//   rcc.AHB4ENR.SetBDMAEN(true);

//   // usart3_tx_dma = 46 (p695)
//   dmamux1.C0CR.SetDMAREQ_ID(46); // DMAREQ_ID = usart3_tx_dma = 46
// }

// // Usart with DMA (p2059)
// //
// // 1) TODO need to handle and clear all errors during configuration.
// // 2) IRQs
// void Usart3DmaTx(const uint8_t *const buffer, std::size_t size) {
//   // Disable DMA for configuration
//   dma1.S0CR.SetEN(false);
  
//   dma1.S0PAR.Set(usart3.TDR.GetAddress()); // Connect DMA to USART3 TDR register
//   dma1.S0M0AR.Set(reinterpret_cast<uint32_t>(buffer)); // Connect source buffer to DMA
//   dma1.S0NDTR.Set(static_cast<uint32_t>(size)); // Set size of data transfer (TODO error if outside range 0-65535)

//   dma1.S0CR.SetDIR(0b01); // Memory to peripheral
//   // NOTE: When I tried to make the peripheral the flow controller, it would just send forever.
//   dma1.S0CR.SetPFCTRL(false); // DMA is the flow controller.
//   dma1.S0CR.SetPSIZE(0b00); // Set peripheral data size = Byte
//   dma1.S0CR.SetMSIZE(0b00); // Set memory data size = Byte
//   dma1.S0CR.SetTCIE(true); // Transfer complete interrupt enabled.
//   dma1.S0CR.SetMINC(true); // Memory increment mode enabled.
//   dma1.S0CR.SetBit(20, true); // Enable the DMA to handle bufferable transfers (TRBUFF)

//   // DMDIS
//   // Reg.DMA_1_S0.FCR.SetBit(2, true);
//   // Reg.DMA_1_S0.FCR.SetBit(7, true);
//   // Reg.DMA_1_S0.FCR.SetBits<2>(0, 0xb11);

//   // NVIC_EnableIRQ(DMAy_Streamx_IRQn);
//   // NVIC_SetPriority(DMAy_Streamx_IRQn, 0);

//   // void DMAy_Streamx_IRQHandler(void) {
//   //   if (DMAy->HISR & DMA_HISR_TCIFx) { // Check transfer complete flag
//   //     // Handle transfer complete
//   //     DMAy->HIFCR |= DMA_HIFCR_CTCIFx; // Clear transfer complete flag
//   //   }
//   // }

//   // Enable the DMA stream
//   dma1.S0CR.SetEN(true);

//   // Enable DMA transmitter for USART3.
//   usart3.CR3.SetDMAT(true);

//   // Wait for DMA TC.
//   dma1.LISR.WaitForTCIF0(true);

//   // Clear TC flag in DMA.
//   dma1.LIFCR.SetCTCIF0(true);
// }

// extern "C" ssize_t _write(int fd, const void* ptr, size_t size) {
//   (void) fd;  // File descriptor is not used in this example

//   const uint8_t* chars = (const uint8_t*) ptr;

//   Usart3DmaTx(chars, size);

//   return static_cast<ssize_t>(size);
// }

// void InitUsart3Printf()
// {
//   EnableUsart3();
//   ConfigureDma1();
// }
