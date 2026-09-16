#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 31 member(s).
namespace CloudExperienceHostAPI {
class HostedApplicationCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HostedApplicationCore@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@HostedApplicationCore@CloudExperienceHostAPI@@UEAAJPEAPEAUIHostedApplicationManager@2@@Z
    virtual long GetForCurrentView(::CloudExperienceHostAPI::IHostedApplicationManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@HostedApplicationCore@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@HostedApplicationCore@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@HostedApplicationCore@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@HostedApplicationCore@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@HostedApplicationCore@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HostedApplicationCore@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HostedApplicationCore@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestDismiss@HostedApplicationCore@CloudExperienceHostAPI@@UEAAJXZ
    virtual long RequestDismiss();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowLocation@HostedApplicationCore@CloudExperienceHostAPI@@UEAAJHURect@Foundation@Windows@@@Z
    virtual long SetWindowLocation(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowHostedAppAsync@HostedApplicationCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@0PEAUIPropertySet@Collections@Foundation@Windows@@URect@67@PEAPEAU?$IAsyncOperation@PEAVHostedApplicationResult@CloudExperienceHostAPI@@@67@@Z
    virtual long ShowHostedAppAsync(HSTRING__*, HSTRING__*, WindissectOpaque *, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowOobeShellHostedAppAsync@HostedApplicationCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@URect@Foundation@Windows@@PEAUIPropertySet@Collections@56@PEAPEAU?$IAsyncOperation@PEAVHostedApplicationResult@CloudExperienceHostAPI@@@56@@Z
    virtual long ShowOobeShellHostedAppAsync(HSTRING__*, WindissectOpaque, WindissectOpaque *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostedApplicationCore@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~HostedApplicationCore();
};
} // namespace CloudExperienceHostAPI
