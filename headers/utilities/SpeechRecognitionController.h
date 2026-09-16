#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 27 member(s).
namespace CloudExperienceHostAPI::Speech {
class SpeechRecognitionController {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SpeechRecognitionController@Speech@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableAsync@SpeechRecognitionController@Speech@CloudExperienceHostAPI@@UEAAJEPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long EnableAsync(unsigned char, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SpeechRecognitionController@Speech@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SpeechRecognitionController@Speech@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SpeechRecognitionController@Speech@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@SpeechRecognitionController@Speech@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@SpeechRecognitionController@Speech@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSpeechAllowedByPolicy@SpeechRecognitionController@Speech@CloudExperienceHostAPI@@UEAAJPEAE@Z
    virtual long IsSpeechAllowedByPolicy(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SpeechRecognitionController@Speech@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SpeechRecognitionController@Speech@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SpeechRecognitionController@Speech@CloudExperienceHostAPI@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SpeechRecognitionController@Speech@CloudExperienceHostAPI@@QEAA@XZ
    SpeechRecognitionController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_StateChanged@SpeechRecognitionController@Speech@CloudExperienceHostAPI@@UEAAJPEAUISpeechControllerEventHandler@23@PEAUEventRegistrationToken@@@Z
    virtual long add_StateChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_StateChanged@SpeechRecognitionController@Speech@CloudExperienceHostAPI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_StateChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SpeechRecognitionController@Speech@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~SpeechRecognitionController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateChanged@SpeechRecognitionController@Speech@CloudExperienceHostAPI@@AEAAJPEBUSpeechControllerStateInfo@23@@Z
    long OnStateChanged(WindissectOpaque const *);
};
} // namespace CloudExperienceHostAPI::Speech
