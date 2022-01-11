#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_Spi.h"

class class_Spi{
   public:
      FUNC(void, SPI_CODE) InitFunction(void);
};

extern class_Spi Spi;

