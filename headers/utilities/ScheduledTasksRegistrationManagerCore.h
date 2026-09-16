#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 26 member(s).
namespace CloudExperienceHostAPI {
class ScheduledTasksRegistrationManagerCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ScheduledTasksRegistrationManagerCore@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteRegisteredTaskIfPresentAsync@ScheduledTasksRegistrationManagerCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long DeleteRegisteredTaskIfPresentAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ScheduledTasksRegistrationManagerCore@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ScheduledTasksRegistrationManagerCore@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ScheduledTasksRegistrationManagerCore@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ScheduledTasksRegistrationManagerCore@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@ScheduledTasksRegistrationManagerCore@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ScheduledTasksRegistrationManagerCore@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTimeTriggeredTaskForUserScenarioAsync@ScheduledTasksRegistrationManagerCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@KPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long RegisterTimeTriggeredTaskForUserScenarioAsync(HSTRING__*, unsigned long, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ScheduledTasksRegistrationManagerCore@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScheduledTasksRegistrationManagerCore@CloudExperienceHostAPI@@QEAA@XZ
    ScheduledTasksRegistrationManagerCore();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScheduledTasksRegistrationManagerCore@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~ScheduledTasksRegistrationManagerCore();
};
} // namespace CloudExperienceHostAPI
