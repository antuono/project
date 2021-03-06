

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Jun 20 06:53:20 2012
 */
/* Compiler settings for sapirfc.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ISAPrfcITab,0x3AAC5D62,0x7DB1,0x11D0,0xAC,0xCF,0x08,0x00,0x09,0xD2,0x13,0xD2);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcLocalITab,0x00D25671,0xCAD6,0x11d0,0xAD,0x03,0x08,0x00,0x09,0xD2,0x13,0xD2);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcITabHandleAccess,0xE2EE96A1,0x4542,0x11d1,0xAD,0x41,0x08,0x00,0x09,0xD2,0x13,0xD2);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcStructDesc,0x3AAC5D66,0x7DB1,0x11D0,0xAC,0xCF,0x08,0x00,0x09,0xD2,0x13,0xD2);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcStructHandleAccess,0xE2EE96A3,0x4542,0x11d1,0xAD,0x41,0x08,0x00,0x09,0xD2,0x13,0xD2);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcStructView,0x3AAC5D6B,0x7DB1,0x11D0,0xAC,0xCF,0x08,0x00,0x09,0xD2,0x13,0xD2);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcDataConvert,0x18D30461,0x90A9,0x11d0,0xAC,0xDB,0x08,0x00,0x09,0xD2,0x13,0xD2);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcITab2Recordset,0xC45992A2,0x08CD,0x11d1,0xAD,0x2E,0x08,0x00,0x09,0xD2,0x13,0xD2);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcStruct2OLEDB,0x51E877C1,0x072C,0x11d1,0xAE,0xB5,0x00,0xA0,0x24,0xAF,0xE7,0xE1);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcStruct2OLEDBHinted,0xAAB20CA5,0xB71F,0x4b1e,0xA3,0x2D,0x68,0x50,0x15,0xA2,0xB3,0x57);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcBind,0xADF7E1A4,0x2750,0x11D1,0x91,0x62,0x08,0x00,0x09,0xD2,0x13,0xD2);


MIDL_DEFINE_GUID(IID, IID_IRfcProxy,0x8F034842,0xF427,0x11D0,0x90,0xB3,0xB0,0xD5,0x7C,0x00,0x00,0x00);


MIDL_DEFINE_GUID(IID, IID_IRfcAccessStub,0x8F034841,0xF427,0x11D0,0x90,0xB3,0xB0,0xD5,0x7C,0x00,0x00,0x00);


MIDL_DEFINE_GUID(IID, IID_ICCMonitor,0x354d2fe0,0x78b3,0x11d2,0xbd,0x0b,0x08,0x00,0x09,0xeb,0xbc,0x58);


MIDL_DEFINE_GUID(IID, IID_IRfcHelper1,0x7be0f72c,0xe620,0x11d1,0x88,0x9f,0x08,0x00,0x09,0xe8,0x2b,0x31);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcContextRD,0x90a60e80,0x5079,0x11d1,0xbc,0xa6,0x08,0x00,0x09,0xeb,0xbc,0x58);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcContext,0xbd8dc610,0x5079,0x11d1,0xbc,0xa6,0x08,0x00,0x09,0xeb,0xbc,0x58);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcContext2,0x94BD4CAF,0x38A7,0x491e,0xA1,0x45,0x44,0x77,0x3F,0xB2,0x69,0x36);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcContextSource,0xAB8B5770,0x2537,0x11d1,0xBC,0x9D,0x08,0x00,0x09,0xEB,0xBC,0x58);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcContextSource2,0x24729B1B,0x84C7,0x4f03,0x85,0x38,0x57,0xF6,0x8B,0x04,0xB2,0x84);


MIDL_DEFINE_GUID(IID, IID_ISAPTxStart,0x292228e0,0x5079,0x11d1,0xbc,0xa6,0x08,0x00,0x09,0xeb,0xbc,0x58);


MIDL_DEFINE_GUID(IID, IID_ISAPrfcTrace,0xe9ad4cb0,0x8065,0x11d1,0x92,0x73,0x08,0x00,0x09,0xeb,0xbc,0x58);


MIDL_DEFINE_GUID(IID, IID_ISAPConnector,0xB933F810,0xDC5C,0x11d2,0xB8,0x0B,0x00,0xA0,0xC9,0x30,0x8B,0xE6);


MIDL_DEFINE_GUID(IID, IID_ISAPSession,0xB933F811,0xDC5C,0x11d2,0xB8,0x0B,0x00,0xA0,0xC9,0x30,0x8B,0xE6);


MIDL_DEFINE_GUID(IID, IID_ISAPCatalog,0x7be0d2e2,0xe620,0x11d1,0x88,0x9f,0x08,0x00,0x09,0xe8,0x2b,0x31);


MIDL_DEFINE_GUID(IID, IID_ISAPCatalog4C,0xFB62A080,0x3FE8,0x11d1,0xAD,0xC1,0x08,0x00,0x09,0xD2,0x13,0xD2);


MIDL_DEFINE_GUID(IID, IID_ISAPTRfcConnector,0xB0B9E2C0,0x7A83,0x4c2a,0x90,0x75,0xA9,0xBE,0xC9,0x2D,0x89,0x7B);


MIDL_DEFINE_GUID(IID, IID_ISAPQRfcConnector,0xF66023A4,0xEB0D,0x45ce,0xA0,0x47,0x9A,0x82,0xF7,0xBA,0x32,0x2C);


MIDL_DEFINE_GUID(IID, LIBID_IRFC32Lib,0x3AAC5D60,0x7DB1,0x11D0,0xAC,0xCF,0x08,0x00,0x09,0xD2,0x13,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_CSAPrfcITab,0x7CC52276,0x6D59,0x11D0,0xAC,0xCA,0x08,0x00,0x09,0xD2,0x13,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_CSAPrfcStructDesc,0x3AAC5D6A,0x7DB1,0x11D0,0xAC,0xCF,0x08,0x00,0x09,0xD2,0x13,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_CSAPrfcStructView,0x3AAC5D6F,0x7DB1,0x11D0,0xAC,0xCF,0x08,0x00,0x09,0xD2,0x13,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_CSAPrfcDataConvert,0x18D30462,0x90A9,0x11d0,0xAC,0xDB,0x08,0x00,0x09,0xD2,0x13,0xD2);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



