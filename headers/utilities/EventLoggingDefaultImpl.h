#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 11 member(s).
class EventLoggingDefaultImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppActivityStart@EventLoggingDefaultImpl@@UEAAJPEAUHSTRING__@@0@Z
    virtual long AppActivityStart(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppActivityStop@EventLoggingDefaultImpl@@UEAAJPEAUHSTRING__@@@Z
    virtual long AppActivityStop(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppEvent1@EventLoggingDefaultImpl@@UEAAJPEAUHSTRING__@@@Z
    virtual long AppEvent1(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppEvent2@EventLoggingDefaultImpl@@UEAAJPEAUHSTRING__@@0@Z
    virtual long AppEvent2(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OobeHealthEvent@EventLoggingDefaultImpl@@UEAAJW4HealthEvent@CloudExperienceHostAPI@@J@Z
    virtual long OobeHealthEvent(int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebAppActivityStart@EventLoggingDefaultImpl@@UEAAJPEAUHSTRING__@@@Z
    virtual long WebAppActivityStart(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebAppActivityStop@EventLoggingDefaultImpl@@UEAAJPEAUHSTRING__@@@Z
    virtual long WebAppActivityStop(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebAppEvent1@EventLoggingDefaultImpl@@UEAAJPEAUHSTRING__@@@Z
    virtual long WebAppEvent1(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebAppEvent2@EventLoggingDefaultImpl@@UEAAJPEAUHSTRING__@@0@Z
    virtual long WebAppEvent2(HSTRING__*, HSTRING__*);
};
