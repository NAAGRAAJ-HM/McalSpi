/******************************************************************************/
/* File   : Spi.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infSpi_EcuM.hpp"
#include "infSpi_Dcm.hpp"
#include "infSpi_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SPI_AR_RELEASE_MAJOR_VERSION                                           4
#define SPI_AR_RELEASE_MINOR_VERSION                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SPI_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible SPI_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(SPI_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible SPI_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Spi:
      public abstract_module
{
   public:
      module_Spi(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, _CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, _CONFIG_DATA, _APPL_CONST) lptrCfgModule
      );
      FUNC(void, SPI_CODE) InitFunction   (void);
      FUNC(void, SPI_CODE) DeInitFunction (void);
      FUNC(void, SPI_CODE) MainFunction   (void);
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
#include "CfgSpi.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Spi, SPI_VAR) Spi(
   {
         0x0000
      ,  0xFFFF
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
   CONSTP2CONST(CfgSpi_Type, CFGSPI_CONFIG_DATA, CFGSPI_APPL_CONST) lptrCfgSpi
){
   if(NULL_PTR == lptrCfgSpi){
#if(STD_ON == Spi_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
// check lptrCfgSpi for memory faults
// use PBcfg_Spi as back-up configuration
   }
   Spi.IsInitDone = E_OK;
}

FUNC(void, SPI_CODE) module_Spi::DeInitFunction(void){
   Spi.IsInitDone = E_NOT_OK;
}

FUNC(void, SPI_CODE) module_Spi::MainFunction(void){
}

class class_Spi_Unused{
   public:
      FUNC(void, SPI_CODE) WriteIB           (void);
      FUNC(void, SPI_CODE) AsyncTransmit     (void);
      FUNC(void, SPI_CODE) ReadIB            (void);
      FUNC(void, SPI_CODE) SetupEB           (void);
      FUNC(void, SPI_CODE) GetStatus         (void);
      FUNC(void, SPI_CODE) GetJobResult      (void);
      FUNC(void, SPI_CODE) GetSequenceResult (void);
      FUNC(void, SPI_CODE) SyncTransmit      (void);
      FUNC(void, SPI_CODE) GetHWUnitStatus   (void);
      FUNC(void, SPI_CODE) Cancel            (void);
      FUNC(void, SPI_CODE) SetAsyncMode      (void);
};

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

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

