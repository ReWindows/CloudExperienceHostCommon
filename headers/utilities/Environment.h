#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 52 member(s).
namespace CloudExperienceHostAPI {
class Environment {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Environment@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Environment@CloudExperienceHostAPI@@QEAA@XZ
    Environment();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceChassisType@Environment@CloudExperienceHostAPI@@UEAAJPEAK@Z
    virtual long GetDeviceChassisType(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@Environment@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryDiskType@Environment@CloudExperienceHostAPI@@UEAAJPEAK@Z
    virtual long GetPrimaryDiskType(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegValue@Environment@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAPEAU3@@Z
    virtual long GetRegValue(HSTRING__*, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@Environment@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Environment@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@Environment@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@Environment@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Environment@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Environment@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Environment@CloudExperienceHostAPI@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceForm@Environment@CloudExperienceHostAPI@@UEAAJPEAK@Z
    virtual long get_DeviceForm(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Edition@Environment@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Edition(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IdentityClientBinaryVersion@Environment@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_IdentityClientBinaryVersion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCloudPolicyEnforced@Environment@CloudExperienceHostAPI@@UEAAJPEAE@Z
    virtual long get_IsCloudPolicyEnforced(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFullscreenCXHRunning@Environment@CloudExperienceHostAPI@@UEAAJPEAE@Z
    virtual long get_IsFullscreenCXHRunning(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MachineModel@Environment@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_MachineModel(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Manufacturer@Environment@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Manufacturer(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MsaBinaryVersion@Environment@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_MsaBinaryVersion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OSRevision@Environment@CloudExperienceHostAPI@@UEAAJPEAK@Z
    virtual long get_OSRevision(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OSVersionInfo@Environment@CloudExperienceHostAPI@@UEAAJPEAUOSVersionInfo@2@@Z
    virtual long get_OSVersionInfo(::CloudExperienceHostAPI::OSVersionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Platform@Environment@CloudExperienceHostAPI@@UEAAJPEAK@Z
    virtual long get_Platform(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Region@Environment@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Region(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Target@Environment@CloudExperienceHostAPI@@UEAAJPEAK@Z
    virtual long get_Target(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TimezoneBias@Environment@CloudExperienceHostAPI@@UEAAJPEAJ@Z
    virtual long get_TimezoneBias(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowsProductId@Environment@CloudExperienceHostAPI@@UEAAJPEAK@Z
    virtual long get_WindowsProductId(unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Environment@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~Environment();
};
} // namespace CloudExperienceHostAPI
