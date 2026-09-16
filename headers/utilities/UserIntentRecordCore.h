#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 29 member(s).
namespace CloudExperienceHostAPI {
class UserIntentRecordCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserIntentRecordCore@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserIntentRecordCore@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserIntentRecordCore@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserIntentRecordCore@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@UserIntentRecordCore@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@UserIntentRecordCore@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserIntentRecordCore@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserIntentRecordCore@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UserIntentRecordCore@CloudExperienceHostAPI@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIntentPropertyDWORDAsync@UserIntentRecordCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@0KPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long SetIntentPropertyDWORDAsync(HSTRING__*, HSTRING__*, unsigned long, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIntentPropertyStringAsync@UserIntentRecordCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@00PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long SetIntentPropertyStringAsync(HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserIntentAndTimestampAsync@UserIntentRecordCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@HPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long SetUserIntentAndTimestampAsync(HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetIntentPropertyDWORDAsync@UserIntentRecordCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@PEAVUserIntentRecordResult@CloudExperienceHostAPI@@@Foundation@Windows@@@Z
    virtual long TryGetIntentPropertyDWORDAsync(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserIntentRecordCore@CloudExperienceHostAPI@@QEAA@XZ
    UserIntentRecordCore();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserIntentRecordCore@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~UserIntentRecordCore();
};
} // namespace CloudExperienceHostAPI
