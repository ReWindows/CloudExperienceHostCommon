#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 28 member(s).
namespace CloudExperienceHostAPI::Diagnostics {
class LogFileCollector {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LogFileCollector@Diagnostics@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFilesAsync@LogFileCollector@Diagnostics@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long CopyFilesAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteFilesAsync@LogFileCollector@Diagnostics@CloudExperienceHostAPI@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long DeleteFilesAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@LogFileCollector@Diagnostics@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@LogFileCollector@Diagnostics@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@LogFileCollector@Diagnostics@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@LogFileCollector@Diagnostics@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@LogFileCollector@Diagnostics@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LogFileCollector@Diagnostics@CloudExperienceHostAPI@@QEAA@XZ
    LogFileCollector();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LogFileCollector@Diagnostics@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterLogFileSearchPattern@LogFileCollector@Diagnostics@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@@Z
    virtual long RegisterLogFileSearchPattern(HSTRING__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LogFileCollector@Diagnostics@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@LogFileCollector@Diagnostics@CloudExperienceHostAPI@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LogFileCollector@Diagnostics@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~LogFileCollector();
};
} // namespace CloudExperienceHostAPI::Diagnostics
