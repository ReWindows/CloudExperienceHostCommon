#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 23 member(s).
namespace CloudExperienceHostAPI {
class HostedApplicationKnownResultStrings {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HostedApplicationKnownResultStrings@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@HostedApplicationKnownResultStrings@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@HostedApplicationKnownResultStrings@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@HostedApplicationKnownResultStrings@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HostedApplicationKnownResultStrings@CloudExperienceHostAPI@@QEAA@XZ
    HostedApplicationKnownResultStrings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@HostedApplicationKnownResultStrings@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@HostedApplicationKnownResultStrings@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HostedApplicationKnownResultStrings@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HostedApplicationKnownResultStrings@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@HostedApplicationKnownResultStrings@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Cancel(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Fail@HostedApplicationKnownResultStrings@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Fail(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Success@HostedApplicationKnownResultStrings@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Success(HSTRING__* *);
};
} // namespace CloudExperienceHostAPI
