#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 32 member(s).
namespace CloudExperienceHostAPI {
class AppEventSubscriptionManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppEventSubscriptionManager@CloudExperienceHostAPI@@QEAA@XZ
    AppEventSubscriptionManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AppEventSubscriptionManager@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@AppEventSubscriptionManager@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppEventSubscriptionManager@CloudExperienceHostAPI@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AppFinished@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAJPEAUIAppFinishedHandler@2@PEAUEventRegistrationToken@@@Z
    virtual long add_AppFinished(::CloudExperienceHostAPI::IAppFinishedHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Back@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAJPEAUIBackHandler@2@PEAUEventRegistrationToken@@@Z
    virtual long add_Back(::CloudExperienceHostAPI::IBackHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BackStateChanged@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAJPEAUIBackStateChangedHandler@2@PEAUEventRegistrationToken@@@Z
    virtual long add_BackStateChanged(::CloudExperienceHostAPI::IBackStateChangedHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Diagnostics@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAJPEAUIDiagnosticsHandler@2@PEAUEventRegistrationToken@@@Z
    virtual long add_Diagnostics(::CloudExperienceHostAPI::IDiagnosticsHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_WebAppStatusChanged@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAJPEAUIWebAppStatusChangeHandler@2@PEAUEventRegistrationToken@@@Z
    virtual long add_WebAppStatusChanged(::CloudExperienceHostAPI::IWebAppStatusChangeHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AppFinished@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AppFinished(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Back@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Back(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BackStateChanged@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BackStateChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Diagnostics@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Diagnostics(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_WebAppStatusChanged@AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_WebAppStatusChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppEventSubscriptionManager@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~AppEventSubscriptionManager();
};
} // namespace CloudExperienceHostAPI
