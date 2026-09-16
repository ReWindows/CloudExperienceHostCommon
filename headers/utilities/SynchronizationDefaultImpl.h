#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 8 member(s).
class SynchronizationDefaultImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFirstOOBEWebAppVisible@SynchronizationDefaultImpl@@UEAAJXZ
    virtual long OnFirstOOBEWebAppVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLastOOBEWebAppFinished@SynchronizationDefaultImpl@@UEAAJEPEAUHSTRING__@@@Z
    virtual long OnLastOOBEWebAppFinished(unsigned char, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportResult@SynchronizationDefaultImpl@@UEAAJE@Z
    virtual long ReportResult(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportSubResult@SynchronizationDefaultImpl@@UEAAJPEAUHSTRING__@@@Z
    virtual long ReportSubResult(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryWaitForReadyForAppTransitionAsync@SynchronizationDefaultImpl@@UEAAJKPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long TryWaitForReadyForAppTransitionAsync(unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForTaskbarReadyAsync@SynchronizationDefaultImpl@@UEAAJKPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long WaitForTaskbarReadyAsync(unsigned long, WindissectOpaque * *);
};
