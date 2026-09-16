#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 19 member(s).
namespace CloudExperienceHostAPI {
class UserIntentRecordResultFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserIntentRecordResultFactory@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUserIntentRecordResult@UserIntentRecordResultFactory@CloudExperienceHostAPI@@UEAAJKEPEAPEAUIUserIntentRecordResult@2@@Z
    virtual long CreateUserIntentRecordResult(unsigned long, unsigned char, ::CloudExperienceHostAPI::IUserIntentRecordResult * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserIntentRecordResultFactory@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserIntentRecordResultFactory@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserIntentRecordResultFactory@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserIntentRecordResultFactory@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserIntentRecordResultFactory@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserIntentRecordResultFactory@CloudExperienceHostAPI@@QEAA@XZ
    UserIntentRecordResultFactory();
};
} // namespace CloudExperienceHostAPI
