#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 27 member(s).
namespace CloudExperienceHostAPI::Speech {
class SpeechSynthesis {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SpeechSynthesis@Speech@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SpeechSynthesis@Speech@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SpeechSynthesis@Speech@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SpeechSynthesis@Speech@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@SpeechSynthesis@Speech@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@SpeechSynthesis@Speech@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SpeechSynthesis@Speech@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SpeechSynthesis@Speech@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SpeechSynthesis@Speech@CloudExperienceHostAPI@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpeakAsync@SpeechSynthesis@Speech@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@EEPEAPEAU?$IAsyncOperationWithProgress@_NN@Foundation@Windows@@@Z
    virtual long SpeakAsync(HSTRING__*, unsigned char, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpeakAsyncOverloadWithoutVoiceOver@SpeechSynthesis@Speech@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperationWithProgress@_NN@Foundation@Windows@@@Z
    virtual long SpeakAsyncOverloadWithoutVoiceOver(HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SpeechSynthesis@Speech@CloudExperienceHostAPI@@QEAA@XZ
    SpeechSynthesis();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SpeechSynthesis@Speech@CloudExperienceHostAPI@@UEAAJXZ
    virtual long Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SpeechSynthesis@Speech@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~SpeechSynthesis();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnControllerStateChange@SpeechSynthesis@Speech@CloudExperienceHostAPI@@AEAAJAEBW4SpeechControllerState@23@@Z
    long OnControllerStateChange(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopVoice@SpeechSynthesis@Speech@CloudExperienceHostAPI@@AEAAJXZ
    long StopVoice();
};
} // namespace CloudExperienceHostAPI::Speech
