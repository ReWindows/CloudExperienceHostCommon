#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 25 member(s).
namespace CloudExperienceHostAPI::Speech {
class SpeechRecognitionKnownCommands {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SpeechRecognitionKnownCommands@Speech@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SpeechRecognitionKnownCommands@Speech@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SpeechRecognitionKnownCommands@Speech@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SpeechRecognitionKnownCommands@Speech@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@SpeechRecognitionKnownCommands@Speech@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@SpeechRecognitionKnownCommands@Speech@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SpeechRecognitionKnownCommands@Speech@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SpeechRecognitionKnownCommands@Speech@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Back@SpeechRecognitionKnownCommands@Speech@CloudExperienceHostAPI@@UEAAJPEAPEAUISpeechRecognitionConstraint@SpeechRecognition@Media@Windows@@@Z
    virtual long get_Back(::Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Next@SpeechRecognitionKnownCommands@Speech@CloudExperienceHostAPI@@UEAAJPEAPEAUISpeechRecognitionConstraint@SpeechRecognition@Media@Windows@@@Z
    virtual long get_Next(::Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_No@SpeechRecognitionKnownCommands@Speech@CloudExperienceHostAPI@@UEAAJPEAPEAUISpeechRecognitionConstraint@SpeechRecognition@Media@Windows@@@Z
    virtual long get_No(::Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Yes@SpeechRecognitionKnownCommands@Speech@CloudExperienceHostAPI@@UEAAJPEAPEAUISpeechRecognitionConstraint@SpeechRecognition@Media@Windows@@@Z
    virtual long get_Yes(::Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKnownListConstraint@SpeechRecognitionKnownCommands@Speech@CloudExperienceHostAPI@@AEAAJPEBGIPEAPEAUISpeechRecognitionConstraint@SpeechRecognition@Media@Windows@@@Z
    long GetKnownListConstraint(unsigned short const *, unsigned int, ::Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadLocalizedString@SpeechRecognitionKnownCommands@Speech@CloudExperienceHostAPI@@AEAAJPEAUHINSTANCE__@@HGPEAPEAG@Z
    long LoadLocalizedString(HINSTANCE__*, int, unsigned short, unsigned short * *);
};
} // namespace CloudExperienceHostAPI::Speech
