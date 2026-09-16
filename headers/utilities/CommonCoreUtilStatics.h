#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 46 member(s).
namespace CloudExperienceHostAPI {
class CommonCoreUtilStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CommonCoreUtilStatics@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CommonCoreUtilStatics@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CommonCoreUtilStatics@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CommonCoreUtilStatics@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowsFlightDataAsync@CommonCoreUtilStatics@CloudExperienceHostAPI@@UEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long GetWindowsFlightDataAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CommonCoreUtilStatics@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CommonCoreUtilStatics@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppPackageProvisionedAsync@CommonCoreUtilStatics@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long IsAppPackageProvisionedAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWebcamPermissionAllowed@CommonCoreUtilStatics@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsWebcamPermissionAllowed(HSTRING__*, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CommonCoreUtilStatics@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CommonCoreUtilStatics@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CommonCoreUtilStatics@CloudExperienceHostAPI@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRefreshWindowsFlightDataAsync@CommonCoreUtilStatics@CloudExperienceHostAPI@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long TryRefreshWindowsFlightDataAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProductActivationId@CommonCoreUtilStatics@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProductActivationId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowsProductKey@CommonCoreUtilStatics@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_WindowsProductKey(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CommonCoreUtilStatics@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~CommonCoreUtilStatics();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCxhWebcamAccessAllowedByApp@CommonCoreUtilStatics@CloudExperienceHostAPI@@AEAAJPEBGPEA_N@Z
    long IsCxhWebcamAccessAllowedByApp(unsigned short const *, bool *);
};
} // namespace CloudExperienceHostAPI
