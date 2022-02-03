/*****************************************************/
/* File   : Spi.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Spi.h"

#include "Spi_EcuM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_Spi_EcuM Spi_EcuM;
class_EcuM_Client *EcuM_Client_ptr_Spi = &Spi_EcuM;
class_Spi Spi;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, SPI_CODE) class_Spi_EcuM::InitFunction(void){
}

FUNC(void, SPI_CODE) class_Spi_EcuM::DeInitFunction(void){
}

FUNC(void, SPI_CODE) class_Spi::WriteIB(void){
}

FUNC(void, SPI_CODE) class_Spi::AsyncTransmit(void){
}

FUNC(void, SPI_CODE) class_Spi::ReadIB(void){
}

FUNC(void, SPI_CODE) class_Spi::SetupEB(void){
}

FUNC(void, SPI_CODE) class_Spi::GetStatus(void){
}

FUNC(void, SPI_CODE) class_Spi::GetJobResult(void){
}

FUNC(void, SPI_CODE) class_Spi::GetSequenceResult(void){
}

FUNC(void, SPI_CODE) class_Spi::GetVersionInfo(void){
}

FUNC(void, SPI_CODE) class_Spi::SyncTransmit(void){
}

FUNC(void, SPI_CODE) class_Spi::GetHWUnitStatus(void){
}

FUNC(void, SPI_CODE) class_Spi::Cancel(void){
}

FUNC(void, SPI_CODE) class_Spi::SetAsyncMode(void){
}

FUNC(void, SPI_CODE) class_Spi::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

