#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 27 member(s).
namespace CloudExperienceHostAPI::Speech {
class SpeechRecognition {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SpeechRecognition@Speech@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SpeechRecognition@Speech@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SpeechRecognition@Speech@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SpeechRecognition@Speech@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@SpeechRecognition@Speech@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@SpeechRecognition@Speech@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenForCommandsAsync@SpeechRecognition@Speech@CloudExperienceHostAPI@@UEAAJPEAU?$IIterable@PEAUISpeechRecognitionConstraint@SpeechRecognition@Media@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVSpeechRecognitionResult@SpeechRecognition@Media@Windows@@@67@@Z
    virtual long ListenForCommandsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnControllerStateChange@SpeechRecognition@Speech@CloudExperienceHostAPI@@QEAAJAEBW4SpeechControllerState@23@@Z
    long OnControllerStateChange(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromptForCommandsAsync@SpeechRecognition@Speech@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAU?$IIterable@PEAUISpeechRecognitionConstraint@SpeechRecognition@Media@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVSpeechRecognitionResult@SpeechRecognition@Media@Windows@@@78@@Z
    virtual long PromptForCommandsAsync(HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SpeechRecognition@Speech@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SpeechRecognition@Speech@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SpeechRecognition@Speech@CloudExperienceHostAPI@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SpeechRecognition@Speech@CloudExperienceHostAPI@@QEAA@XZ
    SpeechRecognition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SpeechRecognition@Speech@CloudExperienceHostAPI@@UEAAJXZ
    virtual long Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SpeechRecognition@Speech@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~SpeechRecognition();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayCortanaSound@SpeechRecognition@Speech@CloudExperienceHostAPI@@CAXI@Z
    static void PlayCortanaSound(unsigned int);
};
} // namespace CloudExperienceHostAPI::Speech
