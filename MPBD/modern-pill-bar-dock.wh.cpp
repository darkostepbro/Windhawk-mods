// ==WindhawkMod==
// @id              modern-pill-bar-dock
// @name            MPBD - Modern Pill Bar & Dock
// @description     Modern desktop status bar, app dock, and live widget islands for Windows 10 & 11 featuring Lucide vector icons, 6 themes, DirectWrite typography, and ultra-low RAM usage.
// @version         1.0.0
// @author          darkostepbro
// @github          https://github.com/darkostepbro
// @include         explorer.exe
// @compilerOptions -lgdi32 -luser32 -ladvapi32 -lgdiplus -ld2d1 -ldwrite -lshell32 -ldwmapi -lshlwapi -lole32 -luuid -liphlpapi
// ==/WindhawkMod==

// ==WindhawkModReadme==
/*
# MPBD - Modern Pill Bar & Dock

Transforms your Windows desktop with a lightweight, native C++ **Modern Pill Bar & Live Widget Dock** — inspired by modern modular status bars and floating docks, built with **zero WebView2 overhead**, **Lucide vector icons**, **DirectWrite smooth typography**, and unified themes matching **MPRD**.

## Highlights
- **3 Layout Styles:**
  1. **Split Pill Islands** — Independent floating Left (Start, MPRD Run, Active App), Center (Running Apps Dock), and Right (Live Widgets) islands with click-through desktop gaps.
  2. **Single Floating Dock** — Unified floating capsule bar with subtle screen margin.
  3. **Edge-to-Edge Seamless** — Full-width flush desktop status bar.
- **6 Unified Themes:** **MPBD Blur**, **MPBD Legacy**, **M-11 Compact**, **Liquid Glass**, **Midnight Aurora**, and **Daylight Frost**.
- **Pure Lucide Vector Icons:** Crisp 24x24 anti-aliased vector strokes rendered natively in C++ (`0 KB` external icon files).
- **Live Interactive Widgets:**
  - **Start & Quick Run** (Clicking Search directly launches **MPRD** / Windows Run)
  - **Active Window Pill** (Live focused app icon & title)
  - **Running App Dock** (High-DPI 32-bit ARGB app icons, hover lens zoom, active indicator dot, click to focus/minimize, middle-click to close)
  - **Media Controls** (Detects active music player track + Previous / Play-Pause / Next buttons)
  - **CPU & RAM Monitor** (Real-time lightweight kernel telemetry)
  - **Network Speed** (Live Download / Upload throughput)
  - **Interactive Volume** (Scroll mouse wheel to adjust volume, click to mute/unmute, right-click for Sound settings)
  - **Battery & Power** (Live percentage & charging indicator)
  - **Clock & Calendar** (Click to open Windows Notification & Calendar center)
- **Drag-to-Reorder Widgets:** Hold **`Alt + Left-Drag`** on any right-side widget to customize its order (saved automatically).
- **Smart Desktop Integration:** Reserves maximized window work-area (`SHAppBarMessage`), auto-hides in fullscreen games/videos, and optionally hides/restores the native Windows Taskbar.

---

# MPBD - Modern Pill Bar & Dock (Bahasa Indonesia)

Menghadirkan **Status Bar, App Dock, & Live Widget Islands** modern yang super ringan berbasis C++ native (tanpa WebView2/Chromium yang boros RAM), menggunakan **Lucide Vector Icons**, **DirectWrite anti-pecah**, dan ekosistem tema yang seragam dengan **MPRD**.

## Fitur Utama
- **3 Gaya Layout:** **Split Pill Islands** (3 kapsul terpisah), **Single Floating Dock** (1 kapsul melayang), dan **Edge-to-Edge Seamless** (bar penuh ujung ke ujung).
- **6 Pilihan Tema:** **MPBD Blur**, **MPBD Legacy**, **M-11 Compact**, **Liquid Glass**, **Midnight Aurora**, dan **Daylight Frost**.
- **Widget Interaktif Real-Time:** Start Menu, tombol cepat **MPRD Run**, judul jendela aktif, App Dock (klik kiri fokus/minimize, klik tengah tutup), kontrol musik, monitor CPU & RAM, kecepatan internet, Volume (scroll roda mouse untuk atur suara, klik untuk mute), Baterai, serta Jam & Kalender.
- **Geser Urutan Widget:** Tahan **`Alt + Drag Kiri`** pada widget di sisi kanan untuk mengatur urutan sesuai selera (tersimpan otomatis).
- **Integrasi Cerdas:** Mengunci batas jendela maximize (`SHAppBarMessage`), otomatis sembunyi saat main game fullscreen, dan opsi sembunyikan Taskbar bawaan Windows dengan aman.

---

## Credits
Created & maintained by **[darkostepbro](https://github.com/darkostepbro)** (`github.com/darkostepbro`).
*/
// ==/WindhawkModReadme==

// ==WindhawkModSettings==
/*
- theme: "mpbdBlur"
  $name: "Theme"
  $description: "Choose the visual theme for MPBD - Modern Pill Bar & Dock."
  $options:
    - "mpbdBlur": "MPBD Blur"
    - "mpbdLegacy": "MPBD Legacy"
    - "m11Compact": "M-11 Compact"
    - "liquidGlass": "Liquid Glass"
    - "midnightAurora": "Midnight Aurora"
    - "daylightFrost": "Daylight Frost (Light)"
- layoutStyle: "splitIslands"
  $name: "Bar Layout Style"
  $description: "Choose between 3 floating islands, 1 floating dock, or a full-width edge bar."
  $options:
    - "splitIslands": "Split Pill Islands (Left / Center / Right)"
    - "singleFloating": "Single Floating Dock"
    - "edgeSeamless": "Edge-to-Edge Seamless Bar"
- position: "top"
  $name: "Screen Edge Position"
  $description: "Dock MPBD along the Top or Bottom edge of the primary monitor."
  $options:
    - "top": "Top Edge"
    - "bottom": "Bottom Edge"
- transparentBackground: "40"
  $name: "Transparent Background"
  $description: "Adjust background transparency intensity (10% = subtle transparency, 100% = maximum transparency)."
  $options:
    - "10": "10%"
    - "20": "20%"
    - "30": "30%"
    - "40": "40%"
    - "50": "50%"
    - "60": "60%"
    - "70": "70%"
    - "80": "80%"
    - "90": "90%"
    - "100": "100%"
- roundedWindow: 38
  $name: "Rounded Bar (%)"
  $description: "Custom border radius for bar & islands (10 to 50; minimum 10%)."
- barWindow: "0x40"
  $name: "Bar Window (px)"
  $description: "Format: WIDTHxHEIGHT in px (use 0 width for automatic full monitor width, e.g. 0x40, 0x44, or 1440x42). Height: 32-64."
- customFont: "Google Sans"
  $name: "Custom with your Favorite Font"
  $description: "Write any installed font family name (default: Google Sans)."
- use24HourClock: true
  $name: "24-Hour Clock Format"
  $description: "Display time in 24-hour format (e.g. 16:30) instead of 12-hour AM/PM."
- reserveWorkArea: true
  $name: "Reserve Maximized Work Area"
  $description: "Prevents maximized windows from overlapping MPBD."
- hideNativeTaskbar: false
  $name: "Auto-Hide Native Windows Taskbar"
  $description: "Hides the default Windows taskbar while MPBD is active and restores it automatically when disabled."
- hideInFullscreen: true
  $name: "Auto-Hide in Fullscreen Apps & Games"
  $description: "Automatically hides MPBD when a fullscreen game or video is active."
- showActiveWindow: true
  $name: "Widget: Active Window Title"
  $description: "Show focused application icon and title on the left section."
- showAppDock: true
  $name: "Widget: Running Apps Dock"
  $description: "Show running applications dock in the center section."
- showMediaWidget: true
  $name: "Widget: Media Controls"
  $description: "Show active music player title and playback controls."
- showCpuRam: true
  $name: "Widget: CPU & RAM Usage"
  $description: "Show live CPU and memory usage pills."
- showNetworkSpeed: true
  $name: "Widget: Network Speed"
  $description: "Show live download/upload network throughput."
- showVolumeWidget: true
  $name: "Widget: Volume Control"
  $description: "Show live system volume (scroll wheel to adjust, click to mute)."
- showBatteryWidget: true
  $name: "Widget: Battery Status"
  $description: "Show battery level when a battery is detected."
*/
// ==/WindhawkModSettings==

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <cwctype>
#include <map>
#include <memory>
#include <mutex>
#include <string>
#include <vector>

using std::max;
using std::min;

#include <windows.h>
#include <windowsx.h>
#include <d2d1.h>
#include <dwmapi.h>
#include <dwrite.h>
#include <endpointvolume.h>
#include <gdiplus.h>
#include <iphlpapi.h>
#include <mmdeviceapi.h>
#include <shellapi.h>
#include <shlwapi.h>

namespace {

// Settings
enum class ThemeMode {
    MpbdBlur = 0,
    MpbdLegacy = 1,
    M11Compact = 2,
    LiquidGlass = 3,
    MidnightAurora = 4,
    DaylightFrost = 5,
};

enum class LayoutStyle {
    SplitIslands = 0,
    SingleFloating = 1,
    EdgeSeamless = 2,
};

enum class BarEdge {
    Top = 0,
    Bottom = 1,
};

enum class WidgetId : int {
    Media = 0,
    Cpu = 1,
    Ram = 2,
    Network = 3,
    Volume = 4,
    Battery = 5,
    Clock = 6,
};

struct ModSettings {
    ThemeMode theme = ThemeMode::MpbdBlur;
    LayoutStyle layout = LayoutStyle::SplitIslands;
    BarEdge edge = BarEdge::Top;
    int transparentBackground = 40;
    int roundedWindow = 38;
    int customWidth = 0;
    int barHeight = 40;
    std::wstring customFont = L"Google Sans";
    bool use24HourClock = true;
    bool reserveWorkArea = true;
    bool hideNativeTaskbar = false;
    bool hideInFullscreen = true;
    bool showActiveWindow = true;
    bool showAppDock = true;
    bool showMediaWidget = true;
    bool showCpuRam = true;
    bool showNetworkSpeed = true;
    bool showVolumeWidget = true;
    bool showBatteryWidget = true;
};

ModSettings g_settings;
std::mutex g_settingsMutex;
std::atomic<HWND> g_barHwnd{nullptr};
std::atomic<bool> g_stopRequested{false};
HANDLE g_barThread = nullptr;

constexpr UINT kMsgReloadSettings = WM_APP + 201;
constexpr UINT kMsgAppBarCallback = WM_APP + 202;

std::wstring TrimW(const std::wstring& str) {
    size_t s = str.find_first_not_of(L" \t\r\n");
    if (s == std::wstring::npos) return L"";
    size_t e = str.find_last_not_of(L" \t\r\n");
    return str.substr(s, e - s + 1);
}

std::wstring ToLowerW(const std::wstring& str) {
    std::wstring r = str;
    for (wchar_t& c : r) c = static_cast<wchar_t>(towlower(c));
    return r;
}

void ParseBarWindowSize(const std::wstring& raw, int& outW, int& outH) {
    outW = 0;
    outH = 40;
    std::wstring s = TrimW(raw);
    if (s.empty()) return;

    std::vector<int> nums;
    int cur = 0;
    bool inNum = false;
    for (wchar_t c : s) {
        if (c >= L'0' && c <= L'9') {
            cur = cur * 10 + (c - L'0');
            inNum = true;
        } else if (inNum) {
            nums.push_back(cur);
            cur = 0;
            inNum = false;
        }
    }
    if (inNum) nums.push_back(cur);

    if (nums.size() >= 2) {
        outW = nums[0];
        outH = nums[1];
    } else if (nums.size() == 1) {
        outH = nums[0];
    }

    if (outW > 0 && outW < 640) outW = 640;
    if (outH < 32) outH = 32;
    if (outH > 64) outH = 64;
}

void LoadSettings() {
    ModSettings s;

    PCWSTR themeStr = Wh_GetStringSetting(L"theme");
    if (themeStr) {
        if (wcscmp(themeStr, L"mpbdLegacy") == 0) s.theme = ThemeMode::MpbdLegacy;
        else if (wcscmp(themeStr, L"m11Compact") == 0) s.theme = ThemeMode::M11Compact;
        else if (wcscmp(themeStr, L"liquidGlass") == 0) s.theme = ThemeMode::LiquidGlass;
        else if (wcscmp(themeStr, L"midnightAurora") == 0) s.theme = ThemeMode::MidnightAurora;
        else if (wcscmp(themeStr, L"daylightFrost") == 0) s.theme = ThemeMode::DaylightFrost;
        else s.theme = ThemeMode::MpbdBlur;
        Wh_FreeStringSetting(themeStr);
    }

    PCWSTR layoutStr = Wh_GetStringSetting(L"layoutStyle");
    if (layoutStr) {
        if (wcscmp(layoutStr, L"singleFloating") == 0) s.layout = LayoutStyle::SingleFloating;
        else if (wcscmp(layoutStr, L"edgeSeamless") == 0) s.layout = LayoutStyle::EdgeSeamless;
        else s.layout = LayoutStyle::SplitIslands;
        Wh_FreeStringSetting(layoutStr);
    }

    PCWSTR posStr = Wh_GetStringSetting(L"position");
    if (posStr) {
        s.edge = (wcscmp(posStr, L"bottom") == 0) ? BarEdge::Bottom : BarEdge::Top;
        Wh_FreeStringSetting(posStr);
    }

    PCWSTR transpStr = Wh_GetStringSetting(L"transparentBackground");
    if (transpStr) {
        int val = _wtoi(transpStr);
        if (val < 10) val = 10;
        if (val > 100) val = 100;
        s.transparentBackground = val;
        Wh_FreeStringSetting(transpStr);
    }

    int rw = Wh_GetIntSetting(L"roundedWindow");
    if (rw < 10) rw = 10;
    if (rw > 50) rw = 50;
    s.roundedWindow = rw;

    PCWSTR barWinStr = Wh_GetStringSetting(L"barWindow");
    if (barWinStr) {
        ParseBarWindowSize(barWinStr, s.customWidth, s.barHeight);
        Wh_FreeStringSetting(barWinStr);
    }

    PCWSTR fontStr = Wh_GetStringSetting(L"customFont");
    if (fontStr) {
        std::wstring trimmed = TrimW(fontStr);
        if (!trimmed.empty()) s.customFont = trimmed;
        Wh_FreeStringSetting(fontStr);
    }

    s.use24HourClock = Wh_GetIntSetting(L"use24HourClock") != 0;
    s.reserveWorkArea = Wh_GetIntSetting(L"reserveWorkArea") != 0;
    s.hideNativeTaskbar = Wh_GetIntSetting(L"hideNativeTaskbar") != 0;
    s.hideInFullscreen = Wh_GetIntSetting(L"hideInFullscreen") != 0;
    s.showActiveWindow = Wh_GetIntSetting(L"showActiveWindow") != 0;
    s.showAppDock = Wh_GetIntSetting(L"showAppDock") != 0;
    s.showMediaWidget = Wh_GetIntSetting(L"showMediaWidget") != 0;
    s.showCpuRam = Wh_GetIntSetting(L"showCpuRam") != 0;
    s.showNetworkSpeed = Wh_GetIntSetting(L"showNetworkSpeed") != 0;
    s.showVolumeWidget = Wh_GetIntSetting(L"showVolumeWidget") != 0;
    s.showBatteryWidget = Wh_GetIntSetting(L"showBatteryWidget") != 0;

    std::lock_guard<std::mutex> lock(g_settingsMutex);
    g_settings = s;
}

ModSettings GetSettingsSnapshot() {
    std::lock_guard<std::mutex> lock(g_settingsMutex);
    return g_settings;
}

template <typename T>
void SafeRelease(T*& ptr) {
    if (ptr) {
        ptr->Release();
        ptr = nullptr;
    }
}

// ============================================================================
// Widget Order Persistence (HKCU\Software\DarkoStepBro\MPBD)
// ============================================================================
std::vector<WidgetId> LoadWidgetOrder() {
    std::vector<WidgetId> def = {
        WidgetId::Media, WidgetId::Cpu, WidgetId::Ram,
        WidgetId::Network, WidgetId::Volume, WidgetId::Battery, WidgetId::Clock
    };
    HKEY hKey = nullptr;
    if (RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\DarkoStepBro\\MPBD", 0, KEY_READ, &hKey) != ERROR_SUCCESS) {
        return def;
    }
    wchar_t buf[128] = {};
    DWORD sz = sizeof(buf);
    DWORD type = 0;
    std::vector<WidgetId> parsed;
    if (RegQueryValueExW(hKey, L"WidgetOrder", nullptr, &type, reinterpret_cast<LPBYTE>(buf), &sz) == ERROR_SUCCESS &&
        type == REG_SZ) {
        for (size_t i = 0; buf[i] != L'\0'; ++i) {
            if (buf[i] >= L'0' && buf[i] <= L'6') {
                WidgetId id = static_cast<WidgetId>(buf[i] - L'0');
                if (std::find(parsed.begin(), parsed.end(), id) == parsed.end()) {
                    parsed.push_back(id);
                }
            }
        }
    }
    RegCloseKey(hKey);
    for (WidgetId id : def) {
        if (std::find(parsed.begin(), parsed.end(), id) == parsed.end()) {
            parsed.push_back(id);
        }
    }
    return parsed;
}

void SaveWidgetOrder(const std::vector<WidgetId>& order) {
    HKEY hKey = nullptr;
    if (RegCreateKeyExW(HKEY_CURRENT_USER, L"Software\\DarkoStepBro\\MPBD", 0, nullptr, 0,
                        KEY_WRITE, nullptr, &hKey, nullptr) != ERROR_SUCCESS) {
        return;
    }
    std::wstring s;
    for (size_t i = 0; i < order.size(); ++i) {
        if (i > 0) s.push_back(L',');
        s.push_back(static_cast<wchar_t>(L'0' + static_cast<int>(order[i])));
    }
    RegSetValueExW(hKey, L"WidgetOrder", 0, REG_SZ,
                   reinterpret_cast<const BYTE*>(s.c_str()),
                   static_cast<DWORD>((s.size() + 1) * sizeof(wchar_t)));
    RegCloseKey(hKey);
}

// ============================================================================
// System Actions & CoreAudio Helper
// ============================================================================
void SendKeyChord(WORD vkMod, WORD vkKey) {
    INPUT inputs[4] = {};
    int n = 0;
    if (vkMod) {
        inputs[n].type = INPUT_KEYBOARD;
        inputs[n].ki.wVk = vkMod;
        ++n;
    }
    inputs[n].type = INPUT_KEYBOARD;
    inputs[n].ki.wVk = vkKey;
    ++n;
    inputs[n].type = INPUT_KEYBOARD;
    inputs[n].ki.wVk = vkKey;
    inputs[n].ki.dwFlags = KEYEVENTF_KEYUP;
    ++n;
    if (vkMod) {
        inputs[n].type = INPUT_KEYBOARD;
        inputs[n].ki.wVk = vkMod;
        inputs[n].ki.dwFlags = KEYEVENTF_KEYUP;
        ++n;
    }
    SendInput(static_cast<UINT>(n), inputs, sizeof(INPUT));
}

void TriggerStartMenu() {
    SendMessageW(GetDesktopWindow(), WM_SYSCOMMAND, SC_TASKLIST, 0);
}

DWORD WINAPI RunDialogWorkerThread(LPVOID param) {
    using RunFileDlgFn = void(WINAPI*)(HWND, HICON, LPCWSTR, LPCWSTR, LPCWSTR, UINT);
    auto runFn = reinterpret_cast<RunFileDlgFn>(param);
    runFn(nullptr, nullptr, nullptr, nullptr, nullptr, 0);
    return 0;
}

void TriggerRunDialog() {
    HMODULE hShell32 = GetModuleHandleW(L"shell32.dll");
    if (!hShell32) hShell32 = LoadLibraryW(L"shell32.dll");
    if (hShell32) {
        using RunFileDlgFn = void(WINAPI*)(HWND, HICON, LPCWSTR, LPCWSTR, LPCWSTR, UINT);
        auto fn = reinterpret_cast<RunFileDlgFn>(GetProcAddress(hShell32, MAKEINTRESOURCEA(61)));
        if (fn) {
            HANDLE hT = CreateThread(nullptr, 0, RunDialogWorkerThread, reinterpret_cast<LPVOID>(fn), 0, nullptr);
            if (hT) CloseHandle(hT);
            return;
        }
    }
    SendKeyChord(VK_LWIN, 'R');
}

void SetNativeTaskbarHidden(bool hide) {
    HWND hTray = FindWindowW(L"Shell_TrayWnd", nullptr);
    if (hTray) {
        ShowWindow(hTray, hide ? SW_HIDE : SW_SHOW);
    }
    HWND hSec = nullptr;
    while ((hSec = FindWindowExW(nullptr, hSec, L"Shell_SecondaryTrayWnd", nullptr)) != nullptr) {
        ShowWindow(hSec, hide ? SW_HIDE : SW_SHOW);
    }
}

struct AudioController {
    IAudioEndpointVolume* endpoint = nullptr;

    void Init() {
        if (endpoint) return;
        constexpr GUID kClsidMMDeviceEnum = {
            0xBCDE0395, 0xE52F, 0x467C, {0x8E, 0x3D, 0xC4, 0x57, 0x92, 0x91, 0x69, 0x2E}};
        constexpr GUID kIidMMDeviceEnum = {
            0xA95664D2, 0x9614, 0x4F35, {0xA7, 0x46, 0xDE, 0x8D, 0xB6, 0x36, 0x17, 0xE6}};
        constexpr GUID kIidAudioEndpointVol = {
            0x5CDF2C82, 0x841E, 0x4546, {0x97, 0x22, 0x0C, 0xF7, 0x40, 0x78, 0x22, 0x9A}};

        IMMDeviceEnumerator* enumerator = nullptr;
        if (FAILED(CoCreateInstance(kClsidMMDeviceEnum, nullptr, CLSCTX_INPROC_SERVER,
                                    kIidMMDeviceEnum, reinterpret_cast<void**>(&enumerator))) ||
            !enumerator) {
            return;
        }
        IMMDevice* device = nullptr;
        if (SUCCEEDED(enumerator->GetDefaultAudioEndpoint(eRender, eConsole, &device)) && device) {
            device->Activate(kIidAudioEndpointVol, CLSCTX_INPROC_SERVER, nullptr,
                             reinterpret_cast<void**>(&endpoint));
            device->Release();
        }
        enumerator->Release();
    }

    void Cleanup() {
        SafeRelease(endpoint);
    }

    void Query(int& outPercent, bool& outMuted) {
        Init();
        if (!endpoint) {
            outPercent = 0;
            outMuted = false;
            return;
        }
        float level = 0.0f;
        BOOL muted = FALSE;
        if (FAILED(endpoint->GetMasterVolumeLevelScalar(&level))) {
            Cleanup();
            return;
        }
        endpoint->GetMute(&muted);
        outPercent = static_cast<int>(std::round(level * 100.0f));
        outMuted = (muted != FALSE);
    }

    void StepVolume(float delta) {
        Init();
        if (!endpoint) return;
        float level = 0.0f;
        if (SUCCEEDED(endpoint->GetMasterVolumeLevelScalar(&level))) {
            level = (max)(0.0f, (min)(1.0f, level + delta));
            endpoint->SetMasterVolumeLevelScalar(level, nullptr);
            if (delta > 0.0f) endpoint->SetMute(FALSE, nullptr);
        }
    }

    void ToggleMute() {
        Init();
        if (!endpoint) return;
        BOOL muted = FALSE;
        if (SUCCEEDED(endpoint->GetMute(&muted))) {
            endpoint->SetMute(!muted, nullptr);
        }
    }
};

// ============================================================================
// High-DPI 32-Bit ARGB App Icon Extractor
// ============================================================================
std::shared_ptr<Gdiplus::Bitmap> ConvertHIconToBitmap(HICON hIcon) {
    if (!hIcon) return nullptr;
    ICONINFO ii = {};
    if (!GetIconInfo(hIcon, &ii)) return nullptr;

    BITMAP bm = {};
    if (!ii.hbmColor || GetObjectW(ii.hbmColor, sizeof(bm), &bm) == 0 || bm.bmWidth <= 0 || bm.bmHeight <= 0) {
        if (ii.hbmColor) DeleteObject(ii.hbmColor);
        if (ii.hbmMask) DeleteObject(ii.hbmMask);
        return nullptr;
    }

    int w = bm.bmWidth;
    int h = bm.bmHeight;
    BITMAPINFO bmi = {};
    bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bmi.bmiHeader.biWidth = w;
    bmi.bmiHeader.biHeight = -h;
    bmi.bmiHeader.biPlanes = 1;
    bmi.bmiHeader.biBitCount = 32;
    bmi.bmiHeader.biCompression = BI_RGB;

    std::vector<uint32_t> pixels(static_cast<size_t>(w) * h, 0);
    HDC hdc = GetDC(nullptr);
    GetDIBits(hdc, ii.hbmColor, 0, h, pixels.data(), &bmi, DIB_RGB_COLORS);
    ReleaseDC(nullptr, hdc);

    bool hasAlpha = false;
    for (uint32_t px : pixels) {
        if ((px >> 24) != 0) {
            hasAlpha = true;
            break;
        }
    }

    auto out = std::make_shared<Gdiplus::Bitmap>(w, h, PixelFormat32bppARGB);
    if (hasAlpha) {
        Gdiplus::BitmapData bd = {};
        Gdiplus::Rect rc(0, 0, w, h);
        if (out->LockBits(&rc, Gdiplus::ImageLockModeWrite, PixelFormat32bppARGB, &bd) == Gdiplus::Ok) {
            for (int y = 0; y < h; ++y) {
                memcpy(static_cast<BYTE*>(bd.Scan0) + y * bd.Stride,
                       pixels.data() + static_cast<size_t>(y) * w,
                       static_cast<size_t>(w) * 4);
            }
            out->UnlockBits(&bd);
        }
    } else {
        Gdiplus::Graphics g(out.get());
        HDC mem = g.GetHDC();
        DrawIconEx(mem, 0, 0, hIcon, w, h, 0, nullptr, DI_NORMAL);
        g.ReleaseHDC(mem);
    }

    if (ii.hbmColor) DeleteObject(ii.hbmColor);
    if (ii.hbmMask) DeleteObject(ii.hbmMask);
    return out;
}

std::shared_ptr<Gdiplus::Bitmap> ExtractWindowIcon(HWND hwnd) {
    HICON hIcon = nullptr;
    SendMessageTimeoutW(hwnd, WM_GETICON, ICON_BIG, 0, SMTO_ABORTIFHUNG, 60,
                        reinterpret_cast<PDWORD_PTR>(&hIcon));
    if (!hIcon) {
        hIcon = reinterpret_cast<HICON>(GetClassLongPtrW(hwnd, GCLP_HICON));
    }
    if (!hIcon) {
        SendMessageTimeoutW(hwnd, WM_GETICON, ICON_SMALL2, 0, SMTO_ABORTIFHUNG, 60,
                            reinterpret_cast<PDWORD_PTR>(&hIcon));
    }
    if (hIcon) {
        return ConvertHIconToBitmap(hIcon);
    }

    DWORD pid = 0;
    GetWindowThreadProcessId(hwnd, &pid);
    if (pid) {
        HANDLE hProc = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid);
        if (hProc) {
            wchar_t path[MAX_PATH] = {};
            DWORD sz = MAX_PATH;
            if (QueryFullProcessImageNameW(hProc, 0, path, &sz)) {
                SHFILEINFOW sfi = {};
                if (SHGetFileInfoW(path, 0, &sfi, sizeof(sfi), SHGFI_ICON | SHGFI_LARGEICON) && sfi.hIcon) {
                    auto bmp = ConvertHIconToBitmap(sfi.hIcon);
                    DestroyIcon(sfi.hIcon);
                    CloseHandle(hProc);
                    return bmp;
                }
            }
            CloseHandle(hProc);
        }
    }
    return nullptr;
}

// ============================================================================
// Acrylic & Liquid Glass Blur Shader
// ============================================================================
void BoxBlurHorizontal(const uint32_t* src, uint32_t* dst, int w, int h, int r) {
    if (r <= 0) {
        memcpy(dst, src, static_cast<size_t>(w) * h * sizeof(uint32_t));
        return;
    }
    const int div = r * 2 + 1;
    for (int y = 0; y < h; ++y) {
        const uint32_t* row = src + y * w;
        uint32_t* outRow = dst + y * w;
        uint32_t sumB = 0, sumG = 0, sumR = 0;
        for (int i = -r; i <= r; ++i) {
            int cx = (max)(0, (min)(w - 1, i));
            uint32_t px = row[cx];
            sumB += px & 0xFF;
            sumG += (px >> 8) & 0xFF;
            sumR += (px >> 16) & 0xFF;
        }
        for (int x = 0; x < w; ++x) {
            outRow[x] = 0xFF000000u | ((sumR / div) << 16) | ((sumG / div) << 8) | (sumB / div);
            uint32_t addPx = row[(min)(w - 1, x + r + 1)];
            uint32_t remPx = row[(max)(0, x - r)];
            sumB += (addPx & 0xFF) - (remPx & 0xFF);
            sumG += ((addPx >> 8) & 0xFF) - ((remPx >> 8) & 0xFF);
            sumR += ((addPx >> 16) & 0xFF) - ((remPx >> 16) & 0xFF);
        }
    }
}

void BoxBlurVertical(const uint32_t* src, uint32_t* dst, int w, int h, int r) {
    if (r <= 0) {
        memcpy(dst, src, static_cast<size_t>(w) * h * sizeof(uint32_t));
        return;
    }
    const int div = r * 2 + 1;
    for (int x = 0; x < w; ++x) {
        uint32_t sumB = 0, sumG = 0, sumR = 0;
        for (int i = -r; i <= r; ++i) {
            int cy = (max)(0, (min)(h - 1, i));
            uint32_t px = src[cy * w + x];
            sumB += px & 0xFF;
            sumG += (px >> 8) & 0xFF;
            sumR += (px >> 16) & 0xFF;
        }
        for (int y = 0; y < h; ++y) {
            dst[y * w + x] = 0xFF000000u | ((sumR / div) << 16) | ((sumG / div) << 8) | (sumB / div);
            uint32_t addPx = src[(min)(h - 1, y + r + 1) * w + x];
            uint32_t remPx = src[(max)(0, y - r) * w + x];
            sumB += (addPx & 0xFF) - (remPx & 0xFF);
            sumG += ((addPx >> 8) & 0xFF) - ((remPx >> 8) & 0xFF);
            sumR += ((addPx >> 16) & 0xFF) - ((remPx >> 16) & 0xFF);
        }
    }
}

void ApplyAcrylicShader(std::vector<uint32_t>& pixels, int w, int h, int radius,
                        ThemeMode theme, int transparentBgPercent) {
    if (w <= 0 || h <= 0 || pixels.size() < static_cast<size_t>(w) * h) return;

    std::vector<uint32_t> temp(static_cast<size_t>(w) * h);
    int r = (max)(3, radius);
    for (int pass = 0; pass < 3; ++pass) {
        BoxBlurHorizontal(pixels.data(), temp.data(), w, h, r);
        BoxBlurVertical(temp.data(), pixels.data(), w, h, r);
    }

    const float transp = static_cast<float>(transparentBgPercent) / 100.0f;
    const float tintStrength = 1.0f - transp;

    float tintR = 22.0f, tintG = 23.0f, tintB = 26.0f;
    float tintOpacity = 0.08f + tintStrength * 0.20f;
    float lumOpacity = 0.06f + tintStrength * 0.20f;
    float satBoost = 1.18f;
    float noiseAmp = 2.0f;
    float targetLum = 30.0f;

    if (theme == ThemeMode::LiquidGlass) {
        tintR = 186.0f; tintG = 198.0f; tintB = 206.0f;
        tintOpacity = 0.04f + tintStrength * 0.22f;
        lumOpacity = 0.06f + tintStrength * 0.14f;
        satBoost = 1.22f;
        noiseAmp = 1.6f;
        targetLum = 142.0f;
    } else if (theme == ThemeMode::MidnightAurora) {
        tintR = 20.0f; tintG = 22.0f; tintB = 42.0f;
        tintOpacity = 0.12f + tintStrength * 0.50f;
        lumOpacity = 0.16f + tintStrength * 0.42f;
        satBoost = 1.22f;
        noiseAmp = 2.0f;
    } else if (theme == ThemeMode::DaylightFrost) {
        tintR = 244.0f; tintG = 246.0f; tintB = 250.0f;
        tintOpacity = 0.24f + tintStrength * 0.58f;
        lumOpacity = 0.22f + tintStrength * 0.44f;
        satBoost = 1.20f;
        noiseAmp = 1.6f;
        targetLum = 232.0f;
    }

    for (int y = 0; y < h; ++y) {
        uint32_t* row = pixels.data() + y * w;
        for (int x = 0; x < w; ++x) {
            uint32_t px = row[x];
            float rC = static_cast<float>((px >> 16) & 0xFF);
            float gC = static_cast<float>((px >> 8) & 0xFF);
            float bC = static_cast<float>(px & 0xFF);

            float lum = 0.299f * rC + 0.587f * gC + 0.114f * bC;
            rC = (max)(0.0f, (min)(255.0f, lum + (rC - lum) * satBoost));
            gC = (max)(0.0f, (min)(255.0f, lum + (gC - lum) * satBoost));
            bC = (max)(0.0f, (min)(255.0f, lum + (bC - lum) * satBoost));

            float blendedLum = lum * (1.0f - lumOpacity) + targetLum * lumOpacity;
            float lumDelta = blendedLum - lum;
            rC = (max)(0.0f, (min)(255.0f, rC + lumDelta * 0.65f));
            gC = (max)(0.0f, (min)(255.0f, gC + lumDelta * 0.65f));
            bC = (max)(0.0f, (min)(255.0f, bC + lumDelta * 0.65f));

            rC = rC * (1.0f - tintOpacity) + tintR * tintOpacity;
            gC = gC * (1.0f - tintOpacity) + tintG * tintOpacity;
            bC = bC * (1.0f - tintOpacity) + tintB * tintOpacity;

            uint32_t hash = static_cast<uint32_t>(x * 374761393u + y * 668265263u);
            hash = (hash ^ (hash >> 13)) * 1274126177u;
            float grain = (static_cast<float>((hash >> 24) & 0xFF) / 127.5f - 1.0f) * noiseAmp;

            uint32_t outR = static_cast<uint32_t>((max)(0.0f, (min)(255.0f, rC + grain)));
            uint32_t outG = static_cast<uint32_t>((max)(0.0f, (min)(255.0f, gC + grain)));
            uint32_t outB = static_cast<uint32_t>((max)(0.0f, (min)(255.0f, bC + grain)));

            row[x] = 0xFF000000u | (outR << 16) | (outG << 8) | outB;
        }
    }
}

// ============================================================================
// Geometry & Pure 24x24 Lucide Vector Icons Renderer
// ============================================================================
Gdiplus::Color LerpColor(Gdiplus::Color a, Gdiplus::Color b, float t) {
    t = (max)(0.0f, (min)(1.0f, t));
    auto lb = [&](BYTE x, BYTE y) -> BYTE { return static_cast<BYTE>(x + (y - x) * t); };
    return Gdiplus::Color(lb(a.GetA(), b.GetA()), lb(a.GetR(), b.GetR()),
                          lb(a.GetG(), b.GetG()), lb(a.GetB(), b.GetB()));
}

void AddRoundedRectPath(Gdiplus::GraphicsPath& path,
                        float x, float y, float w, float h,
                        float rTL, float rTR, float rBR, float rBL) {
    float maxR = (min)(w, h) * 0.5f;
    rTL = (min)(rTL, maxR);
    rTR = (min)(rTR, maxR);
    rBR = (min)(rBR, maxR);
    rBL = (min)(rBL, maxR);

    if (rTL > 0.0f) path.AddArc(x, y, rTL * 2.0f, rTL * 2.0f, 180.0f, 90.0f);
    else path.AddLine(x, y, x, y);

    if (rTR > 0.0f) path.AddArc(x + w - rTR * 2.0f, y, rTR * 2.0f, rTR * 2.0f, 270.0f, 90.0f);
    else path.AddLine(x + w, y, x + w, y);

    if (rBR > 0.0f) path.AddArc(x + w - rBR * 2.0f, y + h - rBR * 2.0f, rBR * 2.0f, rBR * 2.0f, 0.0f, 90.0f);
    else path.AddLine(x + w, y + h, x + w, y + h);

    if (rBL > 0.0f) path.AddArc(x, y + h - rBL * 2.0f, rBL * 2.0f, rBL * 2.0f, 90.0f, 90.0f);
    else path.AddLine(x, y + h, x, y + h);

    path.CloseFigure();
}

void AddUniformRoundRect(Gdiplus::GraphicsPath& path, float x, float y, float w, float h, float r) {
    AddRoundedRectPath(path, x, y, w, h, r, r, r, r);
}

struct LucidePen {
    Gdiplus::Pen pen;
    float x0, y0, u;

    LucidePen(float cx, float cy, float size, Gdiplus::Color col, float strokeUnits = 2.0f)
        : pen(col, (max)(1.3f, (size / 24.0f) * strokeUnits)),
          x0(cx - size * 0.5f),
          y0(cy - size * 0.5f),
          u(size / 24.0f) {
        pen.SetStartCap(Gdiplus::LineCapRound);
        pen.SetEndCap(Gdiplus::LineCapRound);
        pen.SetLineJoin(Gdiplus::LineJoinRound);
    }
    float X(float v) const { return x0 + v * u; }
    float Y(float v) const { return y0 + v * u; }
    float S(float v) const { return v * u; }
};

// lucide: layout-grid (Start Menu)
void DrawLucideLayoutGrid(Gdiplus::Graphics& g, float cx, float cy, float sz, Gdiplus::Color col) {
    LucidePen lp(cx, cy, sz, col, 1.9f);
    const float boxes[4][2] = {{3.0f, 3.0f}, {14.0f, 3.0f}, {14.0f, 14.0f}, {3.0f, 14.0f}};
    for (const auto& b : boxes) {
        Gdiplus::GraphicsPath p;
        AddUniformRoundRect(p, lp.X(b[0]), lp.Y(b[1]), lp.S(7.0f), lp.S(7.0f), lp.S(1.6f));
        g.DrawPath(&lp.pen, &p);
    }
}

// lucide: search (Launch MPRD / Run)
void DrawLucideSearch(Gdiplus::Graphics& g, float cx, float cy, float sz, Gdiplus::Color col) {
    LucidePen lp(cx, cy, sz, col, 2.0f);
    g.DrawEllipse(&lp.pen, lp.X(3.0f), lp.Y(3.0f), lp.S(16.0f), lp.S(16.0f));
    g.DrawLine(&lp.pen, lp.X(21.0f), lp.Y(21.0f), lp.X(16.65f), lp.Y(16.65f));
}

// lucide: app-window (Fallback App Icon)
void DrawLucideAppWindow(Gdiplus::Graphics& g, float cx, float cy, float sz, Gdiplus::Color col) {
    LucidePen lp(cx, cy, sz, col, 1.9f);
    Gdiplus::GraphicsPath p;
    AddUniformRoundRect(p, lp.X(2.0f), lp.Y(4.0f), lp.S(20.0f), lp.S(16.0f), lp.S(2.5f));
    g.DrawPath(&lp.pen, &p);
    g.DrawLine(&lp.pen, lp.X(2.0f), lp.Y(9.0f), lp.X(22.0f), lp.Y(9.0f));
}

// lucide: cpu
void DrawLucideCpu(Gdiplus::Graphics& g, float cx, float cy, float sz, Gdiplus::Color col) {
    LucidePen lp(cx, cy, sz, col, 1.9f);
    Gdiplus::GraphicsPath outer, inner;
    AddUniformRoundRect(outer, lp.X(4.0f), lp.Y(4.0f), lp.S(16.0f), lp.S(16.0f), lp.S(2.0f));
    AddUniformRoundRect(inner, lp.X(9.0f), lp.Y(9.0f), lp.S(6.0f), lp.S(6.0f), lp.S(1.0f));
    g.DrawPath(&lp.pen, &outer);
    g.DrawPath(&lp.pen, &inner);
    g.DrawLine(&lp.pen, lp.X(9.0f), lp.Y(2.0f), lp.X(9.0f), lp.Y(4.0f));
    g.DrawLine(&lp.pen, lp.X(15.0f), lp.Y(2.0f), lp.X(15.0f), lp.Y(4.0f));
    g.DrawLine(&lp.pen, lp.X(9.0f), lp.Y(20.0f), lp.X(9.0f), lp.Y(22.0f));
    g.DrawLine(&lp.pen, lp.X(15.0f), lp.Y(20.0f), lp.X(15.0f), lp.Y(22.0f));
    g.DrawLine(&lp.pen, lp.X(2.0f), lp.Y(9.0f), lp.X(4.0f), lp.Y(9.0f));
    g.DrawLine(&lp.pen, lp.X(2.0f), lp.Y(15.0f), lp.X(4.0f), lp.Y(15.0f));
    g.DrawLine(&lp.pen, lp.X(20.0f), lp.Y(9.0f), lp.X(22.0f), lp.Y(9.0f));
    g.DrawLine(&lp.pen, lp.X(20.0f), lp.Y(15.0f), lp.X(22.0f), lp.Y(15.0f));
}

// lucide: layers (RAM)
void DrawLucideLayers(Gdiplus::Graphics& g, float cx, float cy, float sz, Gdiplus::Color col) {
    LucidePen lp(cx, cy, sz, col, 1.9f);
    Gdiplus::PointF topPts[4] = {
        {lp.X(12.0f), lp.Y(2.0f)}, {lp.X(2.0f), lp.Y(7.0f)},
        {lp.X(12.0f), lp.Y(12.0f)}, {lp.X(22.0f), lp.Y(7.0f)}};
    g.DrawPolygon(&lp.pen, topPts, 4);
    Gdiplus::PointF midPts[3] = {
        {lp.X(2.0f), lp.Y(12.0f)}, {lp.X(12.0f), lp.Y(17.0f)}, {lp.X(22.0f), lp.Y(12.0f)}};
    g.DrawLines(&lp.pen, midPts, 3);
    Gdiplus::PointF botPts[3] = {
        {lp.X(2.0f), lp.Y(17.0f)}, {lp.X(12.0f), lp.Y(22.0f)}, {lp.X(22.0f), lp.Y(17.0f)}};
    g.DrawLines(&lp.pen, botPts, 3);
}

// lucide: arrow-down-up (Network throughput)
void DrawLucideArrowDownUp(Gdiplus::Graphics& g, float cx, float cy, float sz, Gdiplus::Color col) {
    LucidePen lp(cx, cy, sz, col, 1.95f);
    g.DrawLine(&lp.pen, lp.X(7.0f), lp.Y(4.0f), lp.X(7.0f), lp.Y(20.0f));
    Gdiplus::PointF dHead[3] = {
        {lp.X(3.0f), lp.Y(16.0f)}, {lp.X(7.0f), lp.Y(20.0f)}, {lp.X(11.0f), lp.Y(16.0f)}};
    g.DrawLines(&lp.pen, dHead, 3);

    g.DrawLine(&lp.pen, lp.X(17.0f), lp.Y(20.0f), lp.X(17.0f), lp.Y(4.0f));
    Gdiplus::PointF uHead[3] = {
        {lp.X(13.0f), lp.Y(8.0f)}, {lp.X(17.0f), lp.Y(4.0f)}, {lp.X(21.0f), lp.Y(8.0f)}};
    g.DrawLines(&lp.pen, uHead, 3);
}

// lucide: music
void DrawLucideMusic(Gdiplus::Graphics& g, float cx, float cy, float sz, Gdiplus::Color col) {
    LucidePen lp(cx, cy, sz, col, 1.95f);
    Gdiplus::PointF stem[4] = {
        {lp.X(9.0f), lp.Y(18.0f)}, {lp.X(9.0f), lp.Y(5.0f)},
        {lp.X(21.0f), lp.Y(3.0f)}, {lp.X(21.0f), lp.Y(16.0f)}};
    g.DrawLines(&lp.pen, stem, 4);
    g.DrawEllipse(&lp.pen, lp.X(3.0f), lp.Y(15.0f), lp.S(6.0f), lp.S(6.0f));
    g.DrawEllipse(&lp.pen, lp.X(15.0f), lp.Y(13.0f), lp.S(6.0f), lp.S(6.0f));
}

// lucide: skip-back / play-pause / skip-forward
void DrawLucideSkipBack(Gdiplus::Graphics& g, float cx, float cy, float sz, Gdiplus::Color col) {
    LucidePen lp(cx, cy, sz, col, 2.0f);
    Gdiplus::PointF tri[3] = {
        {lp.X(19.0f), lp.Y(20.0f)}, {lp.X(9.0f), lp.Y(12.0f)}, {lp.X(19.0f), lp.Y(4.0f)}};
    g.DrawPolygon(&lp.pen, tri, 3);
    g.DrawLine(&lp.pen, lp.X(5.0f), lp.Y(19.0f), lp.X(5.0f), lp.Y(5.0f));
}

void DrawLucidePlayPause(Gdiplus::Graphics& g, float cx, float cy, float sz, Gdiplus::Color col) {
    LucidePen lp(cx, cy, sz, col, 2.0f);
    Gdiplus::PointF tri[3] = {
        {lp.X(6.0f), lp.Y(4.0f)}, {lp.X(19.0f), lp.Y(12.0f)}, {lp.X(6.0f), lp.Y(20.0f)}};
    g.DrawPolygon(&lp.pen, tri, 3);
}

void DrawLucideSkipForward(Gdiplus::Graphics& g, float cx, float cy, float sz, Gdiplus::Color col) {
    LucidePen lp(cx, cy, sz, col, 2.0f);
    Gdiplus::PointF tri[3] = {
        {lp.X(5.0f), lp.Y(4.0f)}, {lp.X(15.0f), lp.Y(12.0f)}, {lp.X(5.0f), lp.Y(20.0f)}};
    g.DrawPolygon(&lp.pen, tri, 3);
    g.DrawLine(&lp.pen, lp.X(19.0f), lp.Y(5.0f), lp.X(19.0f), lp.Y(19.0f));
}

// lucide: volume-2 / volume-1 / volume-x
void DrawLucideVolume(Gdiplus::Graphics& g, float cx, float cy, float sz,
                      int volPercent, bool muted, Gdiplus::Color col) {
    LucidePen lp(cx, cy, sz, col, 1.95f);
    Gdiplus::PointF spk[6] = {
        {lp.X(11.0f), lp.Y(5.0f)}, {lp.X(6.0f), lp.Y(9.0f)},
        {lp.X(2.0f), lp.Y(9.0f)},  {lp.X(2.0f), lp.Y(15.0f)},
        {lp.X(6.0f), lp.Y(15.0f)}, {lp.X(11.0f), lp.Y(19.0f)}};
    g.DrawPolygon(&lp.pen, spk, 6);

    if (muted || volPercent <= 0) {
        g.DrawLine(&lp.pen, lp.X(22.0f), lp.Y(9.0f), lp.X(16.0f), lp.Y(15.0f));
        g.DrawLine(&lp.pen, lp.X(16.0f), lp.Y(9.0f), lp.X(22.0f), lp.Y(15.0f));
    } else {
        g.DrawArc(&lp.pen, lp.X(10.5f), lp.Y(8.0f), lp.S(6.5f), lp.S(8.0f), -52.0f, 104.0f);
        if (volPercent >= 48) {
            g.DrawArc(&lp.pen, lp.X(11.5f), lp.Y(4.5f), lp.S(10.0f), lp.S(15.0f), -52.0f, 104.0f);
        }
    }
}

// lucide: battery / battery-charging
void DrawLucideBattery(Gdiplus::Graphics& g, float cx, float cy, float sz,
                       int pct, bool charging, Gdiplus::Color col) {
    LucidePen lp(cx, cy, sz, col, 1.9f);
    Gdiplus::GraphicsPath body;
    AddUniformRoundRect(body, lp.X(2.0f), lp.Y(7.0f), lp.S(16.0f), lp.S(10.0f), lp.S(2.0f));
    g.DrawPath(&lp.pen, &body);
    g.DrawLine(&lp.pen, lp.X(22.0f), lp.Y(11.0f), lp.X(22.0f), lp.Y(13.0f));

    if (charging) {
        Gdiplus::PointF bolt[4] = {
            {lp.X(11.0f), lp.Y(7.5f)}, {lp.X(8.5f), lp.Y(12.0f)},
            {lp.X(11.5f), lp.Y(12.0f)}, {lp.X(9.0f), lp.Y(16.5f)}};
        g.DrawLines(&lp.pen, bolt, 4);
    } else {
        float fillW = lp.S(11.0f) * (max)(0.08f, (min)(1.0f, pct / 100.0f));
        Gdiplus::SolidBrush b(col);
        Gdiplus::GraphicsPath fp;
        AddUniformRoundRect(fp, lp.X(4.5f), lp.Y(9.5f), fillW, lp.S(5.0f), lp.S(1.0f));
        g.FillPath(&b, &fp);
    }
}

// lucide: calendar / clock
void DrawLucideCalendar(Gdiplus::Graphics& g, float cx, float cy, float sz, Gdiplus::Color col) {
    LucidePen lp(cx, cy, sz, col, 1.9f);
    Gdiplus::GraphicsPath p;
    AddUniformRoundRect(p, lp.X(3.0f), lp.Y(4.0f), lp.S(18.0f), lp.S(18.0f), lp.S(2.2f));
    g.DrawPath(&lp.pen, &p);
    g.DrawLine(&lp.pen, lp.X(16.0f), lp.Y(2.0f), lp.X(16.0f), lp.Y(6.0f));
    g.DrawLine(&lp.pen, lp.X(8.0f), lp.Y(2.0f), lp.X(8.0f), lp.Y(6.0f));
    g.DrawLine(&lp.pen, lp.X(3.0f), lp.Y(10.0f), lp.X(21.0f), lp.Y(10.0f));
}

// lucide: sliders-horizontal (Quick Settings)
void DrawLucideSliders(Gdiplus::Graphics& g, float cx, float cy, float sz, Gdiplus::Color col) {
    LucidePen lp(cx, cy, sz, col, 1.9f);
    g.DrawLine(&lp.pen, lp.X(21.0f), lp.Y(4.0f), lp.X(14.0f), lp.Y(4.0f));
    g.DrawLine(&lp.pen, lp.X(10.0f), lp.Y(4.0f), lp.X(3.0f), lp.Y(4.0f));
    g.DrawLine(&lp.pen, lp.X(21.0f), lp.Y(12.0f), lp.X(12.0f), lp.Y(12.0f));
    g.DrawLine(&lp.pen, lp.X(8.0f), lp.Y(12.0f), lp.X(3.0f), lp.Y(12.0f));
    g.DrawLine(&lp.pen, lp.X(21.0f), lp.Y(20.0f), lp.X(16.0f), lp.Y(20.0f));
    g.DrawLine(&lp.pen, lp.X(12.0f), lp.Y(20.0f), lp.X(3.0f), lp.Y(20.0f));
    g.DrawLine(&lp.pen, lp.X(14.0f), lp.Y(2.0f), lp.X(14.0f), lp.Y(6.0f));
    g.DrawLine(&lp.pen, lp.X(8.0f), lp.Y(10.0f), lp.X(8.0f), lp.Y(14.0f));
    g.DrawLine(&lp.pen, lp.X(16.0f), lp.Y(18.0f), lp.X(16.0f), lp.Y(22.0f));
}

void DrawLiquidGlassOverlay(Gdiplus::Graphics& g,
                            const Gdiplus::GraphicsPath& outerPath,
                            const Gdiplus::RectF& bounds,
                            float radius,
                            float hoverBoost,
                            float scale) {
    Gdiplus::PointF ptTop(bounds.X, bounds.Y - 1.0f);
    Gdiplus::PointF ptBot(bounds.X, bounds.GetBottom() + 1.0f);

    Gdiplus::Color bodyCols[5] = {
        Gdiplus::Color(static_cast<BYTE>((min)(255.0f, 64.0f + 34.0f * hoverBoost)), 255, 255, 255),
        Gdiplus::Color(static_cast<BYTE>((min)(255.0f, 14.0f + 18.0f * hoverBoost)), 255, 255, 255),
        Gdiplus::Color(14, 16, 26, 32),
        Gdiplus::Color(static_cast<BYTE>((min)(255.0f, 22.0f + 20.0f * hoverBoost)), 255, 255, 255),
        Gdiplus::Color(static_cast<BYTE>((min)(255.0f, 110.0f + 36.0f * hoverBoost)), 255, 255, 255),
    };
    Gdiplus::REAL bodyPos[5] = {0.0f, 0.16f, 0.52f, 0.80f, 1.0f};
    Gdiplus::LinearGradientBrush bodyGrad(ptTop, ptBot, bodyCols[0], bodyCols[4]);
    bodyGrad.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
    bodyGrad.SetInterpolationColors(bodyCols, bodyPos, 5);
    g.FillPath(&bodyGrad, &outerPath);

    float inset = 1.4f * scale;
    if (bounds.Width > inset * 4.0f && bounds.Height > inset * 4.0f) {
        Gdiplus::GraphicsPath innerPath;
        AddUniformRoundRect(innerPath, bounds.X + inset, bounds.Y + inset,
                            bounds.Width - inset * 2.0f, bounds.Height - inset * 2.0f,
                            (max)(2.0f, radius - inset));
        Gdiplus::Color inCols[3] = {
            Gdiplus::Color(58, 255, 255, 255),
            Gdiplus::Color(6, 255, 255, 255),
            Gdiplus::Color(88, 255, 255, 255),
        };
        Gdiplus::REAL inPos[3] = {0.0f, 0.48f, 1.0f};
        Gdiplus::LinearGradientBrush inGrad(ptTop, ptBot, inCols[0], inCols[2]);
        inGrad.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
        inGrad.SetInterpolationColors(inCols, inPos, 3);
        Gdiplus::Pen inPen(&inGrad, 1.9f * scale);
        g.DrawPath(&inPen, &innerPath);
    }

    Gdiplus::Pen darkEdge(Gdiplus::Color(82, 0, 0, 0), 1.5f * scale);
    g.DrawPath(&darkEdge, &outerPath);

    Gdiplus::Color rimCols[3] = {
        Gdiplus::Color(static_cast<BYTE>((min)(255.0f, 226.0f + 24.0f * hoverBoost)), 255, 255, 255),
        Gdiplus::Color(32, 255, 255, 255),
        Gdiplus::Color(static_cast<BYTE>((min)(255.0f, 236.0f + 16.0f * hoverBoost)), 255, 255, 255),
    };
    Gdiplus::REAL rimPos[3] = {0.0f, 0.50f, 1.0f};
    Gdiplus::LinearGradientBrush rimGrad(ptTop, ptBot, rimCols[0], rimCols[2]);
    rimGrad.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
    rimGrad.SetInterpolationColors(rimCols, rimPos, 3);
    Gdiplus::Pen rimPen(&rimGrad, 1.25f * scale);
    g.DrawPath(&rimPen, &outerPath);
}

// ============================================================================
// MPBD Main Bar Window
// ============================================================================
constexpr UINT_PTR kTimerTelemetry = 1;
constexpr UINT_PTR kTimerAnim = 2;
constexpr wchar_t kBarClassName[] = L"WindhawkMPBDModernPillBarWnd";

struct AppEntry {
    HWND hwnd = nullptr;
    std::wstring title;
    bool isActive = false;
    std::shared_ptr<Gdiplus::Bitmap> icon;
    Gdiplus::RectF rect;
    float hoverAnim = 0.0f;
};

enum class HitKind {
    None,
    StartBtn,
    RunBtn,
    ActiveApp,
    DockApp,
    MediaPrev,
    MediaPlayPause,
    MediaNext,
    WidgetChip,
    QuickSettingsBtn,
};

struct WidgetChipLayout {
    WidgetId id;
    Gdiplus::RectF rect;
    Gdiplus::RectF subPrev;
    Gdiplus::RectF subPlay;
    Gdiplus::RectF subNext;
    std::wstring text;
    float hoverAnim = 0.0f;
};

class ModernPillBar {
public:
    ModernPillBar() {
        m_widgetOrder = LoadWidgetOrder();
    }

    ~ModernPillBar() {
        UnregisterAppBar();
        m_audio.Cleanup();
        CleanupDirect2D();
        FreeBackbuffer();
    }

    void RunLoop() {
        HRESULT hrCo = CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);
        bool didInitCo = SUCCEEDED(hrCo);

        Gdiplus::GdiplusStartupInput gdiInput;
        ULONG_PTR gdiToken = 0;
        if (Gdiplus::GdiplusStartup(&gdiToken, &gdiInput, nullptr) != Gdiplus::Ok) {
            if (didInitCo) CoUninitialize();
            return;
        }

        m_settings = GetSettingsSnapshot();

        HMODULE hMod = GetModModule();
        RegisterWindowClass(hMod);
        ComputeMonitorGeometry();
        InitDirect2DAndFonts();
        RebuildWallpaperBlur();
        SampleTelemetry(true);
        ComputeBarLayout();

        DWORD exStyle = WS_EX_LAYERED | WS_EX_TOPMOST | WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE;
        m_hwnd = CreateWindowExW(
            exStyle,
            kBarClassName,
            L"MPBD - Modern Pill Bar & Dock",
            WS_POPUP,
            m_winX, m_winY, m_canvasW, m_canvasH,
            nullptr, nullptr, hMod, this);

        if (!m_hwnd) {
            CleanupDirect2D();
            UnregisterClassW(kBarClassName, hMod);
            Gdiplus::GdiplusShutdown(gdiToken);
            if (didInitCo) CoUninitialize();
            return;
        }

        g_barHwnd.store(m_hwnd);

        if (m_settings.hideNativeTaskbar) {
            SetNativeTaskbarHidden(true);
            m_didHideTaskbar = true;
        }
        UpdateAppBarRegistration();

        RenderAndPresent();
        ShowWindow(m_hwnd, SW_SHOWNA);

        SetTimer(m_hwnd, kTimerTelemetry, 1000, nullptr);

        MSG msg;
        while (GetMessageW(&msg, nullptr, 0, 0) > 0) {
            TranslateMessage(&msg);
            DispatchMessageW(&msg);
        }

        UnregisterAppBar();
        if (m_didHideTaskbar) {
            SetNativeTaskbarHidden(false);
            m_didHideTaskbar = false;
        }

        g_barHwnd.store(nullptr);
        m_audio.Cleanup();
        CleanupDirect2D();
        UnregisterClassW(kBarClassName, hMod);
        Gdiplus::GdiplusShutdown(gdiToken);
        if (didInitCo) CoUninitialize();
    }

private:
    HWND m_hwnd = nullptr;
    ModSettings m_settings;
    AudioController m_audio;

    // Direct2D & DirectWrite
    ID2D1Factory* m_d2dFactory = nullptr;
    ID2D1DCRenderTarget* m_d2dTarget = nullptr;
    IDWriteFactory* m_dwriteFactory = nullptr;
    IDWriteTextFormat* m_fmtLabel = nullptr;
    IDWriteTextFormat* m_fmtClock = nullptr;
    IDWriteTextFormat* m_fmtSmall = nullptr;
    std::wstring m_resolvedFontName = L"Segoe UI";

    // Geometry
    RECT m_monRect = {};
    float m_scale = 1.0f;
    float m_hRatio = 1.0f;
    int m_winX = 0;
    int m_winY = 0;
    int m_canvasW = 0;
    int m_canvasH = 0;
    float m_barH = 40.0f;
    float m_barY = 6.0f;
    float m_edgePad = 10.0f;

    bool m_appBarRegistered = false;
    bool m_didHideTaskbar = false;
    bool m_hiddenByFullscreen = false;

    // Island Rects
    Gdiplus::RectF m_leftIsland;
    Gdiplus::RectF m_centerIsland;
    Gdiplus::RectF m_rightIsland;
    Gdiplus::RectF m_fullBarRect;

    Gdiplus::RectF m_startRect;
    Gdiplus::RectF m_runRect;
    Gdiplus::RectF m_activeAppRect;
    Gdiplus::RectF m_quickSetRect;

    // App Dock & Icon Cache
    std::vector<AppEntry> m_dockApps;
    std::map<HWND, std::shared_ptr<Gdiplus::Bitmap>> m_iconCache;
    std::wstring m_activeTitle;
    std::shared_ptr<Gdiplus::Bitmap> m_activeIcon;

    // Widgets & Live Telemetry
    std::vector<WidgetId> m_widgetOrder;
    std::vector<WidgetChipLayout> m_widgets;
    float m_widgetHover[7] = {};

    int m_cpuPct = 0;
    int m_ramPct = 0;
    ULONGLONG m_prevIdle = 0;
    ULONGLONG m_prevKernel = 0;
    ULONGLONG m_prevUser = 0;

    uint64_t m_prevNetRx = 0;
    uint64_t m_prevNetTx = 0;
    ULONGLONG m_prevNetTick = 0;
    std::wstring m_netText = L"0 KB/s";

    int m_volPct = 50;
    bool m_volMuted = false;
    bool m_hasBattery = false;
    int m_batPct = 100;
    bool m_batCharging = false;
    std::wstring m_mediaTrack;
    std::wstring m_clockText;

    // Hover & Drag-Reorder State
    HitKind m_hoverKind = HitKind::None;
    int m_hoverIndex = -1;
    float m_hoverStartAnim = 0.0f;
    float m_hoverRunAnim = 0.0f;
    float m_hoverQuickAnim = 0.0f;
    bool m_mouseTracked = false;
    bool m_animTimerActive = false;
    ULONGLONG m_lastAnimTick = 0;

    bool m_draggingWidget = false;
    int m_dragWidgetOrderIdx = -1;

    // DIB Backbuffer & Wallpaper Blur Strip
    HDC m_memDC = nullptr;
    HBITMAP m_dibBmp = nullptr;
    HGDIOBJ m_oldBmp = nullptr;
    void* m_dibBits = nullptr;
    int m_dibW = 0;
    int m_dibH = 0;

    std::vector<uint32_t> m_blurredPixels;
    int m_blurW = 0;
    int m_blurH = 0;

    bool IsLightTheme() const { return m_settings.theme == ThemeMode::DaylightFrost; }
    bool IsCompact() const { return m_settings.theme == ThemeMode::M11Compact; }
    bool IsLiquidGlass() const { return m_settings.theme == ThemeMode::LiquidGlass; }
    bool UsesBlurBackdrop() const {
        return m_settings.theme == ThemeMode::MpbdBlur ||
               m_settings.theme == ThemeMode::LiquidGlass ||
               m_settings.theme == ThemeMode::MidnightAurora ||
               m_settings.theme == ThemeMode::DaylightFrost;
    }

    float GetBarCornerRadius(float h) const {
        if (m_settings.layout == LayoutStyle::EdgeSeamless) return 0.0f;
        float pct = static_cast<float>((max)(10, (min)(50, m_settings.roundedWindow))) / 100.0f;
        return h * pct;
    }

    static HMODULE GetModModule() {
        HMODULE hMod = nullptr;
        GetModuleHandleExW(
            GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            reinterpret_cast<LPCWSTR>(&StaticWndProc),
            &hMod);
        return hMod ? hMod : GetModuleHandleW(nullptr);
    }

    static void RegisterWindowClass(HMODULE hMod) {
        WNDCLASSEXW wc = {};
        wc.cbSize = sizeof(wc);
        wc.style = CS_HREDRAW | CS_VREDRAW;
        wc.lpfnWndProc = StaticWndProc;
        wc.hInstance = hMod;
        wc.hCursor = LoadCursorW(nullptr, reinterpret_cast<LPCWSTR>(IDC_ARROW));
        wc.lpszClassName = kBarClassName;
        RegisterClassExW(&wc);
    }

    // ========================================================================
    // Monitor & AppBar Work-Area Reservation
    // ========================================================================
    void ComputeMonitorGeometry() {
        HMONITOR hMon = MonitorFromPoint({0, 0}, MONITOR_DEFAULTTOPRIMARY);
        MONITORINFO mi = {};
        mi.cbSize = sizeof(mi);
        GetMonitorInfoW(hMon, &mi);
        m_monRect = mi.rcMonitor;

        UINT dpi = 96;
        HMODULE hShcore = LoadLibraryW(L"shcore.dll");
        if (hShcore) {
            using GetDpiForMonitorFn = HRESULT(WINAPI*)(HMONITOR, int, UINT*, UINT*);
            auto fn = reinterpret_cast<GetDpiForMonitorFn>(GetProcAddress(hShcore, "GetDpiForMonitor"));
            if (fn) {
                UINT dx = 96, dy = 96;
                if (SUCCEEDED(fn(hMon, 0, &dx, &dy)) && dx >= 96) dpi = dx;
            }
            FreeLibrary(hShcore);
        }
        m_scale = static_cast<float>(dpi) / 96.0f;

        int monW = m_monRect.right - m_monRect.left;
        m_barH = static_cast<float>(m_settings.barHeight) * m_scale;
        m_hRatio = static_cast<float>(m_settings.barHeight) / 40.0f;

        const bool seamless = (m_settings.layout == LayoutStyle::EdgeSeamless);
        float vMargin = seamless ? 0.0f : (6.0f * m_scale);
        float shadowPad = seamless ? (4.0f * m_scale) : (12.0f * m_scale);

        int desiredW = (m_settings.customWidth > 0 && !seamless)
            ? (min)(monW, static_cast<int>(m_settings.customWidth * m_scale))
            : monW;

        m_canvasW = desiredW;
        m_canvasH = static_cast<int>(std::ceil(m_barH + vMargin + shadowPad));
        m_winX = m_monRect.left + (monW - m_canvasW) / 2;

        if (m_settings.edge == BarEdge::Top) {
            m_winY = m_monRect.top;
            m_barY = vMargin;
        } else {
            m_winY = m_monRect.bottom - m_canvasH;
            m_barY = static_cast<float>(m_canvasH) - vMargin - m_barH;
        }

        m_edgePad = seamless ? (12.0f * m_scale) : (10.0f * m_scale);
    }

    void UpdateAppBarRegistration() {
        if (!m_hwnd) return;
        if (!m_settings.reserveWorkArea) {
            UnregisterAppBar();
            return;
        }

        APPBARDATA abd = {};
        abd.cbSize = sizeof(abd);
        abd.hWnd = m_hwnd;
        abd.uCallbackMessage = kMsgAppBarCallback;

        if (!m_appBarRegistered) {
            if (SHAppBarMessage(ABM_NEW, &abd)) {
                m_appBarRegistered = true;
            }
        }
        if (!m_appBarRegistered) return;

        int reservePx = static_cast<int>(std::ceil(m_barH + (m_settings.layout == LayoutStyle::EdgeSeamless ? 0.0f : 10.0f * m_scale)));
        abd.uEdge = (m_settings.edge == BarEdge::Top) ? ABE_TOP : ABE_BOTTOM;
        abd.rc = m_monRect;
        SHAppBarMessage(ABM_QUERYPOS, &abd);
        if (abd.uEdge == ABE_TOP) {
            abd.rc.bottom = abd.rc.top + reservePx;
        } else {
            abd.rc.top = abd.rc.bottom - reservePx;
        }
        SHAppBarMessage(ABM_SETPOS, &abd);
    }

    void UnregisterAppBar() {
        if (m_appBarRegistered && m_hwnd) {
            APPBARDATA abd = {};
            abd.cbSize = sizeof(abd);
            abd.hWnd = m_hwnd;
            SHAppBarMessage(ABM_REMOVE, &abd);
            m_appBarRegistered = false;
        }
    }

    // ========================================================================
    // Wallpaper Strip Acrylic Blur (Zero Flicker, Zero Self-Capture!)
    // ========================================================================
    void RebuildWallpaperBlur() {
        m_blurredPixels.clear();
        m_blurW = m_canvasW;
        m_blurH = m_canvasH;
        if (!UsesBlurBackdrop() || m_canvasW <= 0 || m_canvasH <= 0) return;

        int monW = m_monRect.right - m_monRect.left;
        int monH = m_monRect.bottom - m_monRect.top;
        if (monW <= 0 || monH <= 0) return;

        int blurR = (max)(4, static_cast<int>(std::round(14.0f * m_scale)));
        int pad = blurR * 2;
        int pw = m_canvasW + pad * 2;
        int ph = m_canvasH + pad * 2;

        Gdiplus::Bitmap strip(pw, ph, PixelFormat32bppARGB);
        {
            Gdiplus::Graphics g(&strip);
            g.SetInterpolationMode(Gdiplus::InterpolationModeHighQualityBicubic);

            COLORREF deskCol = GetSysColor(COLOR_DESKTOP);
            g.Clear(Gdiplus::Color(255, GetRValue(deskCol), GetGValue(deskCol), GetBValue(deskCol)));

            wchar_t wpPath[MAX_PATH] = {};
            if (SystemParametersInfoW(SPI_GETDESKWALLPAPER, MAX_PATH, wpPath, 0) && wpPath[0] != L'\0') {
                std::unique_ptr<Gdiplus::Bitmap> wp(Gdiplus::Bitmap::FromFile(wpPath));
                if (wp && wp->GetLastStatus() == Gdiplus::Ok && wp->GetWidth() > 0 && wp->GetHeight() > 0) {
                    float imgW = static_cast<float>(wp->GetWidth());
                    float imgH = static_cast<float>(wp->GetHeight());
                    float scaleFill = (max)(static_cast<float>(monW) / imgW, static_cast<float>(monH) / imgH);
                    float drawW = imgW * scaleFill;
                    float drawH = imgH * scaleFill;
                    float offX = (monW - drawW) * 0.5f - (m_winX - m_monRect.left - pad);
                    float offY = (monH - drawH) * 0.5f - (m_winY - m_monRect.top - pad);
                    g.DrawImage(wp.get(), Gdiplus::RectF(offX, offY, drawW, drawH));
                }
            }
        }

        std::vector<uint32_t> padded(static_cast<size_t>(pw) * ph);
        Gdiplus::BitmapData bd = {};
        Gdiplus::Rect rc(0, 0, pw, ph);
        if (strip.LockBits(&rc, Gdiplus::ImageLockModeRead, PixelFormat32bppARGB, &bd) == Gdiplus::Ok) {
            for (int y = 0; y < ph; ++y) {
                memcpy(padded.data() + static_cast<size_t>(y) * pw,
                       static_cast<const BYTE*>(bd.Scan0) + y * bd.Stride,
                       static_cast<size_t>(pw) * 4);
            }
            strip.UnlockBits(&bd);
        }

        ApplyAcrylicShader(padded, pw, ph, blurR, m_settings.theme, m_settings.transparentBackground);

        m_blurredPixels.resize(static_cast<size_t>(m_blurW) * m_blurH);
        for (int y = 0; y < m_blurH; ++y) {
            memcpy(m_blurredPixels.data() + static_cast<size_t>(y) * m_blurW,
                   padded.data() + static_cast<size_t>(y + pad) * pw + pad,
                   static_cast<size_t>(m_blurW) * 4);
        }
    }

    // ========================================================================
    // Direct2D & DirectWrite
    // ========================================================================
    void InitDirect2DAndFonts() {
        CleanupDirect2D();

        if (FAILED(D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &m_d2dFactory))) return;
        if (FAILED(DWriteCreateFactory(
                DWRITE_FACTORY_TYPE_SHARED, __uuidof(IDWriteFactory),
                reinterpret_cast<IUnknown**>(&m_dwriteFactory)))) {
            return;
        }

        m_resolvedFontName = L"Segoe UI";
        IDWriteFontCollection* sysFonts = nullptr;
        if (SUCCEEDED(m_dwriteFactory->GetSystemFontCollection(&sysFonts)) && sysFonts) {
            std::vector<std::wstring> cands = {
                m_settings.customFont, L"Google Sans", L"Google Sans Text",
                L"Product Sans", L"Segoe UI Variable Text", L"Segoe UI"
            };
            for (const auto& name : cands) {
                if (name.empty()) continue;
                UINT32 idx = 0;
                BOOL exists = FALSE;
                if (SUCCEEDED(sysFonts->FindFamilyName(name.c_str(), &idx, &exists)) && exists) {
                    m_resolvedFontName = name;
                    break;
                }
            }
            sysFonts->Release();
        }

        D2D1_RENDER_TARGET_PROPERTIES props = D2D1::RenderTargetProperties(
            D2D1_RENDER_TARGET_TYPE_DEFAULT,
            D2D1::PixelFormat(DXGI_FORMAT_B8G8R8A8_UNORM, D2D1_ALPHA_MODE_PREMULTIPLIED),
            96.0f, 96.0f, D2D1_RENDER_TARGET_USAGE_GDI_COMPATIBLE, D2D1_FEATURE_LEVEL_DEFAULT);
        m_d2dFactory->CreateDCRenderTarget(&props, &m_d2dTarget);
        if (m_d2dTarget) {
            m_d2dTarget->SetTextAntialiasMode(D2D1_TEXT_ANTIALIAS_MODE_GRAYSCALE);
        }

        float fScale = m_scale * (max)(0.85f, (min)(1.22f, 0.55f + 0.45f * m_hRatio));
        auto makeFmt = [&](float px, DWRITE_FONT_WEIGHT w, DWRITE_TEXT_ALIGNMENT ha, bool ellipsis) {
            IDWriteTextFormat* fmt = nullptr;
            if (SUCCEEDED(m_dwriteFactory->CreateTextFormat(
                    m_resolvedFontName.c_str(), nullptr, w, DWRITE_FONT_STYLE_NORMAL,
                    DWRITE_FONT_STRETCH_NORMAL, px * fScale, L"", &fmt)) && fmt) {
                fmt->SetTextAlignment(ha);
                fmt->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
                fmt->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
                if (ellipsis) {
                    IDWriteInlineObject* trimSign = nullptr;
                    if (SUCCEEDED(m_dwriteFactory->CreateEllipsisTrimmingSign(fmt, &trimSign)) && trimSign) {
                        DWRITE_TRIMMING tr = {DWRITE_TRIMMING_GRANULARITY_CHARACTER, 0, 0};
                        fmt->SetTrimming(&tr, trimSign);
                        trimSign->Release();
                    }
                }
            }
            return fmt;
        };

        m_fmtLabel = makeFmt(12.5f, DWRITE_FONT_WEIGHT_MEDIUM, DWRITE_TEXT_ALIGNMENT_LEADING, true);
        m_fmtClock = makeFmt(12.5f, DWRITE_FONT_WEIGHT_SEMI_BOLD, DWRITE_TEXT_ALIGNMENT_LEADING, false);
        m_fmtSmall = makeFmt(11.5f, DWRITE_FONT_WEIGHT_MEDIUM, DWRITE_TEXT_ALIGNMENT_LEADING, true);
    }

    void CleanupDirect2D() {
        SafeRelease(m_fmtLabel);
        SafeRelease(m_fmtClock);
        SafeRelease(m_fmtSmall);
        SafeRelease(m_d2dTarget);
        SafeRelease(m_dwriteFactory);
        SafeRelease(m_d2dFactory);
    }

    float MeasureTextW(const std::wstring& str, IDWriteTextFormat* fmt) const {
        if (str.empty() || !m_dwriteFactory || !fmt) return 0.0f;
        IDWriteTextLayout* layout = nullptr;
        if (FAILED(m_dwriteFactory->CreateTextLayout(
                str.c_str(), static_cast<UINT32>(str.size()), fmt, 4000.0f, 80.0f, &layout)) || !layout) {
            return 0.0f;
        }
        DWRITE_TEXT_METRICS m = {};
        layout->GetMetrics(&m);
        layout->Release();
        return m.widthIncludingTrailingWhitespace;
    }

    void DrawD2DText(const std::wstring& text, IDWriteTextFormat* fmt,
                     const Gdiplus::RectF& rc, D2D1_COLOR_F col) {
        if (!m_d2dTarget || !fmt || text.empty()) return;
        ID2D1SolidColorBrush* br = nullptr;
        if (SUCCEEDED(m_d2dTarget->CreateSolidColorBrush(col, &br)) && br) {
            D2D1_RECT_F r = D2D1::RectF(rc.X, rc.Y, rc.GetRight(), rc.GetBottom());
            m_d2dTarget->DrawTextW(text.c_str(), static_cast<UINT32>(text.size()),
                                   fmt, &r, br, D2D1_DRAW_TEXT_OPTIONS_CLIP);
            br->Release();
        }
    }

    // ========================================================================
    // Live System Telemetry & Open App Windows Enumeration
    // ========================================================================
    bool IsForegroundFullscreen() const {
        if (!m_settings.hideInFullscreen) return false;
        HWND fg = GetForegroundWindow();
        if (!fg || fg == m_hwnd) return false;
        wchar_t cls[64] = {};
        GetClassNameW(fg, cls, 64);
        if (wcscmp(cls, L"Progman") == 0 || wcscmp(cls, L"WorkerW") == 0 ||
            wcscmp(cls, L"Shell_TrayWnd") == 0) {
            return false;
        }
        RECT rc = {};
        if (!GetWindowRect(fg, &rc)) return false;
        return rc.left <= m_monRect.left && rc.top <= m_monRect.top &&
               rc.right >= m_monRect.right && rc.bottom >= m_monRect.bottom;
    }

    void SampleTelemetry(bool forceInitial) {
        // 1. CPU %
        FILETIME ftIdle = {}, ftKern = {}, ftUser = {};
        if (GetSystemTimes(&ftIdle, &ftKern, &ftUser)) {
            auto toU64 = [](const FILETIME& ft) -> ULONGLONG {
                return (static_cast<ULONGLONG>(ft.dwHighDateTime) << 32) | ft.dwLowDateTime;
            };
            ULONGLONG idle = toU64(ftIdle);
            ULONGLONG kern = toU64(ftKern);
            ULONGLONG user = toU64(ftUser);
            if (!forceInitial && m_prevKernel > 0) {
                ULONGLONG sysDiff = (kern - m_prevKernel) + (user - m_prevUser);
                ULONGLONG idleDiff = idle - m_prevIdle;
                if (sysDiff > 0 && sysDiff >= idleDiff) {
                    m_cpuPct = static_cast<int>(((sysDiff - idleDiff) * 100ULL) / sysDiff);
                }
            }
            m_prevIdle = idle;
            m_prevKernel = kern;
            m_prevUser = user;
        }

        // 2. RAM %
        MEMORYSTATUSEX ms = {};
        ms.dwLength = sizeof(ms);
        if (GlobalMemoryStatusEx(&ms)) {
            m_ramPct = static_cast<int>(ms.dwMemoryLoad);
        }

        // 3. Network Throughput
        ULONG tblSize = 0;
        if (GetIfTable(nullptr, &tblSize, FALSE) == ERROR_INSUFFICIENT_BUFFER && tblSize > 0) {
            std::vector<BYTE> buf(tblSize);
            auto* tbl = reinterpret_cast<MIB_IFTABLE*>(buf.data());
            if (GetIfTable(tbl, &tblSize, FALSE) == NO_ERROR) {
                uint64_t rx = 0, tx = 0;
                for (DWORD i = 0; i < tbl->dwNumEntries; ++i) {
                    const MIB_IFROW& row = tbl->table[i];
                    if (row.dwType != IF_TYPE_SOFTWARE_LOOPBACK &&
                        row.dwOperStatus >= IF_OPER_STATUS_CONNECTED) {
                        rx += row.dwInOctets;
                        tx += row.dwOutOctets;
                    }
                }
                ULONGLONG now = GetTickCount64();
                if (!forceInitial && m_prevNetTick > 0 && now > m_prevNetTick && rx >= m_prevNetRx) {
                    double sec = static_cast<double>(now - m_prevNetTick) / 1000.0;
                    double rxRate = static_cast<double>(rx - m_prevNetRx) / sec;
                    wchar_t nbuf[48] = {};
                    if (rxRate >= 1024.0 * 1024.0) {
                        swprintf(nbuf, 48, L"%.1f MB/s", rxRate / (1024.0 * 1024.0));
                    } else {
                        swprintf(nbuf, 48, L"%d KB/s", static_cast<int>(rxRate / 1024.0));
                    }
                    m_netText = nbuf;
                }
                m_prevNetRx = rx;
                m_prevNetTx = tx;
                m_prevNetTick = now;
            }
        }

        // 4. Volume & Battery
        m_audio.Query(m_volPct, m_volMuted);

        SYSTEM_POWER_STATUS sps = {};
        if (GetSystemPowerStatus(&sps) && sps.BatteryFlag != 128 && sps.BatteryFlag != 255) {
            m_hasBattery = true;
            m_batPct = (sps.BatteryLifePercent <= 100) ? sps.BatteryLifePercent : 100;
            m_batCharging = (sps.ACLineStatus == 1) || ((sps.BatteryFlag & 8) != 0);
        } else {
            m_hasBattery = false;
        }

        // 5. Clock & Date
        SYSTEMTIME st = {};
        GetLocalTime(&st);
        const wchar_t* days[7] = {L"Sun", L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat"};
        const wchar_t* mons[12] = {L"Jan", L"Feb", L"Mar", L"Apr", L"May", L"Jun",
                                   L"Jul", L"Aug", L"Sep", L"Oct", L"Nov", L"Dec"};
        wchar_t cbuf[64] = {};
        if (m_settings.use24HourClock) {
            swprintf(cbuf, 64, L"%s, %02d %s  \x00B7  %02d:%02d",
                     days[st.wDayOfWeek % 7], st.wDay, mons[(st.wMonth - 1) % 12],
                     st.wHour, st.wMinute);
        } else {
            int h12 = st.wHour % 12;
            if (h12 == 0) h12 = 12;
            swprintf(cbuf, 64, L"%s, %02d %s  \x00B7  %d:%02d %s",
                     days[st.wDayOfWeek % 7], st.wDay, mons[(st.wMonth - 1) % 12],
                     h12, st.wMinute, (st.wHour >= 12) ? L"PM" : L"AM");
        }
        m_clockText = cbuf;

        // 6. Enumerate Open Application Windows & Active Media Title
        EnumerateAppsAndMedia();
    }

    struct EnumWindowsCtx {
        ModernPillBar* self;
        HWND fg;
        std::vector<AppEntry>* prev;
    };

    static BOOL CALLBACK EnumAppsCallback(HWND hwnd, LPARAM lp) {
        auto* c = reinterpret_cast<EnumWindowsCtx*>(lp);
        if (hwnd == c->self->m_hwnd || !IsWindowVisible(hwnd)) return TRUE;

        LONG_PTR ex = GetWindowLongPtrW(hwnd, GWL_EXSTYLE);
        if ((ex & WS_EX_TOOLWINDOW) && !(ex & WS_EX_APPWINDOW)) return TRUE;
        if (GetWindow(hwnd, GW_OWNER) != nullptr && !(ex & WS_EX_APPWINDOW)) return TRUE;

        DWORD cloaked = 0;
        if (SUCCEEDED(DwmGetWindowAttribute(hwnd, DWMWA_CLOAKED, &cloaked, sizeof(cloaked))) && cloaked != 0) {
            return TRUE;
        }

        wchar_t cls[64] = {};
        GetClassNameW(hwnd, cls, 64);
        if (wcscmp(cls, L"Progman") == 0 || wcscmp(cls, L"WorkerW") == 0 ||
            wcscmp(cls, L"Shell_TrayWnd") == 0 || wcscmp(cls, L"Shell_SecondaryTrayWnd") == 0 ||
            wcscmp(cls, L"Windows.UI.Core.CoreWindow") == 0) {
            return TRUE;
        }

        wchar_t titleBuf[256] = {};
        if (GetWindowTextW(hwnd, titleBuf, 256) <= 0) return TRUE;
        std::wstring title = TrimW(titleBuf);
        if (title.empty()) return TRUE;

        if (c->self->m_mediaTrack.empty()) {
            DWORD pid = 0;
            GetWindowThreadProcessId(hwnd, &pid);
            HANDLE hP = pid ? OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid) : nullptr;
            if (hP) {
                wchar_t exe[MAX_PATH] = {};
                DWORD sz = MAX_PATH;
                if (QueryFullProcessImageNameW(hP, 0, exe, &sz)) {
                    std::wstring lw = ToLowerW(PathFindFileNameW(exe));
                    if (lw == L"spotify.exe" || lw == L"music.ui.exe" || lw == L"applemusic.exe" ||
                        lw == L"musicbee.exe" || lw == L"aimp.exe" || lw == L"foobar2000.exe") {
                        if (title != L"Spotify" && title != L"Spotify Free" && title != L"Spotify Premium") {
                            c->self->m_mediaTrack = title;
                        }
                    }
                }
                CloseHandle(hP);
            }
        }

        if (c->self->m_dockApps.size() >= 12) return TRUE;

        auto it = c->self->m_iconCache.find(hwnd);
        std::shared_ptr<Gdiplus::Bitmap> icon;
        if (it != c->self->m_iconCache.end()) {
            icon = it->second;
        } else {
            icon = ExtractWindowIcon(hwnd);
            c->self->m_iconCache[hwnd] = icon;
        }

        float prevHov = 0.0f;
        for (const auto& old : *c->prev) {
            if (old.hwnd == hwnd) {
                prevHov = old.hoverAnim;
                break;
            }
        }

        c->self->m_dockApps.push_back({hwnd, title, (hwnd == c->fg), icon, {}, prevHov});
        return TRUE;
    }

    void EnumerateAppsAndMedia() {
        HWND fg = GetForegroundWindow();
        std::vector<AppEntry> prevApps = m_dockApps;
        m_dockApps.clear();
        m_mediaTrack.clear();

        EnumWindowsCtx ctx = {this, fg, &prevApps};
        EnumWindows(EnumAppsCallback, reinterpret_cast<LPARAM>(&ctx));

        // Prune stale icon cache entries
        if (m_iconCache.size() > 48) {
            for (auto it = m_iconCache.begin(); it != m_iconCache.end();) {
                if (!IsWindow(it->first)) it = m_iconCache.erase(it);
                else ++it;
            }
        }

        // Active window pill title
        m_activeTitle = L"Desktop";
        m_activeIcon.reset();
        for (const auto& a : m_dockApps) {
            if (a.isActive) {
                m_activeTitle = a.title;
                m_activeIcon = a.icon;
                break;
            }
        }
    }

    // ========================================================================
    // Modular Bar & Islands Layout Engine
    // ========================================================================
    void ComputeBarLayout() {
        float rScale = m_scale * (max)(0.82f, (min)(1.22f, m_hRatio));
        float innerPad = 8.0f * rScale;
        float btnSz = m_barH - 10.0f * rScale;
        float btnY = m_barY + (m_barH - btnSz) * 0.5f;
        float chipGap = 5.0f * rScale;

        // 1. Left Cluster: Start + MPRD Run + Active Window Title
        float curL = m_edgePad + innerPad;
        m_startRect = Gdiplus::RectF(curL, btnY, btnSz, btnSz);
        curL += btnSz + 4.0f * rScale;

        m_runRect = Gdiplus::RectF(curL, btnY, btnSz, btnSz);
        curL += btnSz + (m_settings.showActiveWindow ? (6.0f * rScale) : 0.0f);

        if (m_settings.showActiveWindow) {
            float maxTitleW = 190.0f * m_scale;
            float measuredW = (min)(maxTitleW, (max)(64.0f * rScale, MeasureTextW(m_activeTitle, m_fmtLabel) + 34.0f * rScale));
            m_activeAppRect = Gdiplus::RectF(curL, btnY, measuredW, btnSz);
            curL += measuredW;
        } else {
            m_activeAppRect = Gdiplus::RectF(0, 0, 0, 0);
        }
        m_leftIsland = Gdiplus::RectF(m_edgePad, m_barY, (curL - m_edgePad) + innerPad, m_barH);

        // 2. Right Cluster: Ordered Modular Widgets + Quick Settings Button
        m_widgets.clear();
        for (WidgetId id : m_widgetOrder) {
            WidgetChipLayout w = {};
            w.id = id;
            w.hoverAnim = m_widgetHover[static_cast<int>(id)];
            bool enabled = false;
            float chipW = 0.0f;

            switch (id) {
                case WidgetId::Media:
                    if (m_settings.showMediaWidget) {
                        enabled = true;
                        w.text = m_mediaTrack.empty() ? L"Media" : m_mediaTrack;
                        if (w.text.size() > 22) w.text = w.text.substr(0, 21) + L"\x2026";
                        float tw = MeasureTextW(w.text, m_fmtSmall);
                        chipW = 24.0f * rScale + tw + 66.0f * rScale;
                    }
                    break;
                case WidgetId::Cpu:
                    if (m_settings.showCpuRam) {
                        enabled = true;
                        w.text = std::to_wstring(m_cpuPct) + L"%";
                        chipW = 26.0f * rScale + MeasureTextW(w.text, m_fmtSmall) + 10.0f * rScale;
                    }
                    break;
                case WidgetId::Ram:
                    if (m_settings.showCpuRam) {
                        enabled = true;
                        w.text = std::to_wstring(m_ramPct) + L"%";
                        chipW = 26.0f * rScale + MeasureTextW(w.text, m_fmtSmall) + 10.0f * rScale;
                    }
                    break;
                case WidgetId::Network:
                    if (m_settings.showNetworkSpeed) {
                        enabled = true;
                        w.text = m_netText;
                        chipW = 26.0f * rScale + MeasureTextW(w.text, m_fmtSmall) + 10.0f * rScale;
                    }
                    break;
                case WidgetId::Volume:
                    if (m_settings.showVolumeWidget) {
                        enabled = true;
                        w.text = m_volMuted ? L"Mute" : (std::to_wstring(m_volPct) + L"%");
                        chipW = 26.0f * rScale + MeasureTextW(w.text, m_fmtSmall) + 10.0f * rScale;
                    }
                    break;
                case WidgetId::Battery:
                    if (m_settings.showBatteryWidget && m_hasBattery) {
                        enabled = true;
                        w.text = std::to_wstring(m_batPct) + L"%";
                        chipW = 28.0f * rScale + MeasureTextW(w.text, m_fmtSmall) + 10.0f * rScale;
                    }
                    break;
                case WidgetId::Clock:
                    enabled = true;
                    w.text = m_clockText;
                    chipW = 26.0f * rScale + MeasureTextW(w.text, m_fmtClock) + 12.0f * rScale;
                    break;
            }

            if (enabled) {
                w.rect = Gdiplus::RectF(0, btnY, chipW, btnSz);
                m_widgets.push_back(w);
            }
        }

        float totalRightInner = btnSz; // Quick settings button on far right
        for (const auto& w : m_widgets) {
            totalRightInner += w.rect.Width + chipGap;
        }
        float rightIslandW = totalRightInner + innerPad * 2.0f;
        float rightIslandX = static_cast<float>(m_canvasW) - m_edgePad - rightIslandW;
        m_rightIsland = Gdiplus::RectF(rightIslandX, m_barY, rightIslandW, m_barH);

        float rx = rightIslandX + innerPad;
        for (auto& w : m_widgets) {
            w.rect.X = rx;
            if (w.id == WidgetId::Media) {
                float mBtn = 18.0f * rScale;
                float my = w.rect.Y + (w.rect.Height - mBtn) * 0.5f;
                float mxEnd = w.rect.GetRight() - 6.0f * rScale;
                w.subNext = Gdiplus::RectF(mxEnd - mBtn, my, mBtn, mBtn);
                w.subPlay = Gdiplus::RectF(w.subNext.X - 2.0f * rScale - mBtn, my, mBtn, mBtn);
                w.subPrev = Gdiplus::RectF(w.subPlay.X - 2.0f * rScale - mBtn, my, mBtn, mBtn);
            }
            rx += w.rect.Width + chipGap;
        }
        m_quickSetRect = Gdiplus::RectF(rx, btnY, btnSz, btnSz);

        // 3. Center App Dock Island
        if (m_settings.showAppDock && !m_dockApps.empty()) {
            float appSlot = btnSz + 4.0f * rScale;
            float dockInnerW = m_dockApps.size() * appSlot + (m_dockApps.size() - 1) * (4.0f * rScale);
            float dockW = dockInnerW + innerPad * 2.0f;

            // Center on bar while avoiding overlap with left/right islands
            float idealX = (m_canvasW - dockW) * 0.5f;
            float minX = m_leftIsland.GetRight() + 10.0f * m_scale;
            float maxX = m_rightIsland.X - 10.0f * m_scale - dockW;
            if (maxX >= minX) {
                idealX = (max)(minX, (min)(maxX, idealX));
            } else {
                idealX = minX;
            }

            m_centerIsland = Gdiplus::RectF(idealX, m_barY, dockW, m_barH);
            float ax = idealX + innerPad;
            for (auto& app : m_dockApps) {
                app.rect = Gdiplus::RectF(ax, btnY, appSlot, btnSz);
                ax += appSlot + 4.0f * rScale;
            }
        } else {
            m_centerIsland = Gdiplus::RectF(0, 0, 0, 0);
        }

        if (m_settings.layout == LayoutStyle::EdgeSeamless) {
            m_fullBarRect = Gdiplus::RectF(0.0f, m_barY, static_cast<float>(m_canvasW), m_barH);
        } else {
            m_fullBarRect = Gdiplus::RectF(m_edgePad, m_barY, static_cast<float>(m_canvasW) - m_edgePad * 2.0f, m_barH);
        }
    }

    // ========================================================================
    // Rendering Engine
    // ========================================================================
    void EnsureBackbuffer() {
        if (m_memDC && m_dibW == m_canvasW && m_dibH == m_canvasH) return;
        FreeBackbuffer();
        HDC sdc = GetDC(nullptr);
        m_memDC = CreateCompatibleDC(sdc);
        BITMAPINFO bmi = {};
        bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        bmi.bmiHeader.biWidth = m_canvasW;
        bmi.bmiHeader.biHeight = -m_canvasH;
        bmi.bmiHeader.biPlanes = 1;
        bmi.bmiHeader.biBitCount = 32;
        bmi.bmiHeader.biCompression = BI_RGB;
        m_dibBmp = CreateDIBSection(sdc, &bmi, DIB_RGB_COLORS, &m_dibBits, nullptr, 0);
        if (m_dibBmp) {
            m_oldBmp = SelectObject(m_memDC, m_dibBmp);
            m_dibW = m_canvasW;
            m_dibH = m_canvasH;
        }
        ReleaseDC(nullptr, sdc);
    }

    void FreeBackbuffer() {
        if (m_memDC) {
            if (m_oldBmp) SelectObject(m_memDC, m_oldBmp);
            if (m_dibBmp) DeleteObject(m_dibBmp);
            DeleteDC(m_memDC);
        }
        m_memDC = nullptr;
        m_dibBmp = nullptr;
        m_oldBmp = nullptr;
        m_dibBits = nullptr;
        m_dibW = 0;
        m_dibH = 0;
    }

    void DrawIslandShadow(Gdiplus::Graphics& g, const Gdiplus::RectF& rc, float radius) {
        if (rc.Width <= 0.0f) return;
        const float strength = IsLightTheme() ? 0.38f : (IsCompact() ? 0.55f : 0.72f);
        for (int i = 4; i >= 1; --i) {
            float exp = i * 1.8f * m_scale;
            float offY = (m_settings.edge == BarEdge::Top ? 1.0f : -0.6f) * i * 1.2f * m_scale;
            BYTE a = static_cast<BYTE>((min)(255.0f, (20.0f / i) * strength));
            Gdiplus::GraphicsPath sp;
            AddUniformRoundRect(sp, rc.X - exp, rc.Y - exp * 0.5f + offY,
                                rc.Width + exp * 2.0f, rc.Height + exp * 1.4f, radius + exp * 0.5f);
            Gdiplus::SolidBrush sb(Gdiplus::Color(a, 0, 0, 0));
            g.FillPath(&sb, &sp);
        }
    }

    void FillIslandSurface(Gdiplus::Graphics& g, const Gdiplus::RectF& rc,
                           float radius, Gdiplus::Bitmap* blurBmp) {
        if (rc.Width <= 0.0f) return;
        Gdiplus::GraphicsPath path;
        if (radius <= 0.5f) {
            path.AddRectangle(rc);
        } else {
            AddUniformRoundRect(path, rc.X, rc.Y, rc.Width, rc.Height, radius);
        }

        const float transp = static_cast<float>(m_settings.transparentBackground) / 100.0f;
        const float tintStrength = 1.0f - transp;
        Gdiplus::PointF ptTop(rc.X, rc.Y - 1.0f);
        Gdiplus::PointF ptBot(rc.X, rc.GetBottom() + 1.0f);

        if (blurBmp && UsesBlurBackdrop()) {
            Gdiplus::TextureBrush tb(blurBmp, Gdiplus::WrapModeClamp);
            g.FillPath(&tb, &path);
        }

        if (m_settings.theme == ThemeMode::MpbdBlur) {
            Gdiplus::LinearGradientBrush rim(
                ptTop, ptBot, Gdiplus::Color(48, 255, 255, 255), Gdiplus::Color(18, 255, 255, 255));
            rim.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
            Gdiplus::Pen pen(&rim, 1.0f * m_scale);
            g.DrawPath(&pen, &path);
        } else if (m_settings.theme == ThemeMode::LiquidGlass) {
            DrawLiquidGlassOverlay(g, path, rc, radius, 0.0f, m_scale);
        } else if (m_settings.theme == ThemeMode::M11Compact) {
            BYTE a = static_cast<BYTE>((max)(0.0f, (min)(255.0f, 132.0f + tintStrength * 123.0f)));
            Gdiplus::SolidBrush fill(Gdiplus::Color(a, 18, 18, 20));
            g.FillPath(&fill, &path);
            Gdiplus::Pen border(Gdiplus::Color(225, 48, 48, 54), 1.0f * m_scale);
            g.DrawPath(&border, &path);
        } else if (m_settings.theme == ThemeMode::MidnightAurora) {
            Gdiplus::LinearGradientBrush veil(
                Gdiplus::PointF(rc.X, rc.Y), Gdiplus::PointF(rc.GetRight(), rc.GetBottom()),
                Gdiplus::Color(28, 56, 189, 248), Gdiplus::Color(28, 139, 92, 246));
            veil.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
            g.FillPath(&veil, &path);

            Gdiplus::LinearGradientBrush rim(
                Gdiplus::PointF(rc.X, rc.Y), Gdiplus::PointF(rc.GetRight(), rc.GetBottom()),
                Gdiplus::Color(145, 56, 189, 248), Gdiplus::Color(135, 167, 139, 250));
            rim.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
            Gdiplus::Pen pen(&rim, 1.15f * m_scale);
            g.DrawPath(&pen, &path);
        } else if (m_settings.theme == ThemeMode::DaylightFrost) {
            Gdiplus::LinearGradientBrush rim(
                ptTop, ptBot, Gdiplus::Color(215, 255, 255, 255), Gdiplus::Color(90, 148, 163, 184));
            rim.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
            Gdiplus::Pen pen(&rim, 1.1f * m_scale);
            g.DrawPath(&pen, &path);
        } else {
            // MPBD Legacy
            BYTE a = static_cast<BYTE>((max)(0.0f, (min)(255.0f, 122.0f + tintStrength * 133.0f)));
            Gdiplus::LinearGradientBrush bg(
                ptTop, ptBot, Gdiplus::Color(a, 30, 30, 34), Gdiplus::Color(a, 20, 20, 24));
            bg.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
            g.FillPath(&bg, &path);

            Gdiplus::LinearGradientBrush rim(
                ptTop, ptBot, Gdiplus::Color(48, 255, 255, 255), Gdiplus::Color(18, 255, 255, 255));
            rim.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
            Gdiplus::Pen pen(&rim, 1.0f * m_scale);
            g.DrawPath(&pen, &path);
        }
    }

    void DrawHoverPill(Gdiplus::Graphics& g, const Gdiplus::RectF& rc, float hov) {
        if (hov <= 0.01f || rc.Width <= 0.0f) return;
        float r = (min)(rc.Height * 0.42f, GetBarCornerRadius(m_barH) * 0.78f);
        if (r < 5.0f * m_scale) r = 5.0f * m_scale;
        Gdiplus::GraphicsPath p;
        AddUniformRoundRect(p, rc.X, rc.Y, rc.Width, rc.Height, r);

        if (IsLiquidGlass()) {
            DrawLiquidGlassOverlay(g, p, rc, r, hov * 0.6f, m_scale);
        } else {
            Gdiplus::Color c = IsLightTheme()
                ? Gdiplus::Color(static_cast<BYTE>(28.0f * hov), 15, 23, 42)
                : Gdiplus::Color(static_cast<BYTE>(34.0f * hov), 255, 255, 255);
            Gdiplus::SolidBrush b(c);
            g.FillPath(&b, &p);
        }
    }

    void RenderAndPresent() {
        if (!m_hwnd || m_hiddenByFullscreen) return;
        EnsureBackbuffer();
        if (!m_dibBits) return;

        memset(m_dibBits, 0, static_cast<size_t>(m_canvasW) * m_canvasH * 4);

        Gdiplus::Bitmap canvas(m_canvasW, m_canvasH, m_canvasW * 4,
                               PixelFormat32bppPARGB, static_cast<BYTE*>(m_dibBits));
        Gdiplus::Graphics g(&canvas);
        g.SetSmoothingMode(Gdiplus::SmoothingModeHighQuality);
        g.SetPixelOffsetMode(Gdiplus::PixelOffsetModeHighQuality);
        g.SetInterpolationMode(Gdiplus::InterpolationModeHighQualityBicubic);

        std::unique_ptr<Gdiplus::Bitmap> blurBmp;
        if (UsesBlurBackdrop() && !m_blurredPixels.empty() &&
            m_blurW == m_canvasW && m_blurH == m_canvasH) {
            blurBmp = std::make_unique<Gdiplus::Bitmap>(
                m_blurW, m_blurH, m_blurW * 4, PixelFormat32bppPARGB,
                reinterpret_cast<BYTE*>(m_blurredPixels.data()));
        }

        const bool isLight = IsLightTheme();
        const float rScale = m_scale * (max)(0.82f, (min)(1.22f, m_hRatio));
        const float radius = GetBarCornerRadius(m_barH);

        // 1. Draw Bar / Island Containers
        if (m_settings.layout == LayoutStyle::SplitIslands) {
            DrawIslandShadow(g, m_leftIsland, radius);
            if (m_centerIsland.Width > 0) DrawIslandShadow(g, m_centerIsland, radius);
            DrawIslandShadow(g, m_rightIsland, radius);

            FillIslandSurface(g, m_leftIsland, radius, blurBmp.get());
            if (m_centerIsland.Width > 0) FillIslandSurface(g, m_centerIsland, radius, blurBmp.get());
            FillIslandSurface(g, m_rightIsland, radius, blurBmp.get());
        } else {
            if (m_settings.layout == LayoutStyle::SingleFloating) {
                DrawIslandShadow(g, m_fullBarRect, radius);
            }
            FillIslandSurface(g, m_fullBarRect, radius, blurBmp.get());
        }

        Gdiplus::Color iconIdle = isLight
            ? Gdiplus::Color(215, 30, 41, 59)
            : Gdiplus::Color(225, 228, 232, 240);
        Gdiplus::Color iconLit = isLight
            ? Gdiplus::Color(255, 2, 132, 199)
            : Gdiplus::Color(255, 255, 255, 255);
        Gdiplus::Color accentCyan = isLight
            ? Gdiplus::Color(255, 2, 132, 199)
            : Gdiplus::Color(255, 56, 189, 248);

        float iconSz = 15.5f * rScale;

        // 2. Left Section: Start + MPRD Run + Active Window Icon
        DrawHoverPill(g, m_startRect, m_hoverStartAnim);
        DrawLucideLayoutGrid(g, m_startRect.X + m_startRect.Width * 0.5f,
                             m_startRect.Y + m_startRect.Height * 0.5f,
                             iconSz, LerpColor(accentCyan, iconLit, m_hoverStartAnim));

        DrawHoverPill(g, m_runRect, m_hoverRunAnim);
        DrawLucideSearch(g, m_runRect.X + m_runRect.Width * 0.5f,
                         m_runRect.Y + m_runRect.Height * 0.5f,
                         iconSz, LerpColor(iconIdle, iconLit, m_hoverRunAnim));

        if (m_settings.showActiveWindow && m_activeAppRect.Width > 0) {
            float icSz = 16.0f * rScale;
            float ix = m_activeAppRect.X + 8.0f * rScale;
            float iy = m_activeAppRect.Y + (m_activeAppRect.Height - icSz) * 0.5f;
            if (m_activeIcon) {
                g.DrawImage(m_activeIcon.get(), Gdiplus::RectF(ix, iy, icSz, icSz));
            } else {
                DrawLucideAppWindow(g, ix + icSz * 0.5f, iy + icSz * 0.5f, icSz, iconIdle);
            }
        }

        // 3. Center App Dock
        if (m_settings.showAppDock) {
            for (const auto& app : m_dockApps) {
                float hov = app.hoverAnim;
                DrawHoverPill(g, app.rect, (max)(hov, app.isActive ? 0.35f : 0.0f));

                float baseIc = 19.0f * rScale * (1.0f + 0.10f * hov);
                float ix = app.rect.X + (app.rect.Width - baseIc) * 0.5f;
                float iy = app.rect.Y + (app.rect.Height - baseIc) * 0.5f - (1.2f * rScale * hov);

                if (app.icon) {
                    g.DrawImage(app.icon.get(), Gdiplus::RectF(ix, iy, baseIc, baseIc));
                } else {
                    DrawLucideAppWindow(g, ix + baseIc * 0.5f, iy + baseIc * 0.5f, baseIc * 0.85f, iconIdle);
                }

                // Active / Running indicator pill dot
                float dotW = (app.isActive ? 12.0f : 4.5f) * rScale;
                float dotH = 2.6f * rScale;
                Gdiplus::Color dotCol = app.isActive
                    ? ((m_settings.theme == ThemeMode::MidnightAurora) ? Gdiplus::Color(255, 167, 139, 250) : accentCyan)
                    : (isLight ? Gdiplus::Color(130, 71, 85, 105) : Gdiplus::Color(140, 200, 205, 215));
                Gdiplus::SolidBrush db(dotCol);
                Gdiplus::GraphicsPath dp;
                AddUniformRoundRect(dp, app.rect.X + (app.rect.Width - dotW) * 0.5f,
                                    app.rect.GetBottom() - dotH - 1.2f * rScale, dotW, dotH, dotH * 0.5f);
                g.FillPath(&db, &dp);
            }
        }

        // 4. Right Section: Modular Live Widgets
        for (const auto& w : m_widgets) {
            DrawHoverPill(g, w.rect, w.hoverAnim);
            float icx = w.rect.X + 13.0f * rScale;
            float icy = w.rect.Y + w.rect.Height * 0.5f;
            float wIconSz = 14.5f * rScale;
            Gdiplus::Color wCol = LerpColor(iconIdle, iconLit, w.hoverAnim);

            switch (w.id) {
                case WidgetId::Media: {
                    DrawLucideMusic(g, icx, icy, wIconSz, accentCyan);
                    float mSz = 12.0f * rScale;
                    DrawLucideSkipBack(g, w.subPrev.X + w.subPrev.Width * 0.5f,
                                       w.subPrev.Y + w.subPrev.Height * 0.5f, mSz, wCol);
                    DrawLucidePlayPause(g, w.subPlay.X + w.subPlay.Width * 0.5f,
                                        w.subPlay.Y + w.subPlay.Height * 0.5f, mSz, iconLit);
                    DrawLucideSkipForward(g, w.subNext.X + w.subNext.Width * 0.5f,
                                          w.subNext.Y + w.subNext.Height * 0.5f, mSz, wCol);
                    break;
                }
                case WidgetId::Cpu:
                    DrawLucideCpu(g, icx, icy, wIconSz,
                                  m_cpuPct >= 85 ? Gdiplus::Color(255, 248, 113, 113) : accentCyan);
                    break;
                case WidgetId::Ram:
                    DrawLucideLayers(g, icx, icy, wIconSz,
                                     m_ramPct >= 88 ? Gdiplus::Color(255, 251, 191, 36) : wCol);
                    break;
                case WidgetId::Network:
                    DrawLucideArrowDownUp(g, icx, icy, wIconSz, Gdiplus::Color(235, 52, 211, 153));
                    break;
                case WidgetId::Volume:
                    DrawLucideVolume(g, icx, icy, wIconSz, m_volPct, m_volMuted,
                                     m_volMuted ? Gdiplus::Color(255, 248, 113, 113) : wCol);
                    break;
                case WidgetId::Battery:
                    DrawLucideBattery(g, icx, icy, wIconSz, m_batPct, m_batCharging,
                                      m_batCharging ? Gdiplus::Color(255, 52, 211, 153)
                                                    : (m_batPct <= 20 ? Gdiplus::Color(255, 248, 113, 113) : wCol));
                    break;
                case WidgetId::Clock:
                    DrawLucideCalendar(g, icx, icy, wIconSz, accentCyan);
                    break;
            }
        }

        // Quick Settings button
        DrawHoverPill(g, m_quickSetRect, m_hoverQuickAnim);
        DrawLucideSliders(g, m_quickSetRect.X + m_quickSetRect.Width * 0.5f,
                          m_quickSetRect.Y + m_quickSetRect.Height * 0.5f,
                          iconSz * 0.94f, LerpColor(iconIdle, iconLit, m_hoverQuickAnim));

        g.Flush(Gdiplus::FlushIntentionSync);

        // 5. DirectWrite Crisp Typography Pass
        if (m_d2dTarget) {
            RECT bindRc = {0, 0, m_canvasW, m_canvasH};
            if (SUCCEEDED(m_d2dTarget->BindDC(m_memDC, &bindRc))) {
                m_d2dTarget->BeginDraw();
                m_d2dTarget->SetTextAntialiasMode(D2D1_TEXT_ANTIALIAS_MODE_GRAYSCALE);

                D2D1_COLOR_F primaryTxt = isLight
                    ? D2D1::ColorF(0.09f, 0.11f, 0.15f, 0.96f)
                    : D2D1::ColorF(0.95f, 0.96f, 0.98f, 0.96f);
                D2D1_COLOR_F secondaryTxt = isLight
                    ? D2D1::ColorF(0.20f, 0.24f, 0.32f, 0.90f)
                    : D2D1::ColorF(0.86f, 0.88f, 0.92f, 0.92f);

                if (m_settings.showActiveWindow && m_activeAppRect.Width > 0) {
                    Gdiplus::RectF tr(
                        m_activeAppRect.X + 29.0f * rScale,
                        m_activeAppRect.Y,
                        m_activeAppRect.Width - 35.0f * rScale,
                        m_activeAppRect.Height);
                    DrawD2DText(m_activeTitle, m_fmtLabel, tr, primaryTxt);
                }

                for (const auto& w : m_widgets) {
                    if (w.id == WidgetId::Media) {
                        Gdiplus::RectF mr(
                            w.rect.X + 24.0f * rScale,
                            w.rect.Y,
                            (max)(20.0f, w.subPrev.X - (w.rect.X + 28.0f * rScale)),
                            w.rect.Height);
                        DrawD2DText(w.text, m_fmtSmall, mr, secondaryTxt);
                    } else if (w.id == WidgetId::Clock) {
                        Gdiplus::RectF cr(
                            w.rect.X + 25.0f * rScale,
                            w.rect.Y,
                            w.rect.Width - 30.0f * rScale,
                            w.rect.Height);
                        DrawD2DText(w.text, m_fmtClock, cr, primaryTxt);
                    } else {
                        Gdiplus::RectF wr(
                            w.rect.X + 24.0f * rScale,
                            w.rect.Y,
                            w.rect.Width - 28.0f * rScale,
                            w.rect.Height);
                        DrawD2DText(w.text, m_fmtSmall, wr, secondaryTxt);
                    }
                }

                m_d2dTarget->EndDraw();
            }
        }

        // 6. Present Layered Window (transparent gaps are 100% click-through!)
        POINT ptSrc = {0, 0};
        POINT ptDst = {m_winX, m_winY};
        SIZE szWnd = {m_canvasW, m_canvasH};
        BLENDFUNCTION blend = {AC_SRC_OVER, 0, 255, AC_SRC_ALPHA};

        HDC sdc = GetDC(nullptr);
        UpdateLayeredWindow(m_hwnd, sdc, &ptDst, &szWnd, m_memDC, &ptSrc, 0, &blend, ULW_ALPHA);
        ReleaseDC(nullptr, sdc);
    }

    // ========================================================================
    // Hit Testing & Interactive Event Handling
    // ========================================================================
    HitKind HitTest(float x, float y, int& outIndex) const {
        outIndex = -1;
        if (m_startRect.Contains(x, y)) return HitKind::StartBtn;
        if (m_runRect.Contains(x, y)) return HitKind::RunBtn;
        if (m_settings.showActiveWindow && m_activeAppRect.Contains(x, y)) return HitKind::ActiveApp;
        if (m_quickSetRect.Contains(x, y)) return HitKind::QuickSettingsBtn;

        if (m_settings.showAppDock) {
            for (size_t i = 0; i < m_dockApps.size(); ++i) {
                if (m_dockApps[i].rect.Contains(x, y)) {
                    outIndex = static_cast<int>(i);
                    return HitKind::DockApp;
                }
            }
        }

        for (size_t i = 0; i < m_widgets.size(); ++i) {
            const auto& w = m_widgets[i];
            if (w.rect.Contains(x, y)) {
                outIndex = static_cast<int>(i);
                if (w.id == WidgetId::Media) {
                    if (w.subPrev.Contains(x, y)) return HitKind::MediaPrev;
                    if (w.subPlay.Contains(x, y)) return HitKind::MediaPlayPause;
                    if (w.subNext.Contains(x, y)) return HitKind::MediaNext;
                }
                return HitKind::WidgetChip;
            }
        }
        return HitKind::None;
    }

    void StartAnimTimer() {
        if (m_hwnd && !m_animTimerActive) {
            m_lastAnimTick = GetTickCount64();
            SetTimer(m_hwnd, kTimerAnim, 16, nullptr);
            m_animTimerActive = true;
        }
    }

    bool NeedsHoverTick() const {
        auto chk = [](float v, bool on) { return on ? (v < 0.99f) : (v > 0.01f); };
        if (chk(m_hoverStartAnim, m_hoverKind == HitKind::StartBtn)) return true;
        if (chk(m_hoverRunAnim, m_hoverKind == HitKind::RunBtn)) return true;
        if (chk(m_hoverQuickAnim, m_hoverKind == HitKind::QuickSettingsBtn)) return true;
        for (size_t i = 0; i < m_dockApps.size(); ++i) {
            if (chk(m_dockApps[i].hoverAnim, m_hoverKind == HitKind::DockApp && m_hoverIndex == static_cast<int>(i))) return true;
        }
        for (size_t i = 0; i < m_widgets.size(); ++i) {
            bool on = (m_hoverIndex == static_cast<int>(i)) &&
                      (m_hoverKind == HitKind::WidgetChip || m_hoverKind == HitKind::MediaPrev ||
                       m_hoverKind == HitKind::MediaPlayPause || m_hoverKind == HitKind::MediaNext);
            if (chk(m_widgets[i].hoverAnim, on)) return true;
        }
        return false;
    }

    static LRESULT CALLBACK StaticWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
        ModernPillBar* self = nullptr;
        if (msg == WM_NCCREATE) {
            auto* cs = reinterpret_cast<CREATESTRUCTW*>(lParam);
            self = static_cast<ModernPillBar*>(cs->lpCreateParams);
            SetWindowLongPtrW(hwnd, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(self));
        } else {
            self = reinterpret_cast<ModernPillBar*>(GetWindowLongPtrW(hwnd, GWLP_USERDATA));
        }
        if (self) return self->HandleMessage(hwnd, msg, wParam, lParam);
        return DefWindowProcW(hwnd, msg, wParam, lParam);
    }

    LRESULT HandleMessage(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
        switch (msg) {
            case WM_MOUSEACTIVATE:
                return MA_NOACTIVATE;

            case kMsgReloadSettings: {
                bool prevHide = m_didHideTaskbar;
                m_settings = GetSettingsSnapshot();
                if (m_settings.hideNativeTaskbar && !prevHide) {
                    SetNativeTaskbarHidden(true);
                    m_didHideTaskbar = true;
                } else if (!m_settings.hideNativeTaskbar && prevHide) {
                    SetNativeTaskbarHidden(false);
                    m_didHideTaskbar = false;
                }
                ComputeMonitorGeometry();
                SetWindowPos(hwnd, HWND_TOPMOST, m_winX, m_winY, m_canvasW, m_canvasH, SWP_NOACTIVATE);
                InitDirect2DAndFonts();
                RebuildWallpaperBlur();
                UpdateAppBarRegistration();
                SampleTelemetry(false);
                ComputeBarLayout();
                RenderAndPresent();
                return 0;
            }

            case kMsgAppBarCallback: {
                if (wParam == ABN_POSCHANGED) {
                    UpdateAppBarRegistration();
                } else if (wParam == ABN_FULLSCREENAPP) {
                    if (m_settings.hideInFullscreen) {
                        m_hiddenByFullscreen = (lParam != 0);
                        ShowWindow(hwnd, m_hiddenByFullscreen ? SW_HIDE : SW_SHOWNA);
                        if (!m_hiddenByFullscreen) RenderAndPresent();
                    }
                }
                return 0;
            }

            case WM_DISPLAYCHANGE:
            case WM_SETTINGCHANGE: {
                ComputeMonitorGeometry();
                SetWindowPos(hwnd, HWND_TOPMOST, m_winX, m_winY, m_canvasW, m_canvasH, SWP_NOACTIVATE);
                RebuildWallpaperBlur();
                UpdateAppBarRegistration();
                ComputeBarLayout();
                RenderAndPresent();
                return 0;
            }

            case WM_TIMER: {
                if (wParam == kTimerTelemetry) {
                    if (g_stopRequested.load()) {
                        DestroyWindow(hwnd);
                        return 0;
                    }
                    bool fs = IsForegroundFullscreen();
                    if (fs != m_hiddenByFullscreen) {
                        m_hiddenByFullscreen = fs;
                        ShowWindow(hwnd, fs ? SW_HIDE : SW_SHOWNA);
                    }
                    if (!m_hiddenByFullscreen) {
                        if (m_settings.hideNativeTaskbar) {
                            SetNativeTaskbarHidden(true);
                        }
                        SampleTelemetry(false);
                        ComputeBarLayout();
                        RenderAndPresent();
                    }
                } else if (wParam == kTimerAnim) {
                    ULONGLONG now = GetTickCount64();
                    float dt = (min)(0.05f, static_cast<float>(now - m_lastAnimTick) / 1000.0f);
                    m_lastAnimTick = now;

                    auto step = [&](float& v, bool on) {
                        float sp = on ? 9.0f : 7.5f;
                        v = on ? (min)(1.0f, v + dt * sp) : (max)(0.0f, v - dt * sp);
                    };
                    step(m_hoverStartAnim, m_hoverKind == HitKind::StartBtn);
                    step(m_hoverRunAnim, m_hoverKind == HitKind::RunBtn);
                    step(m_hoverQuickAnim, m_hoverKind == HitKind::QuickSettingsBtn);
                    for (size_t i = 0; i < m_dockApps.size(); ++i) {
                        step(m_dockApps[i].hoverAnim, m_hoverKind == HitKind::DockApp && m_hoverIndex == static_cast<int>(i));
                    }
                    for (size_t i = 0; i < m_widgets.size(); ++i) {
                        bool on = (m_hoverIndex == static_cast<int>(i)) &&
                                  (m_hoverKind == HitKind::WidgetChip || m_hoverKind == HitKind::MediaPrev ||
                                   m_hoverKind == HitKind::MediaPlayPause || m_hoverKind == HitKind::MediaNext);
                        step(m_widgets[i].hoverAnim, on);
                        m_widgetHover[static_cast<int>(m_widgets[i].id)] = m_widgets[i].hoverAnim;
                    }

                    RenderAndPresent();
                    if (!NeedsHoverTick()) {
                        KillTimer(hwnd, kTimerAnim);
                        m_animTimerActive = false;
                    }
                }
                return 0;
            }

            case WM_MOUSEMOVE: {
                float mx = static_cast<float>(GET_X_LPARAM(lParam));
                float my = static_cast<float>(GET_Y_LPARAM(lParam));

                if (!m_mouseTracked) {
                    TRACKMOUSEEVENT tme = {sizeof(tme), TME_LEAVE, hwnd, 0};
                    TrackMouseEvent(&tme);
                    m_mouseTracked = true;
                }

                // Alt + Drag live widget reordering
                if (m_draggingWidget && m_dragWidgetOrderIdx >= 0) {
                    for (size_t i = 0; i < m_widgets.size(); ++i) {
                        if (mx >= m_widgets[i].rect.X && mx <= m_widgets[i].rect.GetRight()) {
                            WidgetId draggedId = m_widgetOrder[m_dragWidgetOrderIdx];
                            WidgetId targetId = m_widgets[i].id;
                            if (draggedId != targetId) {
                                auto itA = std::find(m_widgetOrder.begin(), m_widgetOrder.end(), draggedId);
                                auto itB = std::find(m_widgetOrder.begin(), m_widgetOrder.end(), targetId);
                                if (itA != m_widgetOrder.end() && itB != m_widgetOrder.end()) {
                                    std::iter_swap(itA, itB);
                                    m_dragWidgetOrderIdx = static_cast<int>(std::distance(m_widgetOrder.begin(), itB));
                                    ComputeBarLayout();
                                    RenderAndPresent();
                                }
                            }
                            break;
                        }
                    }
                    return 0;
                }

                int idx = -1;
                HitKind k = HitTest(mx, my, idx);
                SetCursor(LoadCursorW(nullptr, reinterpret_cast<LPCWSTR>(k == HitKind::None ? IDC_ARROW : IDC_HAND)));
                if (k != m_hoverKind || idx != m_hoverIndex) {
                    m_hoverKind = k;
                    m_hoverIndex = idx;
                    StartAnimTimer();
                }
                return 0;
            }

            case WM_MOUSELEAVE: {
                m_mouseTracked = false;
                if (m_hoverKind != HitKind::None) {
                    m_hoverKind = HitKind::None;
                    m_hoverIndex = -1;
                    StartAnimTimer();
                }
                return 0;
            }

            case WM_MOUSEWHEEL: {
                POINT pt = {GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam)};
                ScreenToClient(hwnd, &pt);
                int idx = -1;
                HitKind k = HitTest(static_cast<float>(pt.x), static_cast<float>(pt.y), idx);
                if (k == HitKind::WidgetChip && idx >= 0 && idx < static_cast<int>(m_widgets.size()) &&
                    m_widgets[idx].id == WidgetId::Volume) {
                    short delta = GET_WHEEL_DELTA_WPARAM(wParam);
                    m_audio.StepVolume(delta > 0 ? 0.03f : -0.03f);
                    m_audio.Query(m_volPct, m_volMuted);
                    ComputeBarLayout();
                    RenderAndPresent();
                }
                return 0;
            }

            case WM_LBUTTONDOWN: {
                float mx = static_cast<float>(GET_X_LPARAM(lParam));
                float my = static_cast<float>(GET_Y_LPARAM(lParam));
                int idx = -1;
                HitKind k = HitTest(mx, my, idx);

                // Alt + Left-Drag on a widget pill reorders widgets live!
                if ((GetKeyState(VK_MENU) & 0x8000) &&
                    (k == HitKind::WidgetChip || k == HitKind::MediaPrev ||
                     k == HitKind::MediaPlayPause || k == HitKind::MediaNext) &&
                    idx >= 0 && idx < static_cast<int>(m_widgets.size())) {
                    WidgetId wid = m_widgets[idx].id;
                    auto it = std::find(m_widgetOrder.begin(), m_widgetOrder.end(), wid);
                    if (it != m_widgetOrder.end()) {
                        m_draggingWidget = true;
                        m_dragWidgetOrderIdx = static_cast<int>(std::distance(m_widgetOrder.begin(), it));
                        SetCapture(hwnd);
                        return 0;
                    }
                }

                switch (k) {
                    case HitKind::StartBtn:
                        TriggerStartMenu();
                        break;
                    case HitKind::RunBtn:
                        TriggerRunDialog();
                        break;
                    case HitKind::QuickSettingsBtn:
                        SendKeyChord(VK_LWIN, 'A');
                        break;
                    case HitKind::DockApp:
                        if (idx >= 0 && idx < static_cast<int>(m_dockApps.size())) {
                            HWND target = m_dockApps[idx].hwnd;
                            if (IsWindow(target)) {
                                if (IsIconic(target)) {
                                    ShowWindow(target, SW_RESTORE);
                                    SetForegroundWindow(target);
                                } else if (GetForegroundWindow() == target) {
                                    ShowWindow(target, SW_MINIMIZE);
                                } else {
                                    SetForegroundWindow(target);
                                }
                            }
                        }
                        break;
                    case HitKind::MediaPrev:
                        SendKeyChord(0, VK_MEDIA_PREV_TRACK);
                        break;
                    case HitKind::MediaPlayPause:
                        SendKeyChord(0, VK_MEDIA_PLAY_PAUSE);
                        break;
                    case HitKind::MediaNext:
                        SendKeyChord(0, VK_MEDIA_NEXT_TRACK);
                        break;
                    case HitKind::WidgetChip:
                        if (idx >= 0 && idx < static_cast<int>(m_widgets.size())) {
                            WidgetId wid = m_widgets[idx].id;
                            if (wid == WidgetId::Volume) {
                                m_audio.ToggleMute();
                                m_audio.Query(m_volPct, m_volMuted);
                                ComputeBarLayout();
                                RenderAndPresent();
                            } else if (wid == WidgetId::Clock) {
                                SendKeyChord(VK_LWIN, 'N');
                            } else if (wid == WidgetId::Cpu || wid == WidgetId::Ram) {
                                ShellExecuteW(nullptr, L"open", L"taskmgr.exe", nullptr, nullptr, SW_SHOWNORMAL);
                            } else if (wid == WidgetId::Network) {
                                ShellExecuteW(nullptr, L"open", L"ms-settings:network-status", nullptr, nullptr, SW_SHOWNORMAL);
                            } else if (wid == WidgetId::Battery) {
                                ShellExecuteW(nullptr, L"open", L"ms-settings:powersleep", nullptr, nullptr, SW_SHOWNORMAL);
                            } else if (wid == WidgetId::Media) {
                                SendKeyChord(0, VK_MEDIA_PLAY_PAUSE);
                            }
                        }
                        break;
                    default:
                        break;
                }
                return 0;
            }

            case WM_LBUTTONUP: {
                if (m_draggingWidget) {
                    m_draggingWidget = false;
                    m_dragWidgetOrderIdx = -1;
                    ReleaseCapture();
                    SaveWidgetOrder(m_widgetOrder);
                }
                return 0;
            }

            case WM_MBUTTONDOWN: {
                float mx = static_cast<float>(GET_X_LPARAM(lParam));
                float my = static_cast<float>(GET_Y_LPARAM(lParam));
                int idx = -1;
                if (HitTest(mx, my, idx) == HitKind::DockApp &&
                    idx >= 0 && idx < static_cast<int>(m_dockApps.size())) {
                    HWND target = m_dockApps[idx].hwnd;
                    if (IsWindow(target)) {
                        PostMessageW(target, WM_CLOSE, 0, 0);
                    }
                }
                return 0;
            }

            case WM_RBUTTONDOWN: {
                float mx = static_cast<float>(GET_X_LPARAM(lParam));
                float my = static_cast<float>(GET_Y_LPARAM(lParam));
                int idx = -1;
                HitKind k = HitTest(mx, my, idx);
                if (k == HitKind::WidgetChip && idx >= 0 && idx < static_cast<int>(m_widgets.size()) &&
                    m_widgets[idx].id == WidgetId::Volume) {
                    ShellExecuteW(nullptr, L"open", L"ms-settings:sound", nullptr, nullptr, SW_SHOWNORMAL);
                }
                return 0;
            }

            case WM_DESTROY: {
                KillTimer(hwnd, kTimerTelemetry);
                KillTimer(hwnd, kTimerAnim);
                m_animTimerActive = false;
                UnregisterAppBar();
                m_hwnd = nullptr;
                PostQuitMessage(0);
                return 0;
            }
        }
        return DefWindowProcW(hwnd, msg, wParam, lParam);
    }
};

DWORD WINAPI BarThreadProc(LPVOID) {
    // Wait up to 8 seconds for explorer.exe's primary Shell_TrayWnd to belong to this process
    DWORD myPid = GetCurrentProcessId();
    bool isShellOwner = false;
    for (int i = 0; i < 32 && !g_stopRequested.load(); ++i) {
        HWND hTray = FindWindowW(L"Shell_TrayWnd", nullptr);
        if (hTray) {
            DWORD trayPid = 0;
            GetWindowThreadProcessId(hTray, &trayPid);
            if (trayPid == myPid) {
                isShellOwner = true;
                break;
            }
            // Another explorer.exe owns the shell — exit quietly without duplicate bars
            return 0;
        }
        Sleep(250);
    }
    if (!isShellOwner || g_stopRequested.load()) return 0;

    ModernPillBar bar;
    bar.RunLoop();
    return 0;
}

} // namespace

// Windhawk Callbacks
BOOL Wh_ModInit() {
    LoadSettings();
    g_stopRequested.store(false);
    g_barThread = CreateThread(nullptr, 0, BarThreadProc, nullptr, 0, nullptr);
    return g_barThread != nullptr ? TRUE : FALSE;
}

void Wh_ModUninit() {
    g_stopRequested.store(true);
    HWND hwnd = g_barHwnd.load();
    if (hwnd && IsWindow(hwnd)) {
        PostMessageW(hwnd, WM_CLOSE, 0, 0);
    }
    if (g_barThread) {
        WaitForSingleObject(g_barThread, 3500);
        CloseHandle(g_barThread);
        g_barThread = nullptr;
    }
    SetNativeTaskbarHidden(false);
}

void Wh_ModSettingsChanged() {
    LoadSettings();
    HWND hwnd = g_barHwnd.load();
    if (hwnd && IsWindow(hwnd)) {
        PostMessageW(hwnd, kMsgReloadSettings, 0, 0);
    }
}
