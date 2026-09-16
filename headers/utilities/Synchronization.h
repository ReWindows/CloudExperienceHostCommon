#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 25 member(s).
namespace CloudExperienceHostAPI {
class Synchronization {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Synchronization@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@Synchronization@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@Synchronization@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Synchronization@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@Synchronization@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@Synchronization@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFirstOOBEWebAppVisible@Synchronization@CloudExperienceHostAPI@@UEAAJXZ
    virtual long OnFirstOOBEWebAppVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLastOOBEWebAppFinished@Synchronization@CloudExperienceHostAPI@@UEAAJEPEAUHSTRING__@@@Z
    virtual long OnLastOOBEWebAppFinished(unsigned char, HSTRING__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Synchronization@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Synchronization@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportResult@Synchronization@CloudExperienceHostAPI@@UEAAJE@Z
    virtual long ReportResult(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportSubResult@Synchronization@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@@Z
    virtual long ReportSubResult(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryWaitForReadyForAppTransitionAsync@Synchronization@CloudExperienceHostAPI@@UEAAJKPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long TryWaitForReadyForAppTransitionAsync(unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForTaskbarReadyAsync@Synchronization@CloudExperienceHostAPI@@UEAAJKPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long WaitForTaskbarReadyAsync(unsigned long, WindissectOpaque * *);
};
} // namespace CloudExperienceHostAPI
