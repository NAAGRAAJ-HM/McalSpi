/******************************************************************************/
/* File   : Spi.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infSpi_Version.h"

#include "module.h"
#include "infSpi_EcuM.h"
#include "infSpi_Dcm.h"
#include "infSpi_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Spi:
      public abstract_module
{
   public:
      FUNC(void, SPI_CODE) InitFunction   (void);
      FUNC(void, SPI_CODE) DeInitFunction (void);
      FUNC(void, SPI_CODE) GetVersionInfo (void);
      FUNC(void, SPI_CODE) MainFunction   (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
VAR(module_Spi, SPI_VAR) Spi;
CONSTP2VAR(infEcuMClient, SPI_VAR, SPI_CONST) gptrinfEcuMClient_Spi = &Spi;
CONSTP2VAR(infDcmClient,  SPI_VAR, SPI_CONST) gptrinfDcmClient_Spi  = &Spi;
CONSTP2VAR(infSchMClient, SPI_VAR, SPI_CONST) gptrinfSchMClient_Spi = &Spi;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, SPI_CODE) module_Spi::InitFunction(void){
}

FUNC(void, SPI_CODE) module_Spi::DeInitFunction(void){
}

FUNC(void, SPI_CODE) module_Spi::GetVersionInfo(void){
}

FUNC(void, SPI_CODE) module_Spi::MainFunction(void){
}

#include "Spi_Unused.h"

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

