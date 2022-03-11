/*****************************************************/
/* File   : LinTp.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infLinTp_EcuM.h"
#include "infLinTp_Dcm.h"
#include "infLinTp_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_LinTp:
      public abstract_module
{
   public:
      FUNC(void, LINTP_CODE) InitFunction   (void);
      FUNC(void, LINTP_CODE) DeInitFunction (void);
      FUNC(void, LINTP_CODE) GetVersionInfo (void);
      FUNC(void, LINTP_CODE) MainFunction   (void);
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
module_LinTp   LinTp;
infEcuMClient* gptrinfEcuMClient_LinTp = &LinTp;
infDcmClient*  gptrinfDcmClient_LinTp  = &LinTp;
infSchMClient* gptrinfSchMClient_LinTp = &LinTp;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, LINTP_CODE) module_LinTp::InitFunction(void){
}

FUNC(void, LINTP_CODE) module_LinTp::DeInitFunction(void){
}

FUNC(void, LINTP_CODE) module_LinTp::GetVersionInfo(void){
}

FUNC(void, LINTP_CODE) module_LinTp::MainFunction(void){
}

#include "LinTp_Unused.h"

FUNC(void, LINTP_CODE) class_LinTp_Unused::Transmit(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Unused::Shutdown(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Unused::CancelTransmit(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Unused::ChangeParameter(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Unused::CancelReceive(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

