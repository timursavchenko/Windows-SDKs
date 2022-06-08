

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0626 */
/* @@MIDL_FILE_HEADING(  ) */



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
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIDebug,0xaa1e42b5,0x496d,0x4ca4,0xa6,0x90,0x34,0x8d,0xcb,0x2e,0xc4,0xad);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIPerfCounterLogger,0x071c2533,0x0fa4,0x4e8f,0xae,0x83,0x9c,0x10,0xb4,0x30,0x5a,0xb5);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIPerfCounterLoggingManager,0x9a512c86,0xac6e,0x4a8e,0xb1,0xa4,0xfc,0xef,0x36,0x3f,0x6e,0x64);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIAudioStream,0xe3e30ef9,0x89c6,0x4541,0xba,0x3b,0x19,0x33,0x6a,0xc6,0xd3,0x1c);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIClipboardUseEvents,0xD559F59A,0x7A27,0x4138,0x87,0x63,0x24,0x7C,0xE5,0xF6,0x59,0xA8);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIWindow,0xbeafe0f9,0xc77b,0x4933,0xba,0x9f,0xa2,0x4c,0xdd,0xcc,0x27,0xcf);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIWindowList,0x8a05ce44,0x715a,0x4116,0xa1,0x89,0xa1,0x18,0xf3,0x0a,0x07,0xbd);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIApplication,0x41e7a09d,0xeb7a,0x436e,0x93,0x5d,0x78,0x0c,0xa2,0x62,0x83,0x24);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIApplicationList,0xd4b4aeb3,0x22dc,0x4837,0xb3,0xb6,0x42,0xea,0x25,0x17,0x84,0x9a);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIApplicationFilter,0xd20f10ca,0x6637,0x4f06,0xb1,0xd5,0x27,0x7e,0xa7,0xe5,0x16,0x0d);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPISessionProperties,0x339b24f2,0x9bc0,0x4f16,0x9a,0xac,0xf1,0x65,0x43,0x3d,0x13,0xd4);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIInvitation,0x4fac1d43,0xfc51,0x45bb,0xb1,0xb4,0x2b,0x53,0xaa,0x56,0x2f,0xa3);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIInvitationManager,0x4722b049,0x92c3,0x4c2d,0x8a,0x65,0xf7,0x34,0x8f,0x64,0x4d,0xcf);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPITcpConnectionInfo,0xf74049a4,0x3d06,0x4028,0x81,0x93,0x0a,0x8c,0x29,0xbc,0x24,0x52);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIAttendee,0xec0671b3,0x1b78,0x4b80,0xa4,0x64,0x91,0x32,0x24,0x75,0x43,0xe3);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIAttendeeManager,0xba3a37e8,0x33da,0x4749,0x8d,0xa0,0x07,0xfa,0x34,0xda,0x79,0x44);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIAttendeeDisconnectInfo,0xc187689f,0x447c,0x44a1,0x9c,0x14,0xff,0xfb,0xb3,0xb7,0xec,0x17);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIVirtualChannel,0x05e12f95,0x28b3,0x4c9a,0x87,0x80,0xd0,0x24,0x85,0x74,0xa1,0xe0);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIVirtualChannelManager,0x0d11c661,0x5d0d,0x4ee4,0x89,0xdf,0x21,0x66,0xae,0x1f,0xdf,0xed);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIViewer,0xc6bfcd38,0x8ce9,0x404d,0x8a,0xe8,0xf3,0x1d,0x00,0xc6,0x5c,0xb5);


MIDL_DEFINE_GUID(IID, IID_IRDPViewerInputSink,0xBB590853,0xA6C5,0x4A7B,0x8D,0xD4,0x76,0xB6,0x9E,0xEA,0x12,0xD5);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPIFrameBuffer,0x3D67E7D2,0xB27B,0x448E,0x81,0xB3,0xC6,0x11,0x0E,0xD8,0xB4,0xBE);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPITransportStreamBuffer,0x81c80290,0x5085,0x44b0,0xb4,0x60,0xf8,0x65,0xc3,0x9c,0xb4,0xa9);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPITransportStreamEvents,0xea81c254,0xf5af,0x4e40,0x98,0x2e,0x3e,0x63,0xbb,0x59,0x52,0x76);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPITransportStream,0x36cfa065,0x43bb,0x4ef7,0xae,0xd7,0x9b,0x88,0xa5,0x05,0x30,0x36);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPISharingSession,0xeeb20886,0xe470,0x4cf6,0x84,0x2b,0x27,0x39,0xc0,0xec,0x5c,0xfb);


MIDL_DEFINE_GUID(IID, IID_IRDPSRAPISharingSession2,0xfee4ee57,0xe3e8,0x4205,0x8f,0xb0,0x8f,0xd1,0xd0,0x67,0x5c,0x21);


MIDL_DEFINE_GUID(IID, LIBID_RDPCOMAPILib,0xCC802D05,0xAE07,0x4C15,0xB4,0x96,0xDB,0x9D,0x22,0xAA,0x0A,0x84);


MIDL_DEFINE_GUID(IID, DIID__IRDPSessionEvents,0x98a97042,0x6698,0x40e9,0x8e,0xfd,0xb3,0x20,0x09,0x90,0x00,0x4b);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPViewer,0x32be5ed2,0x5c86,0x480f,0xa9,0x14,0x0f,0xf8,0x88,0x5a,0x1b,0x3f);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPSRAPISessionProperties,0xdd7594ff,0xea2a,0x4c06,0x8f,0xdf,0x13,0x2d,0xe4,0x8b,0x65,0x10);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPSRAPIInvitationManager,0x53d9c9db,0x75ab,0x4271,0x94,0x8a,0x4c,0x4e,0xb3,0x6a,0x8f,0x2b);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPSRAPIInvitation,0x49174dc6,0x0731,0x4b5e,0x8e,0xe1,0x83,0xa6,0x3d,0x38,0x68,0xfa);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPSRAPIAttendeeManager,0xd7b13a01,0xf7d4,0x42a6,0x85,0x95,0x12,0xfc,0x8c,0x24,0xe8,0x51);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPSRAPIAttendee,0x74f93bb5,0x755f,0x488e,0x8a,0x29,0x23,0x90,0x10,0x8a,0xef,0x55);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPSRAPIAttendeeDisconnectInfo,0xb47d7250,0x5bdb,0x405d,0xb4,0x87,0xca,0xad,0x9c,0x56,0xf4,0xf8);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPSRAPIApplicationFilter,0xe35ace89,0xc7e8,0x427e,0xa4,0xf9,0xb9,0xda,0x07,0x28,0x26,0xbd);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPSRAPIApplicationList,0x9e31c815,0x7433,0x4876,0x97,0xfb,0xed,0x59,0xfe,0x2b,0xaa,0x22);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPSRAPIApplication,0xc116a484,0x4b25,0x4b9f,0x8a,0x54,0xb9,0x34,0xb0,0x6e,0x57,0xfa);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPSRAPIWindowList,0x9c21e2b8,0x5dd4,0x42cc,0x81,0xba,0x1c,0x09,0x98,0x52,0xe6,0xfa);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPSRAPIWindow,0x03cf46db,0xce45,0x4d36,0x86,0xed,0xed,0x28,0xb7,0x43,0x98,0xbf);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPSRAPITcpConnectionInfo,0xbe49db3f,0xebb6,0x4278,0x8c,0xe0,0xd5,0x45,0x58,0x33,0xea,0xee);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPSession,0x9B78F0E6,0x3E05,0x4A5B,0xB2,0xE8,0xE7,0x43,0xA8,0x95,0x6B,0x65);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPSRAPIFrameBuffer,0xa4f66bcc,0x538e,0x4101,0x95,0x1d,0x30,0x84,0x7a,0xdb,0x51,0x01);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPTransportStreamBuffer,0x8D4A1C69,0xF17F,0x4549,0xA6,0x99,0x76,0x1C,0x6E,0x6B,0x5C,0x0A);


MIDL_DEFINE_GUID(CLSID, CLSID_RDPTransportStreamEvents,0x31E3AB20,0x5350,0x483f,0x9D,0xC6,0x67,0x48,0x66,0x5E,0xFD,0xEB);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



