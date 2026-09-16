#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 11 member(s).
namespace CloudExperienceHostAPI {
class HostedApplicationCoreInstance {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HostedApplicationCoreInstance@CloudExperienceHostAPI@@QEAA@XZ
    HostedApplicationCoreInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeMessageToHostedApp@HostedApplicationCoreInstance@CloudExperienceHostAPI@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long InvokeMessageToHostedApp(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestHostedAppDismiss@HostedApplicationCoreInstance@CloudExperienceHostAPI@@UEAAJXZ
    virtual long RequestHostedAppDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@HostedApplicationCoreInstance@CloudExperienceHostAPI@@QEAAJPEAUHSTRING__@@0URect@Foundation@Windows@@@Z
    long RuntimeClassInitialize(HSTRING__*, HSTRING__*, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowLocation@HostedApplicationCoreInstance@CloudExperienceHostAPI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_WindowLocation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WindowLocation@HostedApplicationCoreInstance@CloudExperienceHostAPI@@UEAAJURect@Foundation@Windows@@@Z
    virtual long put_WindowLocation(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostedApplicationCoreInstance@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~HostedApplicationCoreInstance();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstantiateAppServiceConnection@HostedApplicationCoreInstance@CloudExperienceHostAPI@@AEAAXXZ
    void InstantiateAppServiceConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndSendAppServiceMessage@HostedApplicationCoreInstance@CloudExperienceHostAPI@@AEAAXPEAUHSTRING__@@0URect@Foundation@Windows@@@Z
    void PrepareAndSendAppServiceMessage(HSTRING__*, HSTRING__*, WindissectOpaque);
};
} // namespace CloudExperienceHostAPI
