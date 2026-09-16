#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 9 member(s).
class UtilElevatedManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDriverUpdate@UtilElevatedManager@@UEAAJXZ
    virtual long EnableDriverUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FactoryResetDevice@UtilElevatedManager@@UEAAJXZ
    virtual long FactoryResetDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallDrivers@UtilElevatedManager@@UEAAJPEAUHSTRING__@@@Z
    virtual long InstallDrivers(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNetworkRequiredForAutoPilot@UtilElevatedManager@@UEAAJPEAE@Z
    virtual long IsNetworkRequiredForAutoPilot(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Restart@UtilElevatedManager@@UEAAJXZ
    virtual long Restart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@UtilElevatedManager@@UEAAJXZ
    virtual long Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTimeZone@UtilElevatedManager@@UEAAJXZ
    virtual long UpdateTimeZone();
};
