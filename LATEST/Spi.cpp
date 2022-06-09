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
#include "infSpi_Exp.hpp"
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
class module_Spi:
      INTERFACES_EXPORTED_SPI
      public abstract_module
   ,  public class_Spi_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};

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
#if(STD_ON == _ReSIM)
         "Spi",
#else
#endif
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
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgSpi;
         }
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

FUNC(void, SPI_CODE) module_Spi::DeInitFunction(void){
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

FUNC(void, SPI_CODE) module_Spi::MainFunction(void){
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

FUNC(void, SPI_CODE) module_Spi::WriteIB(void){
}

FUNC(void, SPI_CODE) module_Spi::AsyncTransmit(void){
}

FUNC(void, SPI_CODE) module_Spi::ReadIB(void){
}

FUNC(void, SPI_CODE) module_Spi::SetupEB(void){
}

FUNC(void, SPI_CODE) module_Spi::GetStatus(void){
}

FUNC(void, SPI_CODE) module_Spi::GetJobResult(void){
}

FUNC(void, SPI_CODE) module_Spi::GetSequenceResult(void){
}

FUNC(void, SPI_CODE) module_Spi::SyncTransmit(void){
}

FUNC(void, SPI_CODE) module_Spi::GetHWUnitStatus(void){
}

FUNC(void, SPI_CODE) module_Spi::Cancel(void){
}

FUNC(void, SPI_CODE) module_Spi::SetAsyncMode(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

