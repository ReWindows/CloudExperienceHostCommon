#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 25 member(s).
namespace CloudExperienceHostAPI {
class HostedApplicationResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HostedApplicationResult@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@HostedApplicationResult@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@HostedApplicationResult@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@HostedApplicationResult@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HostedApplicationResult@CloudExperienceHostAPI@@QEAA@XZ
    HostedApplicationResult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@HostedApplicationResult@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@HostedApplicationResult@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HostedApplicationResult@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HostedApplicationResult@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExitResult@HostedApplicationResult@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ExitResult(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostedApplicationResult@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~HostedApplicationResult();
};
} // namespace CloudExperienceHostAPI
