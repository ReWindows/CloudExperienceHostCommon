#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 41 member(s).
namespace CloudExperienceHostAPI::UserColorPreference {
class UserPreferredColors {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorFromUserPreference@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJIPEAUColor@UI@Windows@@@Z
    virtual long GetColorFromUserPreference(unsigned int, ::Windows::UI::Color *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ControlDarkLinkHover@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ControlDarkLinkHover(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ControlDarkLinkPressed@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ControlDarkLinkPressed(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ControlDarkLinkRest@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ControlDarkLinkRest(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ControlDarkSelectHighlightSelected@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ControlDarkSelectHighlightSelected(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ControlDarkSelectHighlightSelectedHover@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ControlDarkSelectHighlightSelectedHover(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ControlDarkSelectPopupBackgroundSelected@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ControlDarkSelectPopupBackgroundSelected(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ControlDefaultDarkButtonBackgroundHover@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ControlDefaultDarkButtonBackgroundHover(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ControlDefaultDarkButtonBackgroundRest@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ControlDefaultDarkButtonBackgroundRest(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SaturatedBackground@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_SaturatedBackground(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SaturatedInlineErrorText@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_SaturatedInlineErrorText(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SaturatedSecondaryText@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_SaturatedSecondaryText(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SaturatedSelectionBackground@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_SaturatedSelectionBackground(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThemeAccent@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ThemeAccent(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThemeAccentDark1@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ThemeAccentDark1(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThemeAccentDark2@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ThemeAccentDark2(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThemeAccentDark3@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ThemeAccentDark3(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThemeAccentLight1@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ThemeAccentLight1(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThemeAccentLight2@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ThemeAccentLight2(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThemeAccentLight3@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ThemeAccentLight3(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThemeTextApplication@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ThemeTextApplication(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThemeTextSystem@UserPreferredColors@UserColorPreference@CloudExperienceHostAPI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_ThemeTextSystem(::Windows::UI::Color *);
};
} // namespace CloudExperienceHostAPI::UserColorPreference
