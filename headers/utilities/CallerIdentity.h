#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 8 member(s).
class CallerIdentity {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z
    long CheckCallerCapability(unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z
    long CheckCapabilityFromImpersonationToken(void *, unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z
    long CheckCapabilityFromProcessHandle(void *, unsigned short const *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z
    long GetImpersonationTokenFromProcess(void *, unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCallingProcessAppContainer@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEA_N@Z
    long IsCallingProcessAppContainer(int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z
    long IsProcessAppContainer(void *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRuntimeBrokerPID@CallerIdentity@@YAXXZ
    void _EnsureRuntimeBrokerPID();
};
