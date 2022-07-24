/******************************************************************************/
/* File   : Spi.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Spi.hpp"
#include "infSpi_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SPI_AR_RELEASE_VERSION_MAJOR                                           4
#define SPI_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SPI_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SPI_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SPI_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SPI_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Spi, SPI_VAR) Spi;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SPI_CODE) module_Spi::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SPI_CONST,       SPI_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SPI_CONFIG_DATA, SPI_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Spi_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == Spi_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Spi_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Spi_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SPI_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SPI_CODE) module_Spi::DeInitFunction(
   void
){
#if(STD_ON == Spi_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Spi_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Spi_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SPI_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SPI_CODE) module_Spi::MainFunction(
   void
){
#if(STD_ON == Spi_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Spi_InitCheck)
   }
   else{
#if(STD_ON == Spi_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SPI_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SPI_CODE) module_Spi::WriteIB(
   void
){
}

FUNC(void, SPI_CODE) module_Spi::AsyncTransmit(
   void
){
}

FUNC(void, SPI_CODE) module_Spi::ReadIB(
   void
){
}

FUNC(void, SPI_CODE) module_Spi::SetupEB(
   void
){
}

FUNC(void, SPI_CODE) module_Spi::GetStatus(
   void
){
}

FUNC(void, SPI_CODE) module_Spi::GetJobResult(
   void
){
}

FUNC(void, SPI_CODE) module_Spi::GetSequenceResult(
   void
){
}

FUNC(void, SPI_CODE) module_Spi::SyncTransmit(
   void
){
}

FUNC(void, SPI_CODE) module_Spi::GetHWUnitStatus(
   void
){
}

FUNC(void, SPI_CODE) module_Spi::Cancel(
   void
){
}

FUNC(void, SPI_CODE) module_Spi::SetAsyncMode(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

