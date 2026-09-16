#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 6 member(s).
class DiagnosticsElevatedManagerImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyLogFiles@DiagnosticsElevatedManagerImpl@@UEAAJPEBG00@Z
    virtual long CopyLogFiles(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteLogFiles@DiagnosticsElevatedManagerImpl@@UEAAJPEBG0@Z
    virtual long DeleteLogFiles(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDevicePortalInOobe@DiagnosticsElevatedManagerImpl@@UEAAJXZ
    virtual long EnableDevicePortalInOobe();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopOobeLogging@DiagnosticsElevatedManagerImpl@@UEAAJXZ
    virtual long StopOobeLogging();
};
