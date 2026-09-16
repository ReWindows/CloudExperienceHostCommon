#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 18 member(s).
namespace CloudExperienceHostAPI {
class UserIntentRecordResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserIntentRecordResult@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserIntentRecordResult@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserIntentRecordResult@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserIntentRecordResult@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@UserIntentRecordResult@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@UserIntentRecordResult@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserIntentRecordResult@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserIntentRecordResult@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Succeeded@UserIntentRecordResult@CloudExperienceHostAPI@@UEAAJPEAE@Z
    virtual long get_Succeeded(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@UserIntentRecordResult@CloudExperienceHostAPI@@UEAAJPEAK@Z
    virtual long get_Value(unsigned long *);
};
} // namespace CloudExperienceHostAPI
