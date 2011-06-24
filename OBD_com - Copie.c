/*************************************************************************
**    (C) 1996 - 2010 IXXAT Automation GmbH, all rights reserved
**************************************************************************
**
**       File: OBD_com.c
**    Summary: definition of the object directory concerning the communication
**             must be encoded by user
**    Version: 4.30.04
**
**************************************************************************
**************************************************************************
**cxvxcvxcv
**  Functions: 
**             
**
**wxccwxcwxcx
**
**************************************************************************
**    all rights reserved
*************************************************************************/
#include "Target.h"
#include "Integral.h"
#include "COPcfg.h"
#include "COP.h"
#include "DLL.h"
#include "OBD.h"
#include "PDO.h"
#include "OBD_com.h"
#include "USRfkt.h"

//fdsjhkfdsgsd
sdfsdf
sdf
sdf

/*************************************************************************
**  defines  
*************************************************************************/
/* defines the number of subindices for Tx-Communication Object entry*/
#ifdef PDO_EVENT_TIMED
 #define TX_COM_NUMBER_OF_ENTRIES ((UINT8)5)
#else
 #ifdef INHIBIT_TIME
  #define TX_COM_NUMBER_OF_ENTRIES ((UINT8)3)
 #else
  #define TX_COM_NUMBER_OF_ENTRIES ((UINT8)2)
 #endif
#endif
#if defined (PDO_EVENT_TIMED) && defined (PDO_CHECK_RX_TIMEOUT)
  #define RX_COM_NUMBER_OF_ENTRIES ((UINT8)5)
#else
  #define RX_COM_NUMBER_OF_ENTRIES ((UINT8)2)  
#endif

#ifdef PDO_EVENT_TIMED
#define PDO_EVENT_TIME ,0
#else
#define PDO_EVENT_TIME
#endif

#if (OBD_CHECK_OBJ_RANGE != OBD_CHECK_OBJ_RANGE_DISABLED)
 #define RANGE_NULL NULL,
 #define RANGE(x) (UINT8 ROMCONST *)x,
#else   /* (OBD_CHECK_OBJ_RANGE != OBD_CHECK_OBJ_RANGE_DISABLED) */
 #define RANGE_NULL
 #define RANGE(x)
#endif  /* (OBD_CHECK_OBJ_RANGE != OBD_CHECK_OBJ_RANGE_DISABLED) */

/* when Auto-Swapping and/or USE_DATA_TYPE is enabled, no default PDO mapping is allowed */
#if (COP_AUTO_SWAPPING != 0) || (USE_DATA_TYPE == 1)
#define DEFAULT_CALLBACK NULLCLBK
#else
#define DEFAULT_CALLBACK USR_PDOFkt
#endif

/*************************************************************************
**    object dictionary
*************************************************************************/

/*************************************************************************
**  communication profile definition of values
*************************************************************************/
UINT32 ROMCONST    d_DeviceTyp=0xF0191UL;

UINT8 ROMCONST    d_ErrorReg=0;

UINT8  ROMCONST    MAN_DEV_Name[] ="ADISON";
UINT8  ROMCONST    MAN_HW_Ver[]   ="CM00097A";
UINT8  ROMCONST    MAN_SW_Ver[]   ="1.00";

#ifdef SYNC_OBJ
/* set sync id */
UINT32 ROMCONST    d_SyncId=0x80;
 #ifdef SYNC_MASTER
 UINT32 ROMCONST    d_CommCyclePeriod=0x0;
 #endif
#endif

#if (TIME_OBJ != TIME_NOT)
/* set timestamp valid */
UINT32 ROMCONST    d_TimeStampId=0x100UL;   
#endif

#ifdef EMCY_OBJ
/* set emcy valid */
UINT32 ROMCONST    d_EmergencyId=0x0UL;
#endif

#ifdef NODE_GUARDING
/* set default guarding parameter */
UINT16 ROMCONST    d_GuardTime=0;
UINT8  ROMCONST    d_LifeTime=0;
#endif

#ifdef RE_STORE_VALUE
UINT8  ROMCONST    d_ReStorePara_00=1;
UINT32 ROMCONST    d_ReStorePara_01=1;

UINT8  ROMCONST    d_StorePara_00=1;
UINT32 ROMCONST    d_StorePara_01=1;
#endif

UINT8 ROMCONST     d_Identity_00=4;

UINT32 ROMCONST d_Vendor_ID      =0x00000001UL; /* Vendor ID invalid */
UINT32 ROMCONST d_Product_code   =0x49038903UL;
UINT32 ROMCONST d_Revision_number=0x00000001UL;

#ifdef HEARTBEAT
UINT16 ROMCONST    d_HeartbeatTime=1000;
#endif

#if (NMS_ENABLE_ERROR_BEHAVIOR == NMS_k_ERROR_BEHAVIOR_1029)
UINT8  ROMCONST    d_b_ErrorBehavior_00  = NMS_k_ERROR_BEHAVIOR_NUM_CLASSES; /* Subindex 0: No of error classes */
UINT8  ROMCONST    d_b_ErrorBehaviorValue= 0;  /* switch to PREOPERATIONAL */
#endif

UINT16 ROMCONST    d_w_Zero=0;

/*************************************************************************
**  communication profile object dictionary structure
*************************************************************************/
t_general_od ROMCONST    USR_as_GeneralDeviceObj[]=
/* index | sidx | attrib | datatype | length | default | actual | (range) | callback  */
/* depending on define OBD_CHECK_OBJ_RANGE the range entry must be removed / added    */
/* from/to this structure. Your compiler may report wrong pointerconversion.          */
{
 /*Device type*/
 {0x1000,0,ATTR_CONST,UNSIGNED32,4,(UINT8 ROMCONST    *)&d_DeviceTyp,NULL,RANGE_NULL  NULLCLBK},

 /*Error Register*/
 {0x1001,0,ATTR_RO,UNSIGNED8,1,(UINT8 ROMCONST    *)&d_ErrorReg,(UINT8 XDATA  *)&USR_s_AComObj.ErrorReg,RANGE_NULL  NULLCLBK},

 /* 0x1003 automatically created if emergency support is activated */
#ifdef SYNC_OBJ
 /*COB_ID SYNC*/
 {0x1005,0,ATTR_RW,UNSIGNED32,4,(UINT8 ROMCONST    *)&d_SyncId,(UINT8 XDATA  *)&USR_s_AComObj.SyncId,RANGE_NULL  NULLCLBK},
#endif

 /*manufacturer device name */
 {0x1008,0,ATTR_CONST,VISIBLE_STRING,sizeof(MAN_DEV_Name),MAN_DEV_Name,NULL,RANGE_NULL  NULLCLBK},

 /*manufacturer hardware version*/
 {0x1009,0,ATTR_CONST,VISIBLE_STRING,sizeof(MAN_HW_Ver),MAN_HW_Ver,NULL,RANGE_NULL  NULLCLBK},
 
 /*manufacturer software version*/
 {0x100A,0,ATTR_CONST,VISIBLE_STRING,sizeof(MAN_SW_Ver),MAN_SW_Ver,NULL,RANGE_NULL  NULLCLBK},
  
#ifdef NODE_GUARDING
 /*guard_time*/
 {0x100C,0,ATTR_RW,UNSIGNED16,2,(UINT8  ROMCONST   *)&d_GuardTime,(UINT8   XDATA *)&USR_s_AComObj.GuardTime,RANGE_NULL  NULLCLBK},

 /*life time factor*/
 {0x100D,0,ATTR_RW,UNSIGNED8,1,(UINT8  ROMCONST    *)&d_LifeTime,(UINT8   XDATA*)&USR_s_AComObj.LifeTime,RANGE_NULL  NULLCLBK},
#endif

#ifdef RE_STORE_VALUE
 {0x1010,0,ATTR_RO,UNSIGNED8, 1,(UINT8  ROMCONST    *)&d_StorePara_00,NULL             ,RANGE_NULL  NULLCLBK},
 {0x1010,1,ATTR_RW,UNSIGNED32,4,(UINT8  ROMCONST    *)&d_StorePara_01,(UINT8   XDATA*)&USR_s_AComObj.StorePara_01,RANGE_NULL  USR_TstSavePara},

 {0x1011,0,ATTR_RO,UNSIGNED8, 1,(UINT8  ROMCONST    *)&d_ReStorePara_00,NULL           ,RANGE_NULL  NULLCLBK},
 {0x1011,1,ATTR_RW,UNSIGNED32,4,(UINT8  ROMCONST    *)&d_ReStorePara_01,(UINT8   XDATA*)&USR_s_AComObj.ReStorePara_01,RANGE_NULL  USR_TstLoadPara},
#endif

 /* time stamp id */
#if (TIME_OBJ != TIME_NOT)
 {0x1012,0,ATTR_RW,UNSIGNED32,4,(UINT8 ROMCONST    *)&d_TimeStampId,(UINT8   XDATA *)&USR_s_AComObj.TimeStampId ,RANGE_NULL  NULLCLBK},
#endif

 /* emcy id */
#ifdef EMCY_OBJ
 {0x1014,0,ATTR_RW,UNSIGNED32,4,(UINT8 ROMCONST    *)&d_EmergencyId,(UINT8   XDATA*)&USR_s_AComObj.EmergencyId ,RANGE_NULL  NULLCLBK},
 #ifdef EMCY_INHIBIT
 {0x1015,0,ATTR_RW,UNSIGNED16,2,(UINT8 ROMCONST    *)&d_w_Zero,(UINT8   XDATA*)&USR_s_AComObj.EmergencyInhibitTime,RANGE_NULL  NULLCLBK},
 #endif
#endif

#ifdef HEARTBEAT
 {0x1017,0,ATTR_RW,UNSIGNED16,2,(UINT8 ROMCONST    *)&d_HeartbeatTime,(UINT8   XDATA*)&USR_s_AComObj.COP_Heartbeat_Timer_Reload ,RANGE_NULL  NULLCLBK},
#endif
 
 {0x1018,0,ATTR_RO,UNSIGNED8, 1,(UINT8 ROMCONST    *)&d_Identity_00     ,NULL,                             RANGE_NULL  NULLCLBK},
 {0x1018,1,ATTR_RO,UNSIGNED32,4,(UINT8 ROMCONST    *)&d_Vendor_ID       ,NULL,                             RANGE_NULL  NULLCLBK},
 {0x1018,2,ATTR_RO,UNSIGNED32,4,(UINT8 ROMCONST    *)&d_Product_code    ,NULL,                             RANGE_NULL  NULLCLBK},
 {0x1018,3,ATTR_RO,UNSIGNED32,4,(UINT8 ROMCONST    *)&d_Revision_number ,NULL,                             RANGE_NULL  NULLCLBK},
 {0x1018,4,ATTR_RO,UNSIGNED32,4, NULL,                                   (UINT8 XDATA *)&USR_dw_SerialNum, RANGE_NULL  NULLCLBK},

#if (NMS_ENABLE_ERROR_BEHAVIOR == NMS_k_ERROR_BEHAVIOR_1029)
 {0x1029,0,ATTR_RO,UNSIGNED8, 1,(UINT8 ROMCONST    *)&d_b_ErrorBehavior_00,NULL             ,RANGE_NULL  NULLCLBK},
 {0x1029,1,ATTR_RW,UNSIGNED8, 1,(UINT8 ROMCONST    *)&d_b_ErrorBehaviorValue,(UINT8   XDATA*)&USR_s_AComObj.ab_ErrorBehavior[0] ,RANGE_NULL  NULLCLBK},
 #if(NMS_k_ERROR_BEHAVIOR_NUM_CLASSES > 1)
 {0x1029,2,ATTR_RW,UNSIGNED8, 1,(UINT8 ROMCONST    *)&d_b_ErrorBehaviorValue,(UINT8   XDATA*)&USR_s_AComObj.ab_ErrorBehavior[1] ,RANGE_NULL  NULLCLBK},
 #endif
 #if(NMS_k_ERROR_BEHAVIOR_NUM_CLASSES > 2)
 {0x1029,3,ATTR_RW,UNSIGNED8, 1,(UINT8 ROMCONST    *)&d_b_ErrorBehaviorValue,(UINT8   XDATA*)&USR_s_AComObj.ab_ErrorBehavior[2] ,RANGE_NULL  NULLCLBK},
 #endif
#endif
 {OBD_k_OD_INDEX_END,0xff,0,0,0,NULL,NULL,RANGE_NULL  NULLCLBK}  };

/*************************************************************************
** general communication parameter
*************************************************************************/
USR_t_ActObjCom XDATA   USR_s_AComObj;

/*************************************************************************
** SDO Parameter object dictionary structure
*************************************************************************/

t_sdo_para ROMCONST    USR_as_SSDOParameterObj[SDO_k_SSDOCNT] =
{
/*************************************************************************
** Server SDO Parameter
** In the first Server SDO the Tx/Rx COB_ID's depend on the node number.
** So the entries below are not relevant for the first server SDO. 
** Entries of COB-IDs for SSDOs (except first) should be "not valid",
** Bit 31 = 1 (according CiA DS301)
*************************************************************************/

/* 
**  index  |COB-ID      |COB-ID 
**         |Client->    |Server-> 
**         |Server (rx) |Client (tx)
*/
  {0x1200  ,0           ,0          }
 };

/*************************************************************************
** Client SDO Parameter
*************************************************************************/

#if (SDO_k_CSDOCNT > 0)
t_sdo_para ROMCONST    USR_as_CSDOParameterObj[SDO_k_CSDOCNT] =
{
/* 
**  index  |COB-ID      |COB-ID 
**         |Client->    |Server-> 
**         |Server (tx) |Client (rx)
*/
 {0x1280  ,0x80000000  ,0x80000000}
 };
#endif


/**********************************************************************
** default communication parameter of PDOs
**********************************************************************/


/* definition of communication parameter of PDOs*/
#if (PDO_k_RXPDODIR_SIZE != 0)
t_com_para ROMCONST    USR_as_RxPDOCommunicationObj[PDO_k_RXPDODIR_SIZE]=
{
  /*receive PDO communication parameter */
  /*  index, default id, number of entries, Transmission Type, Inhibit Time (not used by Rx-PDOs) Event_Timer */
  /* default id: 0xYxxx   Y-Bit 3: 0 = PDO Enabled,  1 = PDO Disabled  */
  /*                      Y-Bit 2: 0 = add Node-ID,  1 = use ID direct */
  /*                      Y-Bit 0..1: reserved{0}                      */
  /*                      xxx => COB-ID                                */
  {0x1400, 0x0200, RX_COM_NUMBER_OF_ENTRIES, 255, 0 PDO_EVENT_TIME}
 #if (PDO_k_RXPDODIR_SIZE > 1)
 ,{0x1401, 0x0300, RX_COM_NUMBER_OF_ENTRIES, 255, 0 PDO_EVENT_TIME} 
 #endif
 #if (PDO_k_RXPDODIR_SIZE > 2)
 ,{0x1402, 0x0400, RX_COM_NUMBER_OF_ENTRIES, 255, 0 PDO_EVENT_TIME}
 #endif
 #if (PDO_k_RXPDODIR_SIZE > 3)
 ,{0x1403, 0x0500, RX_COM_NUMBER_OF_ENTRIES, 255, 0 PDO_EVENT_TIME}
 #endif
};

#endif /* #if (PDO_k_RXPDODIR_SIZE != 0) */

#if (PDO_k_TXPDODIR_SIZE != 0)
t_com_para ROMCONST    USR_as_TxPDOCommunicationObj[PDO_k_TXPDODIR_SIZE]=
 {
  /*transmit PDO communication parameter */
  /*  index, default id, number of entries, Transmission Type, Inhibit Time, Event_Timer */
  /* encoding of default id, see RxPDOCommunicationObj[] above */
  {0x1800, 0x0180, TX_COM_NUMBER_OF_ENTRIES, 255, 0 PDO_EVENT_TIME}				// 20ms
#if (PDO_k_TXPDODIR_SIZE > 1)
 ,{0x1801, 0x0280, TX_COM_NUMBER_OF_ENTRIES, 255, 0 PDO_EVENT_TIME}				//150ms pour ana
#endif
#if (PDO_k_TXPDODIR_SIZE > 2)
 ,{0x1802, 0x0380, TX_COM_NUMBER_OF_ENTRIES, 255, 0 PDO_EVENT_TIME}
#endif
#if (PDO_k_TXPDODIR_SIZE > 3)
 ,{0x1803, 0x0480, TX_COM_NUMBER_OF_ENTRIES, 255, 0 PDO_EVENT_TIME}
#endif
};

#endif /* #if (PDO_k_TXPDODIR_SIZE != 0) */


/**********************************************************************
** mapping parameter of PDOs
**********************************************************************/

/* definition of mappingparameter of RxPDOs*/
#if (PDO_k_RXPDODIR_SIZE != 0)
t_map_para ROMCONST    USR_as_RxPDOMappingObj[PDO_k_RXPDODIR_SIZE]=
{
/* 
** index | number of entries (subindex zero) |  Mapping entries 1..8 | Callback >Default Mapping< 
*/
  {0x1600,4,{0x62000108UL,0x62000208UL,0x62000108UL,0x62000408UL,0x62000508UL,0,0,0},DEFAULT_CALLBACK} //5 bytes
#if (PDO_k_RXPDODIR_SIZE > 1)
 ,{0x1601,2,{0x64110110UL,0x64110210UL,0,0,0,0,0,0},DEFAULT_CALLBACK} 									// 2*16 bits
#endif
#if (PDO_k_RXPDODIR_SIZE > 2)
 ,{0x1602,2,{0x62000108UL,0x62000208UL,0,0,0,0,0,0},DEFAULT_CALLBACK} 
#endif
#if (PDO_k_RXPDODIR_SIZE > 3)
 ,{0x1603,2,{0x64110110UL,0x64110210UL,0,0,0,0,0,0},DEFAULT_CALLBACK} 
#endif
  };


#endif /* #if (PDO_k_RXPDODIR_SIZE != 0) */


/* definition of mappingparameter of TxPDOs*/
#if (PDO_k_TXPDODIR_SIZE != 0)
t_map_para ROMCONST    USR_as_TxPDOMappingObj[PDO_k_TXPDODIR_SIZE]=
{
/* 
** index | number of entries (subindex zero) |  Mapping entries 1..8 | Callback (for further extensions 
**                                                                     and when default Mapping will be 
**                                                                     used a Dummy Callback function 
**                                                                     must be specified
*/
  {0x1A00,2,{0x60000108UL,0x60000208UL,0,0,0,0,0,0},NULLCLBK} 
#if (PDO_k_TXPDODIR_SIZE > 1)
 ,{0x1A01,2,{0x64010110UL,0x64010210UL,0x64010310UL,0x64010410UL,0,0,0,0},NULLCLBK} 
#endif
#if (PDO_k_TXPDODIR_SIZE > 2)
 ,{0x1A02,2,{0x60000108UL,0x60000208UL,0,0,0,0,0,0},NULLCLBK}
#endif
#if (PDO_k_TXPDODIR_SIZE > 3)
 ,{0x1A03,2,{0x64010110UL,0x64010210UL,0,0,0,0,0,0},NULLCLBK} 
#endif
  };


#endif /* #if (PDO_k_TXPDODIR_SIZE != 0) */

/*** End Of File ***/
