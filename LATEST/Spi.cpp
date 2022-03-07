/*****************************************************/
/* File   : Spi.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "Spi_EcuM.h"
#include "Spi_SchM.h"
#include "Spi_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Spi:
      public abstract_module
{
   public:
      FUNC(void, SPI_CODE) InitFunction   (void);
      FUNC(void, SPI_CODE) DeInitFunction (void);
      FUNC(void, SPI_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_Spi     Spi;
infEcuMClient* gptrinfEcuMClient_Spi = &Spi;
infSchMClient* gptrinfSchMClient_Spi = &Spi;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, SPI_CODE) module_Spi::InitFunction(void){
}

FUNC(void, SPI_CODE) module_Spi::DeInitFunction(void){
}

FUNC(void, SPI_CODE) module_Spi::MainFunction(void){
}

FUNC(void, SPI_CODE) class_Spi_Unused::WriteIB(void){
}

FUNC(void, SPI_CODE) class_Spi_Unused::AsyncTransmit(void){
}

FUNC(void, SPI_CODE) class_Spi_Unused::ReadIB(void){
}

FUNC(void, SPI_CODE) class_Spi_Unused::SetupEB(void){
}

FUNC(void, SPI_CODE) class_Spi_Unused::GetStatus(void){
}

FUNC(void, SPI_CODE) class_Spi_Unused::GetJobResult(void){
}

FUNC(void, SPI_CODE) class_Spi_Unused::GetSequenceResult(void){
}

FUNC(void, SPI_CODE) class_Spi_Unused::GetVersionInfo(void){
}

FUNC(void, SPI_CODE) class_Spi_Unused::SyncTransmit(void){
}

FUNC(void, SPI_CODE) class_Spi_Unused::GetHWUnitStatus(void){
}

FUNC(void, SPI_CODE) class_Spi_Unused::Cancel(void){
}

FUNC(void, SPI_CODE) class_Spi_Unused::SetAsyncMode(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

