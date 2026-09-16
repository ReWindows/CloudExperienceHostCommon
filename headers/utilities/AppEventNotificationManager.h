#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 25 member(s).
namespace CloudExperienceHostAPI {
class AppEventNotificationManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppEventNotificationManager@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppEventNotificationManager@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppEventNotificationManager@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppEventNotificationManager@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AppEventNotificationManager@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@AppEventNotificationManager@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAppFinished@AppEventNotificationManager@CloudExperienceHostAPI@@UEAAJEPEAUHSTRING__@@@Z
    virtual long NotifyAppFinished(unsigned char, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBack@AppEventNotificationManager@CloudExperienceHostAPI@@UEAAJXZ
    virtual long NotifyBack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBackStateChanged@AppEventNotificationManager@CloudExperienceHostAPI@@UEAAJE@Z
    virtual long NotifyBackStateChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOobeReadyStateChanged@AppEventNotificationManager@CloudExperienceHostAPI@@UEAAJE@Z
    virtual long NotifyOobeReadyStateChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyWebAppStatusChanged@AppEventNotificationManager@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@W4WebAppStatus@2@@Z
    virtual long NotifyWebAppStatusChanged(HSTRING__*, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppEventNotificationManager@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppEventNotificationManager@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppEventNotificationManager@CloudExperienceHostAPI@@QEAAJXZ
    long RuntimeClassInitialize();
};
} // namespace CloudExperienceHostAPI
