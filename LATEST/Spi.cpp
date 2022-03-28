/******************************************************************************/
/* File   : Spi.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.hpp"
#include "CfgSpi.hpp"
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
      FUNC(void, SPI_CODE) InitFunction   (void);
      FUNC(void, SPI_CODE) DeInitFunction (void);
      FUNC(void, SPI_CODE) GetVersionInfo (void);
      FUNC(void, SPI_CODE) MainFunction   (void);

   private:
      CONST(Std_TypeVersionInfo, SPI_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
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
VAR(module_Spi, SPI_VAR) Spi;
CONSTP2VAR(infEcuMClient, SPI_VAR, SPI_CONST) gptrinfEcuMClient_Spi = &Spi;
CONSTP2VAR(infDcmClient,  SPI_VAR, SPI_CONST) gptrinfDcmClient_Spi  = &Spi;
CONSTP2VAR(infSchMClient, SPI_VAR, SPI_CONST) gptrinfSchMClient_Spi = &Spi;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SPI_CODE) module_Spi::InitFunction(void){
   Spi.IsInitDone = E_OK;
}

FUNC(void, SPI_CODE) module_Spi::DeInitFunction(void){
   Spi.IsInitDone = E_NOT_OK;
}

FUNC(void, SPI_CODE) module_Spi::GetVersionInfo(void){
#if(STD_ON == Spi_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
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

