#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 30 member(s).
namespace Windows::System::Profile {
class SystemSetupInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SystemSetupInfo@Profile@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SystemSetupInfo@Profile@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SystemSetupInfo@Profile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SystemSetupInfo@Profile@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@SystemSetupInfo@Profile@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@SystemSetupInfo@Profile@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SystemSetupInfo@Profile@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SystemSetupInfo@Profile@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemSetupInfo@Profile@System@Windows@@QEAA@XZ
    SystemSetupInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OutOfBoxExperienceStateChanged@SystemSetupInfo@Profile@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_OutOfBoxExperienceStateChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OutOfBoxExperienceState@SystemSetupInfo@Profile@System@Windows@@UEAAJPEAW4SystemOutOfBoxExperienceState@234@@Z
    virtual long get_OutOfBoxExperienceState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OutOfBoxExperienceStateChanged@SystemSetupInfo@Profile@System@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OutOfBoxExperienceStateChanged(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRegisteredForNotifications@SystemSetupInfo@Profile@System@Windows@@AEAAJXZ
    long EnsureRegisteredForNotifications();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreApplicationSingleton@SystemSetupInfo@Profile@System@Windows@@AEAAJPEAPEAV1234@@Z
    long GetCoreApplicationSingleton(::Windows::System::Profile::SystemSetupInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OobeCompletedCallback@SystemSetupInfo@Profile@System@Windows@@CAXPEAX@Z
    static void OobeCompletedCallback(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemSetupInfo@Profile@System@Windows@@EEAA@XZ
    virtual ~SystemSetupInfo();
};
} // namespace Windows::System::Profile
