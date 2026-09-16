#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 21 member(s).
namespace CloudExperienceHostAPI::Diagnostics {
class OobeLoggingManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OobeLoggingManager@Diagnostics@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDevicePortalInOobeAsync@OobeLoggingManager@Diagnostics@CloudExperienceHostAPI@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long EnableDevicePortalInOobeAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@OobeLoggingManager@Diagnostics@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@OobeLoggingManager@Diagnostics@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@OobeLoggingManager@Diagnostics@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@OobeLoggingManager@Diagnostics@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@OobeLoggingManager@Diagnostics@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OobeLoggingManager@Diagnostics@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OobeLoggingManager@Diagnostics@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopOobeLoggingAsync@OobeLoggingManager@Diagnostics@CloudExperienceHostAPI@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long StopOobeLoggingAsync(WindissectOpaque * *);
};
} // namespace CloudExperienceHostAPI::Diagnostics
