#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 22 member(s).
namespace Windows::System::UserProfile {
class FirstSignInSettingsFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@FirstSignInSettingsFactory@UserProfile@System@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FirstSignInSettingsFactory@UserProfile@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FirstSignInSettingsFactory@UserProfile@System@Windows@@QEAA@XZ
    FirstSignInSettingsFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefault@FirstSignInSettingsFactory@UserProfile@System@Windows@@UEAAJPEAPEAUIFirstSignInSettings@234@@Z
    virtual long GetDefault(::Windows::System::UserProfile::IFirstSignInSettings * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@FirstSignInSettingsFactory@UserProfile@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@FirstSignInSettingsFactory@UserProfile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@FirstSignInSettingsFactory@UserProfile@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@FirstSignInSettingsFactory@UserProfile@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@FirstSignInSettingsFactory@UserProfile@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FirstSignInSettingsFactory@UserProfile@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FirstSignInSettingsFactory@UserProfile@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::System::UserProfile
