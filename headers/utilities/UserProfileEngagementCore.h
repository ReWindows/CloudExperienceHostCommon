#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 27 member(s).
namespace CloudExperienceHostAPI {
class UserProfileEngagementCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserProfileEngagementCore@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckEngagementAsync@UserProfileEngagementCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long CheckEngagementAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserProfileEngagementCore@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserProfileEngagementCore@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserProfileEngagementCore@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@UserProfileEngagementCore@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@UserProfileEngagementCore@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserProfileEngagementCore@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserProfileEngagementCore@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UserProfileEngagementCore@CloudExperienceHostAPI@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFastCheckEngagement@UserProfileEngagementCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAPEAU3@PEAE@Z
    virtual long TryFastCheckEngagement(HSTRING__*, HSTRING__* *, unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserProfileEngagementCore@CloudExperienceHostAPI@@QEAA@XZ
    UserProfileEngagementCore();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserProfileEngagementCore@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~UserProfileEngagementCore();
};
} // namespace CloudExperienceHostAPI
