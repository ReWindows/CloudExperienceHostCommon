#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 24 member(s).
namespace CloudExperienceHostAPI {
class GeographicRegion {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GeographicRegion@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GeographicRegion@CloudExperienceHostAPI@@QEAA@XZ
    GeographicRegion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAll@GeographicRegion@CloudExperienceHostAPI@@UEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long GetAll(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GeographicRegion@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GeographicRegion@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GeographicRegion@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@GeographicRegion@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@GeographicRegion@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GeographicRegion@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GeographicRegion@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumRegionsProc@GeographicRegion@CloudExperienceHostAPI@@CAHPEAG_J@Z
    static int EnumRegionsProc(unsigned short *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddRegion@GeographicRegion@CloudExperienceHostAPI@@CAXPEAUIJsonValueStatics@Json@Data@Windows@@PEAU?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@6@PEBG2@Z
    static void _AddRegion(::Windows::Data::Json::IJsonValueStatics *, WindissectOpaque *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddStringValue@GeographicRegion@CloudExperienceHostAPI@@CAXPEAUIJsonValueStatics@Json@Data@Windows@@PEAUIJsonObject@456@PEBG2@Z
    static void _AddStringValue(::Windows::Data::Json::IJsonValueStatics *, ::Windows::Data::Json::IJsonObject *, unsigned short const *, unsigned short const *);
};
} // namespace CloudExperienceHostAPI
