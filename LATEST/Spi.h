#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_Spi.h"

class class_Spi{
   public:
      FUNC(void, SPI_CODE) InitFunction      (void);
      FUNC(void, SPI_CODE) DeInitFunction    (void);
      FUNC(void, SPI_CODE) WriteIB           (void);
      FUNC(void, SPI_CODE) AsyncTransmit     (void);
      FUNC(void, SPI_CODE) ReadIB            (void);
      FUNC(void, SPI_CODE) SetupEB           (void);
      FUNC(void, SPI_CODE) GetStatus         (void);
      FUNC(void, SPI_CODE) GetJobResult      (void);
      FUNC(void, SPI_CODE) GetSequenceResult (void);
      FUNC(void, SPI_CODE) GetVersionInfo    (void);
      FUNC(void, SPI_CODE) SyncTransmit      (void);
      FUNC(void, SPI_CODE) GetHWUnitStatus   (void);
      FUNC(void, SPI_CODE) Cancel            (void);
      FUNC(void, SPI_CODE) SetAsyncMode      (void);
      FUNC(void, SPI_CODE) MainFunction      (void);
};

extern class_Spi Spi;

