#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 28 member(s).
namespace CloudExperienceHostAPI {
class AppLifetimeManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppLifetimeManager@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppLifetimeManager@CloudExperienceHostAPI@@QEAA@XZ
    AppLifetimeManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableGamepadVKeysForProcessLifetime@AppLifetimeManager@CloudExperienceHostAPI@@UEAAJXZ
    virtual long EnableGamepadVKeysForProcessLifetime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppLifetimeManager@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppLifetimeManager@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppLifetimeManager@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AppLifetimeManager@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@AppLifetimeManager@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppLifetimeManager@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppLifetimeManager@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateApp@AppLifetimeManager@CloudExperienceHostAPI@@UEAAJXZ
    virtual long TerminateApp();
};
} // namespace CloudExperienceHostAPI
