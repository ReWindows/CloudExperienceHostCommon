#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 19 member(s).
namespace CloudExperienceHostAPI::ComponentUi {
class ComponentObjectModel {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComponentObjectModel@ComponentUi@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComponentObjectModel@ComponentUi@CloudExperienceHostAPI@@QEAA@XZ
    ComponentObjectModel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ComponentObjectModel@ComponentUi@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ComponentObjectModel@ComponentUi@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ComponentObjectModel@ComponentUi@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ComponentObjectModel@ComponentUi@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ComponentObjectModel@ComponentUi@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvideViewForDispatcher@ComponentObjectModel@ComponentUi@CloudExperienceHostAPI@@UEAAJPEAUICoreApplicationView@Core@ApplicationModel@Windows@@@Z
    virtual long ProvideViewForDispatcher(::Windows::ApplicationModel::Core::ICoreApplicationView *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ComponentObjectModel@ComponentUi@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComponentObjectModel@ComponentUi@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComponentObjectModel@ComponentUi@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~ComponentObjectModel();
};
} // namespace CloudExperienceHostAPI::ComponentUi
