#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 45 member(s).
class WARBIRD_DELAY_LOAD {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BitBlt@WARBIRD_DELAY_LOAD@@YAHPEAUHDC__@@HHHH0HHK@Z
    int BitBlt(HDC__*, int, int, int, int, HDC__*, int, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompatibleBitmap@WARBIRD_DELAY_LOAD@@YAPEAUHBITMAP__@@PEAUHDC__@@HH@Z
    HBITMAP__* CreateCompatibleBitmap(HDC__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompatibleDC@WARBIRD_DELAY_LOAD@@YAPEAUHDC__@@PEAU2@@Z
    HDC__* CreateCompatibleDC(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDIBSection@WARBIRD_DELAY_LOAD@@YAPEAUHBITMAP__@@PEAUHDC__@@PEBUtagBITMAPINFO@@IPEAPEAXPEAXK@Z
    HBITMAP__* CreateDIBSection(HDC__*, tagBITMAPINFO const *, unsigned int, void * *, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFontIndirectW@WARBIRD_DELAY_LOAD@@YAPEAUHFONT__@@PEBUtagLOGFONTW@@@Z
    HFONT__* CreateFontIndirectW(tagLOGFONTW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSolidBrush@WARBIRD_DELAY_LOAD@@YAPEAUHBRUSH__@@K@Z
    HBRUSH__* CreateSolidBrush(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteDC@WARBIRD_DELAY_LOAD@@YAHPEAUHDC__@@@Z
    int DeleteDC(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteObject@WARBIRD_DELAY_LOAD@@YAHPEAX@Z
    int DeleteObject(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawTextExW@WARBIRD_DELAY_LOAD@@YAHPEAUHDC__@@PEAGHPEAUtagRECT@@IPEAUtagDRAWTEXTPARAMS@@@Z
    int DrawTextExW(HDC__*, unsigned short *, int, tagRECT *, unsigned int, tagDRAWTEXTPARAMS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumDisplaySettingsW@WARBIRD_DELAY_LOAD@@YAHPEBGKPEAU_devicemodeW@@@Z
    int EnumDisplaySettingsW(unsigned short const *, unsigned long, _devicemodeW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRect@WARBIRD_DELAY_LOAD@@YAHPEAUHDC__@@PEBUtagRECT@@PEAUHBRUSH__@@@Z
    int FillRect(HDC__*, tagRECT const *, HBRUSH__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GdiAlphaBlend@WARBIRD_DELAY_LOAD@@YAHPEAUHDC__@@HHHH0HHHHU_BLENDFUNCTION@@@Z
    int GdiAlphaBlend(HDC__*, int, int, int, int, HDC__*, int, int, int, int, _BLENDFUNCTION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GdiGradientFill@WARBIRD_DELAY_LOAD@@YAHPEAUHDC__@@PEAU_TRIVERTEX@@KPEAXKK@Z
    int GdiGradientFill(HDC__*, _TRIVERTEX *, unsigned long, void *, unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentObject@WARBIRD_DELAY_LOAD@@YAPEAXPEAUHDC__@@I@Z
    void * GetCurrentObject(HDC__*, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDC@WARBIRD_DELAY_LOAD@@YAPEAUHDC__@@PEAUHWND__@@@Z
    HDC__* GetDC(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCEx@WARBIRD_DELAY_LOAD@@YAPEAUHDC__@@PEAUHWND__@@PEAUHRGN__@@K@Z
    HDC__* GetDCEx(HWND__*, HRGN__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDIBits@WARBIRD_DELAY_LOAD@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIPEAXPEAUtagBITMAPINFO@@I@Z
    int GetDIBits(HDC__*, HBITMAP__*, unsigned int, unsigned int, void *, tagBITMAPINFO *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopWindow@WARBIRD_DELAY_LOAD@@YAPEAUHWND__@@XZ
    HWND__* GetDesktopWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceCaps@WARBIRD_DELAY_LOAD@@YAHPEAUHDC__@@H@Z
    int GetDeviceCaps(HDC__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocaleInfoEx@WARBIRD_DELAY_LOAD@@YAHPEBGKPEAGH@Z
    int GetLocaleInfoEx(unsigned short const *, unsigned long, unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorInfoW@WARBIRD_DELAY_LOAD@@YAHPEAUHMONITOR__@@PEAUtagMONITORINFO@@@Z
    int GetMonitorInfoW(HMONITOR__*, tagMONITORINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectW@WARBIRD_DELAY_LOAD@@YAHPEAXH0@Z
    int GetObjectW(void *, int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessWindowStation@WARBIRD_DELAY_LOAD@@YAPEAUHWINSTA__@@XZ
    HWINSTA__* GetProcessWindowStation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStockObject@WARBIRD_DELAY_LOAD@@YAPEAXH@Z
    void * GetStockObject(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSysColor@WARBIRD_DELAY_LOAD@@YAKH@Z
    unsigned long GetSysColor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemMetrics@WARBIRD_DELAY_LOAD@@YAHH@Z
    int GetSystemMetrics(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadDesktop@WARBIRD_DELAY_LOAD@@YAPEAUHDESK__@@K@Z
    HDESK__* GetThreadDesktop(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTickCount64@WARBIRD_DELAY_LOAD@@YA_KXZ
    uint64_t GetTickCount64();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserObjectInformationW@WARBIRD_DELAY_LOAD@@YAHPEAXH0KPEAK@Z
    int GetUserObjectInformationW(void *, int, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserPreferredUILanguages@WARBIRD_DELAY_LOAD@@YAHKPEAKPEAG0@Z
    int GetUserPreferredUILanguages(unsigned long, unsigned long *, unsigned short *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRect@WARBIRD_DELAY_LOAD@@YAHPEAUHWND__@@PEBUtagRECT@@H@Z
    int InvalidateRect(HWND__*, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LCIDToLocaleName@WARBIRD_DELAY_LOAD@@YAHKPEAGHK@Z
    int LCIDToLocaleName(unsigned long, unsigned short *, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocaleNameToLCID@WARBIRD_DELAY_LOAD@@YAKPEBGK@Z
    unsigned long LocaleNameToLCID(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogicalToPhysicalPointForPerMonitorDPI@WARBIRD_DELAY_LOAD@@YAHPEAUHWND__@@PEAUtagPOINT@@@Z
    int LogicalToPhysicalPointForPerMonitorDPI(HWND__*, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorFromWindow@WARBIRD_DELAY_LOAD@@YAPEAUHMONITOR__@@PEAUHWND__@@K@Z
    HMONITOR__* MonitorFromWindow(HWND__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MulDiv@WARBIRD_DELAY_LOAD@@YAHHHH@Z
    int MulDiv(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultiByteToWideChar@WARBIRD_DELAY_LOAD@@YAHIKPEBDHPEAGH@Z
    int MultiByteToWideChar(unsigned int, unsigned long, char const *, int, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OffsetRect@WARBIRD_DELAY_LOAD@@YAHPEAUtagRECT@@HH@Z
    int OffsetRect(tagRECT *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawWindow@WARBIRD_DELAY_LOAD@@YAHPEAUHWND__@@PEBUtagRECT@@PEAUHRGN__@@I@Z
    int RedrawWindow(HWND__*, tagRECT const *, HRGN__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDC@WARBIRD_DELAY_LOAD@@YAHPEAUHWND__@@PEAUHDC__@@@Z
    int ReleaseDC(HWND__*, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectObject@WARBIRD_DELAY_LOAD@@YAPEAXPEAUHDC__@@PEAX@Z
    void * SelectObject(HDC__*, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBkMode@WARBIRD_DELAY_LOAD@@YAHPEAUHDC__@@H@Z
    int SetBkMode(HDC__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextColor@WARBIRD_DELAY_LOAD@@YAKPEAUHDC__@@K@Z
    unsigned long SetTextColor(HDC__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SleepEx@WARBIRD_DELAY_LOAD@@YAKKH@Z
    unsigned long SleepEx(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemParametersInfoW@WARBIRD_DELAY_LOAD@@YAHIIPEAXI@Z
    int SystemParametersInfoW(unsigned int, unsigned int, void *, unsigned int);
};
