#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 25 member(s).
namespace CloudExperienceHostAPI {
class ContentDeliveryManagerHelpers {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContentDeliveryManagerHelpers@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContentDeliveryManagerHelpers@CloudExperienceHostAPI@@QEAA@XZ
    ContentDeliveryManagerHelpers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushReportedInteractionsAsync@ContentDeliveryManagerHelpers@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long FlushReportedInteractionsAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlightingInfo@ContentDeliveryManagerHelpers@CloudExperienceHostAPI@@UEAAJPEAEPEAPEAUHSTRING__@@@Z
    virtual long GetFlightingInfo(unsigned char *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ContentDeliveryManagerHelpers@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ContentDeliveryManagerHelpers@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ContentDeliveryManagerHelpers@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ContentDeliveryManagerHelpers@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@ContentDeliveryManagerHelpers@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContentDeliveryManagerHelpers@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContentDeliveryManagerHelpers@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BusinessUsageIndicator@ContentDeliveryManagerHelpers@CloudExperienceHostAPI@@UEAAJPEAE@Z
    virtual long get_BusinessUsageIndicator(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDomainAccount@ContentDeliveryManagerHelpers@CloudExperienceHostAPI@@UEAAJPEAE@Z
    virtual long get_IsDomainAccount(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TailoredExperiencesEnabled@ContentDeliveryManagerHelpers@CloudExperienceHostAPI@@UEAAJPEAE@Z
    virtual long get_TailoredExperiencesEnabled(unsigned char *);
};
} // namespace CloudExperienceHostAPI
