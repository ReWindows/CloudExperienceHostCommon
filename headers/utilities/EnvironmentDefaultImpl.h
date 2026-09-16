#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 22 member(s).
class EnvironmentDefaultImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnvironmentDefaultImpl@@QEAA@XZ
    EnvironmentDefaultImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceChassisType@EnvironmentDefaultImpl@@UEAAJPEAK@Z
    virtual long GetDeviceChassisType(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryDiskType@EnvironmentDefaultImpl@@UEAAJPEAK@Z
    virtual long GetPrimaryDiskType(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegValue@EnvironmentDefaultImpl@@UEAAJPEAUHSTRING__@@PEAPEAU2@@Z
    virtual long GetRegValue(HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceForm@EnvironmentDefaultImpl@@UEAAJPEAK@Z
    virtual long get_DeviceForm(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Edition@EnvironmentDefaultImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Edition(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IdentityClientBinaryVersion@EnvironmentDefaultImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_IdentityClientBinaryVersion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCloudPolicyEnforced@EnvironmentDefaultImpl@@UEAAJPEAE@Z
    virtual long get_IsCloudPolicyEnforced(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFullscreenCXHRunning@EnvironmentDefaultImpl@@UEAAJPEAE@Z
    virtual long get_IsFullscreenCXHRunning(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MachineModel@EnvironmentDefaultImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_MachineModel(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Manufacturer@EnvironmentDefaultImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Manufacturer(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MsaBinaryVersion@EnvironmentDefaultImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_MsaBinaryVersion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OSRevision@EnvironmentDefaultImpl@@UEAAJPEAK@Z
    virtual long get_OSRevision(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OSVersionInfo@EnvironmentDefaultImpl@@UEAAJPEAUOSVersionInfo@CloudExperienceHostAPI@@@Z
    virtual long get_OSVersionInfo(::CloudExperienceHostAPI::OSVersionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Platform@EnvironmentDefaultImpl@@UEAAJPEAK@Z
    virtual long get_Platform(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Region@EnvironmentDefaultImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Region(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Target@EnvironmentDefaultImpl@@UEAAJPEAK@Z
    virtual long get_Target(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TimezoneBias@EnvironmentDefaultImpl@@UEAAJPEAJ@Z
    virtual long get_TimezoneBias(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowsProductId@EnvironmentDefaultImpl@@UEAAJPEAK@Z
    virtual long get_WindowsProductId(unsigned long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChassisType@EnvironmentDefaultImpl@@CAJPEAK@Z
    static long _GetChassisType(unsigned long *);
};
