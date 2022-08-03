#pragma once
/******************************************************************************/
/* File   : Spi_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_Spi.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SPI_CORE_FUNCTIONALITIES                                               \
              FUNC(void, SPI_CODE) WriteIB           (void);                   \
              FUNC(void, SPI_CODE) AsyncTransmit     (void);                   \
              FUNC(void, SPI_CODE) ReadIB            (void);                   \
              FUNC(void, SPI_CODE) SetupEB           (void);                   \
              FUNC(void, SPI_CODE) GetStatus         (void);                   \
              FUNC(void, SPI_CODE) GetJobResult      (void);                   \
              FUNC(void, SPI_CODE) GetSequenceResult (void);                   \
              FUNC(void, SPI_CODE) SyncTransmit      (void);                   \
              FUNC(void, SPI_CODE) GetHWUnitStatus   (void);                   \
              FUNC(void, SPI_CODE) Cancel            (void);                   \
              FUNC(void, SPI_CODE) SetAsyncMode      (void);                   \

#define SPI_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, SPI_CODE) WriteIB           (void) = 0;               \
      virtual FUNC(void, SPI_CODE) AsyncTransmit     (void) = 0;               \
      virtual FUNC(void, SPI_CODE) ReadIB            (void) = 0;               \
      virtual FUNC(void, SPI_CODE) SetupEB           (void) = 0;               \
      virtual FUNC(void, SPI_CODE) GetStatus         (void) = 0;               \
      virtual FUNC(void, SPI_CODE) GetJobResult      (void) = 0;               \
      virtual FUNC(void, SPI_CODE) GetSequenceResult (void) = 0;               \
      virtual FUNC(void, SPI_CODE) SyncTransmit      (void) = 0;               \
      virtual FUNC(void, SPI_CODE) GetHWUnitStatus   (void) = 0;               \
      virtual FUNC(void, SPI_CODE) Cancel            (void) = 0;               \
      virtual FUNC(void, SPI_CODE) SetAsyncMode      (void) = 0;               \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_Spi_Functionality{
   public:
      SPI_CORE_FUNCTIONALITIES_VIRTUAL
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

