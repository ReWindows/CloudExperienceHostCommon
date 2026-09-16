#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 28 member(s).
namespace CloudExperienceHostAPI {
class EventLogging {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EventLogging@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppActivityStart@EventLogging@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@0@Z
    virtual long AppActivityStart(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppActivityStop@EventLogging@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@@Z
    virtual long AppActivityStop(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppEvent1@EventLogging@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@@Z
    virtual long AppEvent1(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppEvent2@EventLogging@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@0@Z
    virtual long AppEvent2(HSTRING__*, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@EventLogging@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@EventLogging@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@EventLogging@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@EventLogging@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@EventLogging@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OobeHealthEvent@EventLogging@CloudExperienceHostAPI@@UEAAJW4HealthEvent@2@J@Z
    virtual long OobeHealthEvent(int, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EventLogging@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EventLogging@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebAppActivityStart@EventLogging@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@@Z
    virtual long WebAppActivityStart(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebAppActivityStop@EventLogging@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@@Z
    virtual long WebAppActivityStop(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebAppEvent1@EventLogging@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@@Z
    virtual long WebAppEvent1(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebAppEvent2@EventLogging@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@0@Z
    virtual long WebAppEvent2(HSTRING__*, HSTRING__*);
};
} // namespace CloudExperienceHostAPI
