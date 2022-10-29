#pragma once
/******************************************************************************/
/* File   : McalSpi_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalSpi.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALSPI_CORE_FUNCTIONALITIES                                               \
              FUNC(void, MCALSPI_CODE) WriteIB           (void);                   \
              FUNC(void, MCALSPI_CODE) AsyncTransmit     (void);                   \
              FUNC(void, MCALSPI_CODE) ReadIB            (void);                   \
              FUNC(void, MCALSPI_CODE) SetupEB           (void);                   \
              FUNC(void, MCALSPI_CODE) GetStatus         (void);                   \
              FUNC(void, MCALSPI_CODE) GetJobResult      (void);                   \
              FUNC(void, MCALSPI_CODE) GetSequenceResult (void);                   \
              FUNC(void, MCALSPI_CODE) SyncTransmit      (void);                   \
              FUNC(void, MCALSPI_CODE) GetHWUnitStatus   (void);                   \
              FUNC(void, MCALSPI_CODE) McalCancel            (void);                   \
              FUNC(void, MCALSPI_CODE) SetAsyncMode      (void);                   \

#define MCALSPI_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, MCALSPI_CODE) WriteIB           (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) AsyncTransmit     (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) ReadIB            (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) SetupEB           (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) GetStatus         (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) GetJobResult      (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) GetSequenceResult (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) SyncTransmit      (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) GetHWUnitStatus   (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) McalCancel            (void) = 0;               \
      virtual FUNC(void, MCALSPI_CODE) SetAsyncMode      (void) = 0;               \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalSpi_Functionality{
   public:
      MCALSPI_CORE_FUNCTIONALITIES_VIRTUAL
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

