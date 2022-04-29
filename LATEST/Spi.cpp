/******************************************************************************/
/* File   : Spi.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgSpi.hpp"
#include "Spi_core.hpp"
#include "infSpi.hpp"

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
class module_Spi:
      public abstract_module
   ,  public class_Spi_Functionality
{
   public:
      module_Spi(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, SPI_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, SPI_CONFIG_DATA, SPI_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SPI_CODE) DeInitFunction (void);
      FUNC(void, SPI_CODE) MainFunction   (void);
      SPI_CORE_FUNCTIONALITIES
};

extern VAR(module_Spi, SPI_VAR) Spi;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, SPI_VAR, SPI_CONST) gptrinfEcuMClient_Spi = &Spi;
CONSTP2VAR(infDcmClient,  SPI_VAR, SPI_CONST) gptrinfDcmClient_Spi  = &Spi;
CONSTP2VAR(infSchMClient, SPI_VAR, SPI_CONST) gptrinfSchMClient_Spi = &Spi;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Spi, SPI_VAR) Spi(
   {
         SPI_AR_RELEASE_VERSION_MAJOR
      ,  SPI_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SPI_CODE) module_Spi::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, SPI_CONFIG_DATA, SPI_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Spi_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == Spi_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Spi_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgSpi;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == Spi_InitCheck)
   }
#endif
}

FUNC(void, SPI_CODE) module_Spi::DeInitFunction(void){
#if(STD_ON == Spi_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Spi_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == Spi_InitCheck)
   }
#endif
}

FUNC(void, SPI_CODE) module_Spi::MainFunction(void){
#if(STD_ON == Spi_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Spi_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == Spi_InitCheck)
   }
#endif
}

FUNC(void, SPI_CODE) class_Spi_Functionality::WriteIB(void){
}

FUNC(void, SPI_CODE) class_Spi_Functionality::AsyncTransmit(void){
}

FUNC(void, SPI_CODE) class_Spi_Functionality::ReadIB(void){
}

FUNC(void, SPI_CODE) class_Spi_Functionality::SetupEB(void){
}

FUNC(void, SPI_CODE) class_Spi_Functionality::GetStatus(void){
}

FUNC(void, SPI_CODE) class_Spi_Functionality::GetJobResult(void){
}

FUNC(void, SPI_CODE) class_Spi_Functionality::GetSequenceResult(void){
}

FUNC(void, SPI_CODE) class_Spi_Functionality::SyncTransmit(void){
}

FUNC(void, SPI_CODE) class_Spi_Functionality::GetHWUnitStatus(void){
}

FUNC(void, SPI_CODE) class_Spi_Functionality::Cancel(void){
}

FUNC(void, SPI_CODE) class_Spi_Functionality::SetAsyncMode(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

