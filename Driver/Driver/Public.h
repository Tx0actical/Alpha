/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_Driver,
    0x3162b57b,0xe437,0x4a30,0xa2,0xf4,0xad,0xf9,0xd2,0x63,0xd3,0x99);
// {3162b57b-e437-4a30-a2f4-adf9d263d399}
