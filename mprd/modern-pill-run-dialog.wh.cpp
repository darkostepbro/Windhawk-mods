// ==WindhawkMod==
// @id              modern-pill-run-dialog
// @name            MPRD - Modern Pill Run Dialog
// @description     Replaces the classic Windows Run dialog (Win+R) with a clean, modern floating pill bar featuring Translucent 11 Windows Acrylic blur, Minimal 11, Frosted Glass, DirectWrite typography, custom rounded corners, and polished animations.
// @version         1.2.0
// @author          darkostepbro
// @github          https://github.com/darkostepbro
// @include         explorer.exe
// @compilerOptions -lgdi32 -luser32 -ladvapi32 -lgdiplus -ld2d1 -ldwrite -lshell32 -lcomdlg32 -ldwmapi -lshlwapi -lole32 -luuid
// ==/WindhawkMod==

// ==WindhawkModReadme==
/*
# MPRD - Modern Pill Run Dialog

![MPRD Preview](https://raw.githubusercontent.com/darkostepbro/Windhawk-mods/main/mprd/assets/preview.png)

Replaces the legacy Windows Run dialog (`Win + R`) with a sleek, floating pill
command bar built with **DirectWrite anti-aliased typography**, **Windows 11 Acrylic HostBackdrop blur**,
clean vector icons, live Windows `RunMRU` history, inline autocomplete,
quick Admin elevation, custom rounded corners, and fluid hover & launch polish animations.

## Themes
1. **Translucent 11** — Seamless dark Windows 11 Acrylic frosted blur modeled after Windows 11 Settings Styler's *Translucent Seamless* (`TintLuminosityOpacity 0.4`, `TintOpacity 0.35`, subtle Acrylic micro-grain, borderless glass).
2. **Minimal 11** — Ultra-minimalist single expandable dark command bar with outline icons (`🔍`, folder, `( > )`) and inline unified suggestions list.
3. **Frosted Glass** — Apple-inspired translucent liquid glass capsule with bright crystalline rim reflections and a minimal right-arrow (`→`) icon-only action button.
4. **MPRD Legacy** — Classic obsidian matte floating pill with crisp rim lighting and soft diffused shadow.
5. **Midnight Aurora** — Deep smoked indigo-obsidian frosted glass with a subtle cyan-to-violet ambient rim gradient.

## Key Features
- **DirectWrite Smooth Typography** — Razor-sharp grayscale anti-aliased rendering (defaults to **Google Sans**, with graceful fallback to Segoe UI Variable / Segoe UI).
- **Custom with your Favorite Font** — Enter any installed Windows font family name in Mod Settings.
- **Transparent Background (`10% – 100%`)** — Fine-tune background/Acrylic transparency from a dropdown.
- **Rounded Window (`10% – 50%`)** — Custom border radius applied cleanly to the entire Run dialog window (minimum `10%`, never `0`).
- **Responsive Pill Window (`WIDTHxHEIGHT`)** — Customize width and height cleanly; icons, buttons, and typography auto-scale responsively.
- **Show Run Dialog on Taskbar & Move with Cursor** — Explicitly toggle Windows Taskbar presence and cursor dragging.
- **Authentic Bottom-Left (Classic) Position** — Sits snugly above the taskbar and unfolds suggestions upward.
- **Polished Micro-Animations** — Smooth top-to-bottom open/close glides, smooth hover transitions across all controls, gradient hover sweep on the Run button, typing glow feedback, and a luminous 360° in-place icon spin right before launching.

## Screen Resolution Guide (`1920x1080` and Below)
If you use a `1920x1080` display or smaller, adjust **Pill Window (px)** in Mod Settings to fit your screen comfortably:
- **`1280x720` / `1366x768`:** `500x54` or `520x56`
- **`1600x900`:** `560x58`
- **`1920x1080` (100%–125% DPI):** `580x60` or `620x64` *(default)*
- **`2560x1440` / `4K`:** `640x66` or `700x68`

## Keyboard Shortcuts
- `Enter` — Run command
- `Ctrl + Shift + Enter` — Run as Administrator
- `Tab` or `Right Arrow` — Accept inline autocomplete suggestion
- `Up` / `Down` — Navigate Run history & system commands
- `Esc` — Close dropdown or dismiss dialog
- Click the top-left status tab or left icon to toggle **Admin Mode**

---

# MPRD - Modern Pill Run Dialog (Bahasa Indonesia)

Mengganti dialog Run klasik Windows (`Win + R`) menjadi *floating pill command bar*
yang modern, bersih, dan responsif dengan **render teks DirectWrite anti-pecah**,
**efek blur Acrylic seamless bergaya Windows 11**, pilihan desain ultra-minimalis,
sinkronisasi riwayat `RunMRU` Windows, autocomplete instan, mode Admin 1-klik,
custom rounded window, dan animasi polish yang halus.

## Pilihan Tema
1. **Translucent 11** — Efek blur Acrylic gelap seamless bergaya *Translucent Seamless* di Windows 11 Settings Styler (`TintLuminosityOpacity 0.4`, `TintOpacity 0.35`, grain Acrylic halus, kaca tanpa sekat kasar).
2. **Minimal 11** — UI super minimalis dengan satu window menyatu, icon outline bersih (`🔍`, folder, `( > )`), dan daftar saran terintegrasi di dalam kotak yang sama.
3. **Frosted Glass** — Kapsul liquid glass transparan dengan pantulan rim kaca terang dan tombol eksekusi hanya berupa icon panah kanan (`→`) tanpa label teks.
4. **MPRD Legacy** — Permukaan gelap obsidian matte klasik dengan rim highlight tipis dan bayangan lembut.
5. **Midnight Aurora** — Kaca gelap indigo-obsidian dengan aksen gradasi rim tipis cyan ke violet.

## Fitur Utama
- **Teks Mulus DirectWrite** — Bebas piksel/pecah dengan default font **Google Sans** (otomatis fallback ke Segoe UI Variable / Segoe UI jika belum terinstall).
- **Custom with your Favorite Font** — Ganti ke font favorit yang terinstall di PC kamu.
- **Transparent Background (`10% – 100%`)** — Atur tingkat transparansi kaca/background langsung dari dropdown.
- **Rounded Window (`10% – 50%`)** — Custom border radius untuk keseluruhan window Run dialog (minimal `10%`, tidak bisa `0`).
- **Pill Window (px) Responsif (`LEBARxTINGGI`)** — Custom lebar & tinggi pill secara responsif tanpa tampilan melenceng.
- **Show Run Dialog on Taskbar & Move with Cursor** — Opsi menampilkan MPRD di Taskbar Windows dan opsi drag/kunci posisi dengan kursor.
- **Animasi Polish Lengkap** — Animasi buka/tutup dari atas ke bawah, animasi hover halus di seluruh kontrol, gradasi hover di tombol Run, efek ketik, dan putaran 360° bercahaya pada icon kiri sebelum membuka aplikasi.

## Panduan Ukuran untuk Layar Resolusi `1920x1080` ke Bawah
Untuk pengguna layar resolusi **`1920x1080` ke bawah**, silakan ubah pengaturan **Pill Window (px)** di tab **Settings** agar proporsional di layar masing-masing:
- **Layar `1280x720` / `1366x768`:** gunakan `500x54` atau `520x56`
- **Layar `1600x900`:** gunakan `560x58`
- **Layar `1920x1080` (skala 100%–125%):** gunakan `580x60` atau `620x64` *(default)*
- **Layar `2560x1440` / `4K`:** gunakan `640x66` atau `700x68`

## Pintasan Keyboard
- `Enter` — Jalankan perintah
- `Ctrl + Shift + Enter` — Jalankan sebagai Administrator
- `Tab` / `Panah Kanan` — Terima saran autocomplete
- `Panah Atas` / `Bawah` — Navigasi riwayat Run & perintah sistem
- `Esc` — Tutup dropdown atau keluar dari Run dialog
- Klik tab status kiri atas atau icon kiri untuk mengaktifkan/menonaktifkan **Admin Mode**

---

## Credits
Created & maintained by **[darkostepbro](https://github.com/darkostepbro)** (`github.com/darkostepbro`).
*/
// ==/WindhawkModReadme==

// ==WindhawkModSettings==
/*
- theme: "translucent11"
  $name: "Theme"
  $description: "Choose the visual theme for MPRD - Modern Pill Run Dialog."
  $options:
    - "translucent11": "Translucent 11"
    - "minimal11": "Minimal 11"
    - "frostedGlass": "Frosted Glass"
    - "mprdLegacy": "MPRD Legacy"
    - "midnightAurora": "Midnight Aurora"
- transparentBackground: "50"
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
- roundedWindow: 34
  $name: "Rounded Window (%)"
  $description: "Custom border radius for the entire Run dialog window (10 to 50; minimum 10% so corners are never 0). Example: 14 = Minimal rounded, 34 = Smooth pill, 50 = Full capsule."
- position: "centerTop"
  $name: "Dialog Position"
  $description: "Where the floating pill appears on the active monitor."
  $options:
    - "centerTop": "Center Top (Command Bar)"
    - "center": "Screen Center"
    - "bottomLeft": "Bottom Left (Classic)"
- pillWindow: "620x64"
  $name: "Pill Window (px)"
  $description: "Responsive pill size in WIDTHxHEIGHT px (e.g. 620x64, 580x60 for 1080p, 520x56 for 768p). Width: 420-920, Height: 48-88."
- customFont: "Google Sans"
  $name: "Custom with your Favorite Font"
  $description: "Write any installed font family name (default: Google Sans). Falls back to Segoe UI Variable / Segoe UI if unavailable."
- showOnTaskbar: false
  $name: "Show Run Dialog on Taskbar"
  $description: "Show MPRD as an active window icon on the Windows Taskbar while open."
- allowDragMove: true
  $name: "Move Run Dialog with Cursor"
  $description: "Allow dragging the floating pill anywhere on screen with your mouse cursor."
- showStatusTab: true
  $name: "Show Top-Left Status Tab"
  $description: "Shows the attached top-left tab (acts as a one-click Admin toggle; hidden automatically in Minimal 11 theme)."
- showHistoryDropdown: true
  $name: "Show History & Suggestions"
  $description: "Displays recent RunMRU history and quick command suggestions."
- closeOnFocusLoss: true
  $name: "Close When Clicking Outside"
  $description: "Automatically dismisses MPRD when it loses focus."
- enableAnimation: true
  $name: "Smooth Entrance Animation"
  $description: "Enables polished open/close glides, smooth hover transitions, typing glow, and the luminous 360° icon spin before launching."
*/
// ==/WindhawkModSettings==

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <cwctype>
#include <memory>
#include <mutex>
#include <string>
#include <vector>

using std::max;
using std::min;

#include <windows.h>
#include <windowsx.h>
#include <commdlg.h>
#include <d2d1.h>
#include <dwmapi.h>
#include <dwrite.h>
#include <gdiplus.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <shobjidl.h>

namespace {

// ============================================================================
// Settings & Theme Types
// ============================================================================
enum class ThemeMode {
    Translucent11 = 0,
    Minimal11 = 1,
    FrostedGlass = 2,
    MprdLegacy = 3,
    MidnightAurora = 4,
};

enum class DialogPosition {
    CenterTop = 0,
    Center = 1,
    BottomLeft = 2,
};

struct ModSettings {
    ThemeMode theme = ThemeMode::Translucent11;
    int transparentBackground = 50; // 10..100 (%)
    int roundedWindow = 34;         // 10..50 (% of pill height, minimum strictly 10%)
    DialogPosition position = DialogPosition::CenterTop;
    int pillWidth = 620;
    int pillHeight = 64;
    std::wstring customFont = L"Google Sans";
    bool showOnTaskbar = false;
    bool allowDragMove = true;
    bool showStatusTab = true;
    bool showHistoryDropdown = true;
    bool closeOnFocusLoss = true;
    bool enableAnimation = true;
};

ModSettings g_settings;
std::mutex g_settingsMutex;
std::atomic<HWND> g_activeDialogHwnd{nullptr};
std::atomic<bool> g_modUnloading{false};

std::wstring TrimW(const std::wstring& str) {
    size_t start = str.find_first_not_of(L" \t\r\n");
    if (start == std::wstring::npos) return L"";
    size_t end = str.find_last_not_of(L" \t\r\n");
    return str.substr(start, end - start + 1);
}

void ParsePillWindowSize(const std::wstring& raw, int& outW, int& outH) {
    outW = 620;
    outH = 64;

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
        outW = nums[0];
        outH = static_cast<int>(std::round(outW * (64.0f / 620.0f)));
    }

    if (outW < 420) outW = 420;
    if (outW > 920) outW = 920;
    if (outH < 48) outH = 48;
    if (outH > 88) outH = 88;
}

void LoadSettings() {
    ModSettings s;

    PCWSTR themeStr = Wh_GetStringSetting(L"theme");
    if (themeStr) {
        if (wcscmp(themeStr, L"minimal11") == 0) {
            s.theme = ThemeMode::Minimal11;
        } else if (wcscmp(themeStr, L"frostedGlass") == 0 || wcscmp(themeStr, L"frostedLight") == 0) {
            s.theme = ThemeMode::FrostedGlass;
        } else if (wcscmp(themeStr, L"mprdLegacy") == 0) {
            s.theme = ThemeMode::MprdLegacy;
        } else if (wcscmp(themeStr, L"midnightAurora") == 0) {
            s.theme = ThemeMode::MidnightAurora;
        } else {
            s.theme = ThemeMode::Translucent11;
        }
        Wh_FreeStringSetting(themeStr);
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
    if (rw < 10) rw = 10; // Strictly enforce minimum 10% (cannot be 0)
    if (rw > 50) rw = 50;
    s.roundedWindow = rw;

    PCWSTR posStr = Wh_GetStringSetting(L"position");
    if (posStr) {
        if (wcscmp(posStr, L"center") == 0) {
            s.position = DialogPosition::Center;
        } else if (wcscmp(posStr, L"bottomLeft") == 0) {
            s.position = DialogPosition::BottomLeft;
        } else {
            s.position = DialogPosition::CenterTop;
        }
        Wh_FreeStringSetting(posStr);
    }

    PCWSTR pillWinStr = Wh_GetStringSetting(L"pillWindow");
    if (pillWinStr) {
        ParsePillWindowSize(pillWinStr, s.pillWidth, s.pillHeight);
        Wh_FreeStringSetting(pillWinStr);
    }

    PCWSTR fontStr = Wh_GetStringSetting(L"customFont");
    if (fontStr) {
        std::wstring trimmed = TrimW(fontStr);
        if (!trimmed.empty()) {
            s.customFont = trimmed;
        }
        Wh_FreeStringSetting(fontStr);
    }

    s.showOnTaskbar = Wh_GetIntSetting(L"showOnTaskbar") != 0;
    s.allowDragMove = Wh_GetIntSetting(L"allowDragMove") != 0;
    s.showStatusTab = Wh_GetIntSetting(L"showStatusTab") != 0;
    s.showHistoryDropdown = Wh_GetIntSetting(L"showHistoryDropdown") != 0;
    s.closeOnFocusLoss = Wh_GetIntSetting(L"closeOnFocusLoss") != 0;
    s.enableAnimation = Wh_GetIntSetting(L"enableAnimation") != 0;

    std::lock_guard<std::mutex> lock(g_settingsMutex);
    g_settings = s;
}

ModSettings GetSettingsSnapshot() {
    std::lock_guard<std::mutex> lock(g_settingsMutex);
    return g_settings;
}

// ============================================================================
// String, RunMRU & Built-In Commands with Descriptions
// ============================================================================
std::wstring ToLowerW(const std::wstring& str) {
    std::wstring res = str;
    for (wchar_t& c : res) {
        c = static_cast<wchar_t>(towlower(c));
    }
    return res;
}

enum class SuggestionKind {
    History,
    System,
    Folder,
    Web,
};

struct SuggestionItem {
    std::wstring command;
    std::wstring displayTitle;
    std::wstring description;
    std::wstring badge;
    SuggestionKind kind;
};

struct BuiltInEntry {
    const wchar_t* cmd;
    const wchar_t* title;
    const wchar_t* desc;
};

const std::vector<BuiltInEntry>& GetBuiltInCommands() {
    static const std::vector<BuiltInEntry> cmds = {
        {L"cmd", L"CMD", L"Command prompt and run shell commands"},
        {L"control", L"Control Panel", L"Control panel and utility system for Windows"},
        {L"powershell", L"PowerShell", L"Windows PowerShell command shell"},
        {L"wt", L"Windows Terminal", L"Modern tabbed terminal host"},
        {L"notepad", L"Notepad", L"Quick plain-text editor"},
        {L"explorer", L"File Explorer", L"Browse files and folders"},
        {L"taskmgr", L"Task Manager", L"Monitor processes and performance"},
        {L"regedit", L"Registry Editor", L"Edit Windows registry configuration"},
        {L"msconfig", L"System Configuration", L"Boot and startup system utility"},
        {L"services.msc", L"Services", L"Manage Windows background services"},
        {L"devmgmt.msc", L"Device Manager", L"View and manage system hardware"},
        {L"diskmgmt.msc", L"Disk Management", L"Manage storage drives and partitions"},
        {L"eventvwr.msc", L"Event Viewer", L"Inspect system and application logs"},
        {L"appwiz.cpl", L"Programs & Features", L"Uninstall or change installed apps"},
        {L"ncpa.cpl", L"Network Connections", L"Configure network adapters"},
        {L"ms-settings:", L"Windows Settings", L"Open Windows 11 Settings app"},
        {L"shell:startup", L"Startup Folder", L"Open current user startup directory"},
        {L"%appdata%", L"AppData Roaming", L"Open roaming application data folder"},
        {L"%localappdata%", L"AppData Local", L"Open local application data folder"},
        {L"%temp%", L"Temp Folder", L"Open Windows temporary files folder"},
        {L"calc", L"Calculator", L"Open Windows Calculator"},
        {L"mspaint", L"Paint", L"Open Microsoft Paint image editor"},
        {L"snippingtool", L"Snipping Tool", L"Capture screenshots and recordings"},
        {L"mstsc", L"Remote Desktop", L"Connect to a remote Windows PC"},
        {L"winver", L"About Windows", L"Display Windows version details"},
    };
    return cmds;
}

SuggestionKind ClassifyCommand(const std::wstring& cmd, bool isHistory) {
    std::wstring lower = ToLowerW(cmd);
    if (lower.rfind(L"http://", 0) == 0 || lower.rfind(L"https://", 0) == 0 ||
        lower.rfind(L"www.", 0) == 0) {
        return SuggestionKind::Web;
    }
    if ((cmd.size() >= 2 && cmd[1] == L':') ||
        cmd.rfind(L"\\\\", 0) == 0 ||
        cmd.rfind(L"%", 0) == 0 ||
        lower.rfind(L"shell:", 0) == 0) {
        return SuggestionKind::Folder;
    }
    return isHistory ? SuggestionKind::History : SuggestionKind::System;
}

std::wstring LookupKnownDescription(const std::wstring& cmd, SuggestionKind kind) {
    std::wstring lw = ToLowerW(cmd);
    for (const auto& b : GetBuiltInCommands()) {
        if (ToLowerW(b.cmd) == lw) return b.desc;
    }
    switch (kind) {
        case SuggestionKind::Web: return L"Open web address in default browser";
        case SuggestionKind::Folder: return L"Open local directory or system path";
        case SuggestionKind::System: return L"Windows system utility";
        case SuggestionKind::History:
        default: return L"Recent command from Windows Run history";
    }
}

std::vector<std::wstring> LoadRunMRU() {
    std::vector<std::wstring> history;
    HKEY hKey = nullptr;
    if (RegOpenKeyExW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU",
            0, KEY_READ, &hKey) != ERROR_SUCCESS) {
        return history;
    }

    wchar_t mruOrder[64] = {};
    DWORD mruSize = sizeof(mruOrder);
    DWORD type = 0;
    if (RegQueryValueExW(hKey, L"MRUList", nullptr, &type,
                         reinterpret_cast<LPBYTE>(mruOrder),
                         &mruSize) == ERROR_SUCCESS &&
        type == REG_SZ) {
        for (size_t i = 0; mruOrder[i] != L'\0'; ++i) {
            wchar_t valName[2] = {mruOrder[i], L'\0'};
            wchar_t buf[1024] = {};
            DWORD bufSize = sizeof(buf);
            DWORD valType = 0;
            if (RegQueryValueExW(hKey, valName, nullptr, &valType,
                                 reinterpret_cast<LPBYTE>(buf),
                                 &bufSize) == ERROR_SUCCESS &&
                valType == REG_SZ) {
                std::wstring entry = buf;
                if (entry.size() >= 2 &&
                    entry[entry.size() - 2] == L'\\' &&
                    entry[entry.size() - 1] == L'1') {
                    entry.resize(entry.size() - 2);
                }
                entry = TrimW(entry);
                if (!entry.empty()) {
                    history.push_back(entry);
                }
            }
        }
    }

    RegCloseKey(hKey);
    return history;
}

void SaveToRunMRU(const std::wstring& command) {
    std::wstring clean = TrimW(command);
    if (clean.empty()) return;

    std::vector<std::wstring> entries = LoadRunMRU();
    std::wstring lowerClean = ToLowerW(clean);
    entries.erase(
        std::remove_if(entries.begin(), entries.end(),
                       [&](const std::wstring& s) {
                           return ToLowerW(s) == lowerClean;
                       }),
        entries.end());

    entries.insert(entries.begin(), clean);
    if (entries.size() > 26) {
        entries.resize(26);
    }

    HKEY hKey = nullptr;
    if (RegCreateKeyExW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU",
            0, nullptr, 0, KEY_WRITE, nullptr, &hKey,
            nullptr) != ERROR_SUCCESS) {
        return;
    }

    std::wstring mruOrder;
    for (size_t i = 0; i < entries.size(); ++i) {
        wchar_t ch = static_cast<wchar_t>(L'a' + i);
        mruOrder.push_back(ch);
        wchar_t valName[2] = {ch, L'\0'};
        std::wstring stored = entries[i] + L"\\1";
        RegSetValueExW(hKey, valName, 0, REG_SZ,
                       reinterpret_cast<const BYTE*>(stored.c_str()),
                       static_cast<DWORD>((stored.size() + 1) * sizeof(wchar_t)));
    }

    RegSetValueExW(hKey, L"MRUList", 0, REG_SZ,
                   reinterpret_cast<const BYTE*>(mruOrder.c_str()),
                   static_cast<DWORD>((mruOrder.size() + 1) * sizeof(wchar_t)));

    RegCloseKey(hKey);
}

// ============================================================================
// Command Execution (Matches Native Windows Run Semantics)
// ============================================================================
bool ExecuteRunCommand(const std::wstring& rawInput,
                       const std::wstring& workingDir,
                       bool runAsAdmin,
                       std::wstring& outError) {
    std::wstring trimmed = TrimW(rawInput);
    if (trimmed.empty()) {
        outError = L"Enter a command to run";
        return false;
    }

    wchar_t expandedBuf[2048] = {};
    DWORD expLen = ExpandEnvironmentStringsW(trimmed.c_str(), expandedBuf, 2048);
    std::wstring expanded = (expLen > 0 && expLen < 2048) ? expandedBuf : trimmed;

    std::wstring file;
    std::wstring params;

    if (!expanded.empty() && expanded[0] == L'"') {
        size_t closeQuote = expanded.find(L'"', 1);
        if (closeQuote != std::wstring::npos) {
            file = expanded.substr(1, closeQuote - 1);
            if (closeQuote + 1 < expanded.size()) {
                params = TrimW(expanded.substr(closeQuote + 1));
            }
        } else {
            file = expanded.substr(1);
        }
    } else {
        DWORD attrs = GetFileAttributesW(expanded.c_str());
        bool isUri = expanded.find(L"://") != std::wstring::npos ||
                     expanded.rfind(L"ms-settings:", 0) == 0 ||
                     expanded.rfind(L"shell:", 0) == 0;
        if (attrs != INVALID_FILE_ATTRIBUTES || isUri) {
            file = expanded;
        } else {
            size_t spacePos = expanded.find(L' ');
            if (spacePos != std::wstring::npos) {
                file = expanded.substr(0, spacePos);
                params = TrimW(expanded.substr(spacePos + 1));
            } else {
                file = expanded;
            }
        }
    }

    SHELLEXECUTEINFOW sei = {};
    sei.cbSize = sizeof(sei);
    sei.fMask = SEE_MASK_FLAG_NO_UI | SEE_MASK_DOENVSUBST | SEE_MASK_UNICODE;
    sei.hwnd = nullptr;
    sei.lpVerb = runAsAdmin ? L"runas" : nullptr;
    sei.lpFile = file.c_str();
    sei.lpParameters = params.empty() ? nullptr : params.c_str();
    sei.lpDirectory = workingDir.empty() ? nullptr : workingDir.c_str();
    sei.nShow = SW_SHOWNORMAL;

    if (ShellExecuteExW(&sei)) {
        SaveToRunMRU(trimmed);
        return true;
    }

    DWORD err = GetLastError();
    if (err == ERROR_CANCELLED) {
        outError = L"Elevation cancelled";
        return false;
    }

    if (!params.empty()) {
        sei.lpFile = expanded.c_str();
        sei.lpParameters = nullptr;
        if (ShellExecuteExW(&sei)) {
            SaveToRunMRU(trimmed);
            return true;
        }
    }

    outError = L"Cannot find \"" + file + L"\"";
    return false;
}

// ============================================================================
// Windows 11 Acrylic HostBackdrop Blur Shader (Matches Translucent Seamless!)
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
            outRow[x] = 0xFF000000u |
                        ((sumR / div) << 16) |
                        ((sumG / div) << 8) |
                        (sumB / div);

            int addX = (min)(w - 1, x + r + 1);
            int remX = (max)(0, x - r);
            uint32_t addPx = row[addX];
            uint32_t remPx = row[remX];

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
            dst[y * w + x] = 0xFF000000u |
                             ((sumR / div) << 16) |
                             ((sumG / div) << 8) |
                             (sumB / div);

            int addY = (min)(h - 1, y + r + 1);
            int remY = (max)(0, y - r);
            uint32_t addPx = src[addY * w + x];
            uint32_t remPx = src[remY * w + x];

            sumB += (addPx & 0xFF) - (remPx & 0xFF);
            sumG += ((addPx >> 8) & 0xFF) - ((remPx >> 8) & 0xFF);
            sumR += ((addPx >> 16) & 0xFF) - ((remPx >> 16) & 0xFF);
        }
    }
}

// Applies authentic Windows 11 AcrylicBrush pipeline:
//   1. 3-pass Gaussian-approx HostBackdrop blur (crisp visible frost, never muddy soup!)
//   2. Saturation vibrancy + Luminosity compression (TintLuminosityOpacity = 0.40)
//   3. Tint blend (TintOpacity = 0.35 baseline, scaled by Transparent Background %)
//   4. Subtle deterministic Acrylic micro-grain noise
void ApplyWindows11AcrylicShader(std::vector<uint32_t>& pixels,
                                 int w, int h, int radius,
                                 ThemeMode theme, int transparentBgPercent) {
    if (w <= 0 || h <= 0 || pixels.size() < static_cast<size_t>(w) * h) return;

    std::vector<uint32_t> temp(static_cast<size_t>(w) * h);
    int r = (max)(3, radius);
    for (int pass = 0; pass < 3; ++pass) {
        BoxBlurHorizontal(pixels.data(), temp.data(), w, h, r);
        BoxBlurVertical(temp.data(), pixels.data(), w, h, r);
    }

    // transparentBgPercent: 10..100 (higher = clearer glass, lower = deeper tint)
    const float transp = static_cast<float>(transparentBgPercent) / 100.0f;
    const float tintStrength = 1.0f - transp; // 0.90 at 10% -> 0.50 at 50% -> 0.00 at 100%

    float tintR = 22.0f, tintG = 24.0f, tintB = 28.0f;
    float tintOpacity = 0.35f;
    float lumOpacity = 0.40f;
    float satBoost = 1.18f;
    float noiseAmp = 3.2f;

    if (theme == ThemeMode::Translucent11) {
        // Matches Windows 11 Settings Styler "Translucent Seamless" (Dark):
        // TintLuminosityOpacity ~ 0.40, TintOpacity ~ 0.35 at 50% default!
        tintR = 22.0f; tintG = 23.0f; tintB = 26.0f;
        tintOpacity = 0.08f + tintStrength * 0.56f; // 0.36 at 50%
        lumOpacity = 0.14f + tintStrength * 0.48f;  // 0.38 at 50%
        satBoost = 1.18f;
        noiseAmp = 3.4f;
    } else if (theme == ThemeMode::FrostedGlass) {
        // Apple Liquid Glass (cool translucent smoky-crystal frost, Photo 4)
        tintR = 165.0f; tintG = 186.0f; tintB = 200.0f;
        tintOpacity = 0.08f + tintStrength * 0.34f; // ~0.25 at 50%
        lumOpacity = 0.10f + tintStrength * 0.22f;
        satBoost = 1.24f;
        noiseAmp = 2.6f;
    } else if (theme == ThemeMode::MidnightAurora) {
        tintR = 20.0f; tintG = 22.0f; tintB = 42.0f;
        tintOpacity = 0.12f + tintStrength * 0.54f;
        lumOpacity = 0.16f + tintStrength * 0.44f;
        satBoost = 1.22f;
        noiseAmp = 3.0f;
    }

    for (int y = 0; y < h; ++y) {
        uint32_t* row = pixels.data() + y * w;
        for (int x = 0; x < w; ++x) {
            uint32_t px = row[x];
            float rC = static_cast<float>((px >> 16) & 0xFF);
            float gC = static_cast<float>((px >> 8) & 0xFF);
            float bC = static_cast<float>(px & 0xFF);

            // 1. Vibrancy boost so blurred colors behind glass stay rich
            float lum = 0.299f * rC + 0.587f * gC + 0.114f * bC;
            rC = (max)(0.0f, (min)(255.0f, lum + (rC - lum) * satBoost));
            gC = (max)(0.0f, (min)(255.0f, lum + (gC - lum) * satBoost));
            bC = (max)(0.0f, (min)(255.0f, lum + (bC - lum) * satBoost));

            // 2. Luminosity blend (keeps bright elements subtly glowing while lifting pure black)
            float targetLum = (theme == ThemeMode::FrostedGlass) ? 132.0f : 30.0f;
            float blendedLum = lum * (1.0f - lumOpacity) + targetLum * lumOpacity;
            float lumDelta = blendedLum - lum;
            rC = (max)(0.0f, (min)(255.0f, rC + lumDelta * 0.65f));
            gC = (max)(0.0f, (min)(255.0f, gC + lumDelta * 0.65f));
            bC = (max)(0.0f, (min)(255.0f, bC + lumDelta * 0.65f));

            // 3. Acrylic TintColor blend
            rC = rC * (1.0f - tintOpacity) + tintR * tintOpacity;
            gC = gC * (1.0f - tintOpacity) + tintG * tintOpacity;
            bC = bC * (1.0f - tintOpacity) + tintB * tintOpacity;

            // 4. Fine Acrylic frosted micro-grain (deterministic hash)
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
// Color Interpolation & GDI+ Vector Icons
// ============================================================================
Gdiplus::Color LerpColor(Gdiplus::Color a, Gdiplus::Color b, float t) {
    t = (max)(0.0f, (min)(1.0f, t));
    auto lerpB = [&](BYTE x, BYTE y) -> BYTE {
        return static_cast<BYTE>(x + (y - x) * t);
    };
    return Gdiplus::Color(
        lerpB(a.GetA(), b.GetA()),
        lerpB(a.GetR(), b.GetR()),
        lerpB(a.GetG(), b.GetG()),
        lerpB(a.GetB(), b.GetB()));
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

void DrawFilledBoltIcon(Gdiplus::Graphics& g, float cx, float cy, float size, Gdiplus::Color color) {
    float s = size * 0.5f;
    Gdiplus::PointF pts[6] = {
        {cx + s * 0.12f, cy - s * 0.95f},
        {cx - s * 0.68f, cy + s * 0.12f},
        {cx - s * 0.04f, cy + s * 0.12f},
        {cx - s * 0.18f, cy + s * 0.95f},
        {cx + s * 0.68f, cy - s * 0.14f},
        {cx + s * 0.04f, cy - s * 0.14f},
    };
    Gdiplus::SolidBrush brush(color);
    g.FillPolygon(&brush, pts, 6);
}

void DrawFilledShieldIcon(Gdiplus::Graphics& g, float cx, float cy, float size, Gdiplus::Color color) {
    float s = size * 0.5f;
    Gdiplus::GraphicsPath path;
    path.StartFigure();
    path.AddLine(cx, cy - s * 0.95f, cx + s * 0.82f, cy - s * 0.60f);
    path.AddBezier(
        cx + s * 0.82f, cy - s * 0.60f,
        cx + s * 0.82f, cy + s * 0.30f,
        cx + s * 0.42f, cy + s * 0.78f,
        cx, cy + s * 0.98f);
    path.AddBezier(
        cx, cy + s * 0.98f,
        cx - s * 0.42f, cy + s * 0.78f,
        cx - s * 0.82f, cy + s * 0.30f,
        cx - s * 0.82f, cy - s * 0.60f);
    path.CloseFigure();

    Gdiplus::SolidBrush brush(color);
    g.FillPath(&brush, &path);
}

void DrawFilledTerminalIcon(Gdiplus::Graphics& g, float cx, float cy, float size,
                            Gdiplus::Color fgColor, Gdiplus::Color cutoutColor) {
    float w = size * 0.92f;
    float h = size * 0.76f;
    float x = cx - w * 0.5f;
    float y = cy - h * 0.5f;

    Gdiplus::GraphicsPath box;
    AddUniformRoundRect(box, x, y, w, h, size * 0.20f);
    Gdiplus::SolidBrush fgBrush(fgColor);
    g.FillPath(&fgBrush, &box);

    Gdiplus::Pen cutPen(cutoutColor, (max)(1.5f, size * 0.11f));
    cutPen.SetStartCap(Gdiplus::LineCapRound);
    cutPen.SetEndCap(Gdiplus::LineCapRound);
    cutPen.SetLineJoin(Gdiplus::LineJoinRound);

    Gdiplus::PointF chev[3] = {
        {x + w * 0.24f, y + h * 0.34f},
        {x + w * 0.44f, y + h * 0.50f},
        {x + w * 0.24f, y + h * 0.66f},
    };
    g.DrawLines(&cutPen, chev, 3);
    g.DrawLine(&cutPen, x + w * 0.54f, y + h * 0.66f, x + w * 0.76f, y + h * 0.66f);
}

void DrawFilledFolderIcon(Gdiplus::Graphics& g, float cx, float cy, float size, Gdiplus::Color color) {
    float w = size;
    float h = size * 0.78f;
    float x = cx - w * 0.5f;
    float y = cy - h * 0.5f;

    Gdiplus::GraphicsPath path;
    AddRoundedRectPath(path, x, y, w * 0.44f, h * 0.30f, size * 0.12f, size * 0.12f, 0.0f, 0.0f);
    Gdiplus::SolidBrush brush(color);
    g.FillPath(&brush, &path);

    Gdiplus::GraphicsPath body;
    AddRoundedRectPath(body, x, y + h * 0.18f, w, h * 0.82f,
                       size * 0.08f, size * 0.14f, size * 0.16f, size * 0.16f);
    g.FillPath(&brush, &body);
}

void DrawFilledPlayIcon(Gdiplus::Graphics& g, float cx, float cy, float size, Gdiplus::Color color) {
    float r = size * 0.48f;
    Gdiplus::PointF pts[3] = {
        {cx - r * 0.58f, cy - r * 0.84f},
        {cx + r * 0.90f, cy},
        {cx - r * 0.58f, cy + r * 0.84f},
    };
    Gdiplus::SolidBrush brush(color);
    Gdiplus::Pen roundPen(color, (max)(1.3f, size * 0.14f));
    roundPen.SetLineJoin(Gdiplus::LineJoinRound);
    g.FillPolygon(&brush, pts, 3);
    g.DrawPolygon(&roundPen, pts, 3);
}

// Clean Right Arrow '->' for Frosted Glass icon-only button
void DrawRightArrowIcon(Gdiplus::Graphics& g, float cx, float cy, float size, Gdiplus::Color color) {
    float half = size * 0.48f;
    Gdiplus::Pen pen(color, (max)(1.7f, size * 0.135f));
    pen.SetStartCap(Gdiplus::LineCapRound);
    pen.SetEndCap(Gdiplus::LineCapRound);
    pen.SetLineJoin(Gdiplus::LineJoinRound);

    g.DrawLine(&pen, cx - half, cy, cx + half * 0.85f, cy);
    Gdiplus::PointF head[3] = {
        {cx + half * 0.12f, cy - half * 0.68f},
        {cx + half * 0.90f, cy},
        {cx + half * 0.12f, cy + half * 0.68f},
    };
    g.DrawLines(&pen, head, 3);
}

// Minimal 11 Outline Search Icon (matches Figma reference)
void DrawOutlineSearchIcon(Gdiplus::Graphics& g, float cx, float cy, float size, Gdiplus::Color color) {
    float r = size * 0.34f;
    float gx = cx - size * 0.08f;
    float gy = cy - size * 0.08f;
    Gdiplus::Pen pen(color, (max)(1.4f, size * 0.085f));
    pen.SetStartCap(Gdiplus::LineCapRound);
    pen.SetEndCap(Gdiplus::LineCapRound);
    g.DrawEllipse(&pen, gx - r, gy - r, r * 2.0f, r * 2.0f);
    g.DrawLine(&pen, gx + r * 0.72f, gy + r * 0.72f, cx + size * 0.44f, cy + size * 0.44f);
}

// Minimal 11 Outline Folder Icon (matches Figma reference)
void DrawOutlineFolderIcon(Gdiplus::Graphics& g, float cx, float cy, float size, Gdiplus::Color color) {
    float w = size;
    float h = size * 0.78f;
    float x = cx - w * 0.5f;
    float y = cy - h * 0.5f;
    Gdiplus::Pen pen(color, (max)(1.3f, size * 0.08f));
    pen.SetStartCap(Gdiplus::LineCapRound);
    pen.SetEndCap(Gdiplus::LineCapRound);
    pen.SetLineJoin(Gdiplus::LineJoinRound);

    Gdiplus::GraphicsPath p;
    p.StartFigure();
    p.AddLine(x + w * 0.08f, y, x + w * 0.38f, y);
    p.AddLine(x + w * 0.48f, y + h * 0.20f, x + w * 0.92f, y + h * 0.20f);
    p.AddArc(x + w - w * 0.16f, y + h * 0.20f, w * 0.16f, h * 0.20f, 270.0f, 90.0f);
    p.AddArc(x + w - w * 0.16f, y + h - h * 0.20f, w * 0.16f, h * 0.20f, 0.0f, 90.0f);
    p.AddArc(x, y + h - h * 0.20f, w * 0.16f, h * 0.20f, 90.0f, 90.0f);
    p.AddArc(x, y, w * 0.16f, h * 0.20f, 180.0f, 90.0f);
    p.CloseFigure();
    g.DrawPath(&pen, &p);
    g.DrawLine(&pen, x + w * 0.38f, y + h * 0.62f, x + w * 0.62f, y + h * 0.62f);
}

// Minimal 11 Circle Chevron Right '( > )' (matches Figma reference)
void DrawCircleChevronRightIcon(Gdiplus::Graphics& g, float cx, float cy, float size, Gdiplus::Color color) {
    float r = size * 0.46f;
    Gdiplus::Pen pen(color, (max)(1.35f, size * 0.08f));
    pen.SetStartCap(Gdiplus::LineCapRound);
    pen.SetEndCap(Gdiplus::LineCapRound);
    pen.SetLineJoin(Gdiplus::LineJoinRound);

    g.DrawEllipse(&pen, cx - r, cy - r, r * 2.0f, r * 2.0f);
    Gdiplus::PointF chev[3] = {
        {cx - r * 0.16f, cy - r * 0.36f},
        {cx + r * 0.24f, cy},
        {cx - r * 0.16f, cy + r * 0.36f},
    };
    g.DrawLines(&pen, chev, 3);
}

// Minimal 11 Bent Return Arrow '↳' (matches Figma reference)
void DrawReturnSubArrowIcon(Gdiplus::Graphics& g, float cx, float cy, float size, Gdiplus::Color color) {
    float s = size * 0.44f;
    Gdiplus::Pen pen(color, (max)(1.3f, size * 0.095f));
    pen.SetStartCap(Gdiplus::LineCapRound);
    pen.SetEndCap(Gdiplus::LineCapRound);
    pen.SetLineJoin(Gdiplus::LineJoinRound);

    Gdiplus::PointF stem[3] = {
        {cx - s * 0.75f, cy - s * 0.72f},
        {cx - s * 0.75f, cy + s * 0.28f},
        {cx + s * 0.78f, cy + s * 0.28f},
    };
    g.DrawLines(&pen, stem, 3);
    Gdiplus::PointF head[3] = {
        {cx + s * 0.28f, cy - s * 0.18f},
        {cx + s * 0.80f, cy + s * 0.28f},
        {cx + s * 0.28f, cy + s * 0.74f},
    };
    g.DrawLines(&pen, head, 3);
}

void DrawFilledClockIcon(Gdiplus::Graphics& g, float cx, float cy, float size,
                         Gdiplus::Color fgColor, Gdiplus::Color handColor) {
    float r = size * 0.48f;
    Gdiplus::SolidBrush brush(fgColor);
    g.FillEllipse(&brush, cx - r, cy - r, r * 2.0f, r * 2.0f);

    Gdiplus::Pen handPen(handColor, (max)(1.25f, size * 0.11f));
    handPen.SetStartCap(Gdiplus::LineCapRound);
    handPen.SetEndCap(Gdiplus::LineCapRound);
    g.DrawLine(&handPen, cx, cy, cx, cy - r * 0.52f);
    g.DrawLine(&handPen, cx, cy, cx + r * 0.42f, cy + r * 0.22f);
}

void DrawFilledGlobeIcon(Gdiplus::Graphics& g, float cx, float cy, float size,
                         Gdiplus::Color fgColor, Gdiplus::Color lineColor) {
    float r = size * 0.48f;
    Gdiplus::SolidBrush brush(fgColor);
    g.FillEllipse(&brush, cx - r, cy - r, r * 2.0f, r * 2.0f);

    Gdiplus::Pen linePen(lineColor, (max)(1.05f, size * 0.09f));
    g.DrawEllipse(&linePen, cx - r * 0.48f, cy - r, r * 0.96f, r * 2.0f);
    g.DrawLine(&linePen, cx - r, cy, cx + r, cy);
}

void DrawFilledAlertIcon(Gdiplus::Graphics& g, float cx, float cy, float size,
                         Gdiplus::Color bgColor, Gdiplus::Color markColor) {
    float r = size * 0.48f;
    Gdiplus::SolidBrush brush(bgColor);
    g.FillEllipse(&brush, cx - r, cy - r, r * 2.0f, r * 2.0f);

    Gdiplus::Pen pen(markColor, (max)(1.35f, size * 0.14f));
    pen.SetStartCap(Gdiplus::LineCapRound);
    pen.SetEndCap(Gdiplus::LineCapRound);
    g.DrawLine(&pen, cx, cy - r * 0.45f, cx, cy + r * 0.08f);

    Gdiplus::SolidBrush dotBrush(markColor);
    float dr = (max)(0.9f, size * 0.09f);
    g.FillEllipse(&dotBrush, cx - dr, cy + r * 0.36f - dr, dr * 2.0f, dr * 2.0f);
}

void DrawMinimalCloseIcon(Gdiplus::Graphics& g, float cx, float cy, float size, Gdiplus::Color color) {
    float half = size * 0.45f;
    Gdiplus::Pen pen(color, (max)(1.45f, size * 0.15f));
    pen.SetStartCap(Gdiplus::LineCapRound);
    pen.SetEndCap(Gdiplus::LineCapRound);
    g.DrawLine(&pen, cx - half, cy - half, cx + half, cy + half);
    g.DrawLine(&pen, cx + half, cy - half, cx - half, cy + half);
}

void DrawCornerBrackets(Gdiplus::Graphics& g, float x, float y, float size, float radius,
                        float strokeW, Gdiplus::Color color) {
    Gdiplus::Pen pen(color, strokeW);
    pen.SetStartCap(Gdiplus::LineCapRound);
    pen.SetEndCap(Gdiplus::LineCapRound);
    float d = radius * 2.0f;
    g.DrawArc(&pen, x, y, d, d, 180.0f, 90.0f);
    g.DrawArc(&pen, x + size - d, y, d, d, 270.0f, 90.0f);
    g.DrawArc(&pen, x + size - d, y + size - d, d, d, 0.0f, 90.0f);
    g.DrawArc(&pen, x, y + size - d, d, d, 90.0f, 90.0f);
}

HICON CreateTaskbarAppIcon() {
    Gdiplus::Bitmap bmp(32, 32, PixelFormat32bppARGB);
    Gdiplus::Graphics g(&bmp);
    g.SetSmoothingMode(Gdiplus::SmoothingModeHighQuality);
    g.Clear(Gdiplus::Color(0, 0, 0, 0));

    Gdiplus::GraphicsPath bg;
    AddUniformRoundRect(bg, 2.0f, 2.0f, 28.0f, 28.0f, 8.0f);
    Gdiplus::LinearGradientBrush fill(
        Gdiplus::PointF(2.0f, 1.0f), Gdiplus::PointF(2.0f, 31.0f),
        Gdiplus::Color(255, 30, 34, 42), Gdiplus::Color(255, 18, 20, 26));
    fill.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
    g.FillPath(&fill, &bg);

    Gdiplus::Pen rim(Gdiplus::Color(170, 56, 189, 248), 1.4f);
    g.DrawPath(&rim, &bg);

    DrawFilledTerminalIcon(g, 16.0f, 16.0f, 16.0f,
                           Gdiplus::Color(255, 56, 189, 248),
                           Gdiplus::Color(255, 18, 24, 34));

    HICON hIcon = nullptr;
    bmp.GetHICON(&hIcon);
    return hIcon;
}

template <typename T>
void SafeRelease(T*& ptr) {
    if (ptr) {
        ptr->Release();
        ptr = nullptr;
    }
}

// ============================================================================
// MPRD - Modern Pill Run Dialog Window Class
// ============================================================================
constexpr UINT_PTR kTimerCaret = 1;
constexpr UINT_PTR kTimerAnim = 2;
constexpr UINT_PTR kTimerErrorClear = 3;
constexpr UINT kMsgExecuteNow = WM_APP + 101;
constexpr wchar_t kWindowClassName[] = L"WindhawkMPRDPillRunDialogWnd";

class ModernRunDialog {
public:
    ModernRunDialog(const std::wstring& workingDir, const ModSettings& settings)
        : m_workingDir(workingDir), m_settings(settings) {
        m_history = LoadRunMRU();
        RebuildSuggestions();
    }

    ~ModernRunDialog() {
        UnregisterTaskbarTab();
        CleanupDirect2D();
        FreeBackbuffer();
        if (m_taskbarIcon) {
            DestroyIcon(m_taskbarIcon);
            m_taskbarIcon = nullptr;
        }
    }

    void RunModal() {
        HRESULT hrCo = CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);
        bool didInitCo = SUCCEEDED(hrCo);

        Gdiplus::GdiplusStartupInput gdiInput;
        ULONG_PTR gdiToken = 0;
        if (Gdiplus::GdiplusStartup(&gdiToken, &gdiInput, nullptr) != Gdiplus::Ok) {
            if (didInitCo) CoUninitialize();
            return;
        }

        HMODULE hMod = GetModModule();
        RegisterWindowClass(hMod);
        ComputeMonitorAndScale();
        InitDirect2DAndFonts();
        ComputeLayoutMetrics();
        CaptureMonitorSnapshotIfNeeded();
        UpdateBlurForWindowPos(m_winX, m_winY);

        DWORD style = WS_POPUP;
        DWORD exStyle = WS_EX_LAYERED | WS_EX_TOPMOST;
        if (m_settings.showOnTaskbar) {
            style |= WS_SYSMENU | WS_MINIMIZEBOX;
            exStyle |= WS_EX_APPWINDOW;
        } else {
            exStyle |= WS_EX_TOOLWINDOW;
        }

        m_hwnd = CreateWindowExW(
            exStyle,
            kWindowClassName,
            L"MPRD - Modern Pill Run Dialog",
            style,
            m_winX,
            m_winY,
            m_canvasW,
            m_canvasH,
            nullptr,
            nullptr,
            hMod,
            this);

        if (!m_hwnd) {
            CleanupDirect2D();
            UnregisterClassW(kWindowClassName, hMod);
            Gdiplus::GdiplusShutdown(gdiToken);
            if (didInitCo) CoUninitialize();
            return;
        }

        if (m_settings.showOnTaskbar) {
            m_taskbarIcon = CreateTaskbarAppIcon();
            if (m_taskbarIcon) {
                SendMessageW(m_hwnd, WM_SETICON, ICON_BIG, reinterpret_cast<LPARAM>(m_taskbarIcon));
                SendMessageW(m_hwnd, WM_SETICON, ICON_SMALL, reinterpret_cast<LPARAM>(m_taskbarIcon));
            }
        }

        g_activeDialogHwnd.store(m_hwnd);

        m_lastAnimTick = GetTickCount64();
        if (m_settings.enableAnimation) {
            m_animState = AnimState::Opening;
            m_openProgress = 0.0f;
            m_animStartTick = m_lastAnimTick;
        } else {
            m_animState = AnimState::Idle;
            m_openProgress = 1.0f;
        }

        RenderAndPresent();
        ShowWindow(m_hwnd, SW_SHOW);

        if (m_settings.showOnTaskbar) {
            RegisterTaskbarTab();
        }

        ForceForeground();

        SetTimer(m_hwnd, kTimerCaret, 530, nullptr);
        if (m_settings.enableAnimation) {
            StartAnimTimer();
        }

        MSG msg;
        while (GetMessageW(&msg, nullptr, 0, 0) > 0) {
            TranslateMessage(&msg);
            DispatchMessageW(&msg);
        }

        UnregisterTaskbarTab();
        g_activeDialogHwnd.store(nullptr);
        CleanupDirect2D();
        UnregisterClassW(kWindowClassName, hMod);
        Gdiplus::GdiplusShutdown(gdiToken);
        if (didInitCo) CoUninitialize();
    }

private:
    enum class HoverTarget {
        None,
        StatusTab,
        LeftBadge,
        BrowseBtn,
        RunBtn,
        CloseBtn,
        InputArea,
        DropdownItem,
    };

    enum class AnimState {
        Opening,
        Idle,
        Executing,
        LaunchPending,
        Launching,
        Closing,
    };

    HWND m_hwnd = nullptr;
    HICON m_taskbarIcon = nullptr;
    ITaskbarList* m_taskbarList = nullptr;
    std::wstring m_workingDir;
    ModSettings m_settings;

    // Direct2D & DirectWrite
    ID2D1Factory* m_d2dFactory = nullptr;
    ID2D1DCRenderTarget* m_d2dTarget = nullptr;
    IDWriteFactory* m_dwriteFactory = nullptr;
    IDWriteTextFormat* m_fmtInput = nullptr;
    IDWriteTextFormat* m_fmtTab = nullptr;
    IDWriteTextFormat* m_fmtButton = nullptr;
    IDWriteTextFormat* m_fmtRow = nullptr;
    IDWriteTextFormat* m_fmtBadge = nullptr;
    std::wstring m_resolvedFontName = L"Segoe UI";

    // Active monitor snapshot for real-time live Acrylic blur
    RECT m_monRect = {};
    std::vector<uint32_t> m_monPixels;
    int m_monW = 0;
    int m_monH = 0;

    // Current blurred region matching window coordinates
    std::vector<uint32_t> m_blurredPixels;
    int m_blurW = 0;
    int m_blurH = 0;
    int m_lastBlurX = -999999;
    int m_lastBlurY = -999999;

    // DPI & Responsive Geometry
    float m_scale = 1.0f;
    float m_hRatio = 1.0f;
    int m_winX = 0;
    int m_winY = 0;
    int m_canvasW = 0;
    int m_canvasH = 0;
    bool m_dropUpward = false;

    float m_padX = 26.0f;
    float m_padTop = 18.0f;
    float m_padBottom = 26.0f;
    float m_tabH = 26.0f;
    float m_pillH = 64.0f;
    float m_pillW = 620.0f;
    float m_dropGap = 8.0f;
    float m_dropRowH = 38.0f;
    float m_dropPadY = 8.0f;
    float m_maxDropReserve = 0.0f;

    Gdiplus::RectF m_tabRect;
    Gdiplus::RectF m_pillRect;
    Gdiplus::RectF m_badgeRect;
    Gdiplus::RectF m_inputRect;
    Gdiplus::RectF m_browseRect;
    Gdiplus::RectF m_runBtnRect;
    Gdiplus::RectF m_closeRect;
    Gdiplus::RectF m_dropdownRect;

    // Text editor state
    std::wstring m_text;
    size_t m_caret = 0;
    size_t m_selAnchor = 0;
    float m_scrollX = 0.0f;
    bool m_caretVisible = true;
    bool m_isSelectingText = false;
    bool m_isDraggingWindow = false;
    POINT m_dragStartCursor = {};
    POINT m_dragStartWin = {};

    // Mode & feedback
    bool m_adminMode = false;
    std::wstring m_errorMsg;
    bool m_dropdownOpen = false;
    int m_selectedSuggestion = -1;
    int m_hoverSuggestion = -1;
    HoverTarget m_hover = HoverTarget::None;
    bool m_mouseTracked = false;
    bool m_browseDialogOpen = false;

    // Suggestions
    std::vector<std::wstring> m_history;
    std::vector<SuggestionItem> m_suggestions;
    std::wstring m_ghostSuffix;

    // Animation & Smooth Hover Transitions
    AnimState m_animState = AnimState::Idle;
    float m_openProgress = 1.0f;
    float m_dropProgress = 0.0f;
    float m_typePulse = 0.0f;
    float m_execProgress = 0.0f;

    float m_hoverTabAnim = 0.0f;
    float m_hoverBadgeAnim = 0.0f;
    float m_hoverBrowseAnim = 0.0f;
    float m_hoverRunAnim = 0.0f;
    float m_hoverCloseAnim = 0.0f;
    float m_hoverDropAnim[5] = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f};

    bool m_hasTriggeredExec = false;
    bool m_execForceAdmin = false;
    std::wstring m_pendingCommand;
    ULONGLONG m_animStartTick = 0;
    ULONGLONG m_lastAnimTick = 0;
    bool m_animTimerActive = false;

    // Backbuffer DIB (32-bit premultiplied ARGB)
    HDC m_memDC = nullptr;
    HBITMAP m_dibBmp = nullptr;
    HGDIOBJ m_oldBmp = nullptr;
    void* m_dibBits = nullptr;
    int m_dibW = 0;
    int m_dibH = 0;

    bool IsMinimal11() const { return m_settings.theme == ThemeMode::Minimal11; }
    bool IsFrostedGlass() const { return m_settings.theme == ThemeMode::FrostedGlass; }
    bool UsesBlurBackdrop() const {
        return m_settings.theme == ThemeMode::Translucent11 ||
               m_settings.theme == ThemeMode::FrostedGlass ||
               m_settings.theme == ThemeMode::MidnightAurora;
    }
    bool ShowsStatusTab() const {
        return m_settings.showStatusTab && !IsMinimal11();
    }

    // Custom Rounded Window radius (strictly 10%..50% of pill height, never 0)
    float GetWindowCornerRadius(float refHeight) const {
        float pct = static_cast<float>((max)(10, (min)(50, m_settings.roundedWindow))) / 100.0f;
        return refHeight * pct;
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
        wc.style = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;
        wc.lpfnWndProc = StaticWndProc;
        wc.hInstance = hMod;
        wc.hCursor = LoadCursorW(nullptr, reinterpret_cast<LPCWSTR>(IDC_ARROW));
        wc.lpszClassName = kWindowClassName;
        RegisterClassExW(&wc);
    }

    void RegisterTaskbarTab() {
        if (!m_hwnd || m_taskbarList) return;
        if (SUCCEEDED(CoCreateInstance(CLSID_TaskbarList, nullptr, CLSCTX_INPROC_SERVER,
                                       IID_ITaskbarList, reinterpret_cast<void**>(&m_taskbarList))) &&
            m_taskbarList) {
            if (SUCCEEDED(m_taskbarList->HrInit())) {
                m_taskbarList->AddTab(m_hwnd);
                m_taskbarList->ActivateTab(m_hwnd);
            }
        }
    }

    void UnregisterTaskbarTab() {
        if (m_taskbarList) {
            if (m_hwnd) {
                m_taskbarList->DeleteTab(m_hwnd);
            }
            SafeRelease(m_taskbarList);
        }
    }

    // ========================================================================
    // Direct2D & DirectWrite Initialization
    // ========================================================================
    void InitDirect2DAndFonts() {
        CleanupDirect2D();

        if (FAILED(D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &m_d2dFactory))) {
            return;
        }
        if (FAILED(DWriteCreateFactory(
                DWRITE_FACTORY_TYPE_SHARED,
                __uuidof(IDWriteFactory),
                reinterpret_cast<IUnknown**>(&m_dwriteFactory)))) {
            return;
        }

        m_resolvedFontName = L"Segoe UI";
        IDWriteFontCollection* sysFonts = nullptr;
        if (SUCCEEDED(m_dwriteFactory->GetSystemFontCollection(&sysFonts)) && sysFonts) {
            std::vector<std::wstring> candidates;
            if (!m_settings.customFont.empty()) {
                candidates.push_back(m_settings.customFont);
            }
            candidates.push_back(L"Google Sans");
            candidates.push_back(L"Google Sans Text");
            candidates.push_back(L"Product Sans");
            candidates.push_back(L"Segoe UI Variable Text");
            candidates.push_back(L"Segoe UI");

            for (const auto& name : candidates) {
                UINT32 index = 0;
                BOOL exists = FALSE;
                if (SUCCEEDED(sysFonts->FindFamilyName(name.c_str(), &index, &exists)) && exists) {
                    m_resolvedFontName = name;
                    break;
                }
            }
            sysFonts->Release();
        }

        D2D1_RENDER_TARGET_PROPERTIES props = D2D1::RenderTargetProperties(
            D2D1_RENDER_TARGET_TYPE_DEFAULT,
            D2D1::PixelFormat(DXGI_FORMAT_B8G8R8A8_UNORM, D2D1_ALPHA_MODE_PREMULTIPLIED),
            96.0f, 96.0f,
            D2D1_RENDER_TARGET_USAGE_GDI_COMPATIBLE,
            D2D1_FEATURE_LEVEL_DEFAULT);
        m_d2dFactory->CreateDCRenderTarget(&props, &m_d2dTarget);
        if (m_d2dTarget) {
            m_d2dTarget->SetTextAntialiasMode(D2D1_TEXT_ANTIALIAS_MODE_GRAYSCALE);
        }

        float fontScale = m_scale * (max)(0.84f, (min)(1.20f, 0.55f + 0.45f * m_hRatio));

        auto makeFormat = [&](float pxSize, DWRITE_FONT_WEIGHT weight,
                              DWRITE_TEXT_ALIGNMENT hAlign,
                              DWRITE_PARAGRAPH_ALIGNMENT vAlign,
                              bool ellipsis) -> IDWriteTextFormat* {
            IDWriteTextFormat* fmt = nullptr;
            if (SUCCEEDED(m_dwriteFactory->CreateTextFormat(
                    m_resolvedFontName.c_str(),
                    nullptr,
                    weight,
                    DWRITE_FONT_STYLE_NORMAL,
                    DWRITE_FONT_STRETCH_NORMAL,
                    pxSize * fontScale,
                    L"",
                    &fmt)) && fmt) {
                fmt->SetTextAlignment(hAlign);
                fmt->SetParagraphAlignment(vAlign);
                fmt->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
                if (ellipsis) {
                    IDWriteInlineObject* trimSign = nullptr;
                    if (SUCCEEDED(m_dwriteFactory->CreateEllipsisTrimmingSign(fmt, &trimSign)) && trimSign) {
                        DWRITE_TRIMMING trim = {DWRITE_TRIMMING_GRANULARITY_CHARACTER, 0, 0};
                        fmt->SetTrimming(&trim, trimSign);
                        trimSign->Release();
                    }
                }
            }
            return fmt;
        };

        m_fmtInput = makeFormat(15.0f, DWRITE_FONT_WEIGHT_NORMAL,
                                DWRITE_TEXT_ALIGNMENT_LEADING, DWRITE_PARAGRAPH_ALIGNMENT_CENTER, false);
        m_fmtTab = makeFormat(11.5f, DWRITE_FONT_WEIGHT_MEDIUM,
                              DWRITE_TEXT_ALIGNMENT_LEADING, DWRITE_PARAGRAPH_ALIGNMENT_CENTER, true);
        m_fmtButton = makeFormat(13.0f, DWRITE_FONT_WEIGHT_SEMI_BOLD,
                                 DWRITE_TEXT_ALIGNMENT_LEADING, DWRITE_PARAGRAPH_ALIGNMENT_CENTER, false);
        m_fmtRow = makeFormat(13.5f, DWRITE_FONT_WEIGHT_NORMAL,
                              DWRITE_TEXT_ALIGNMENT_LEADING, DWRITE_PARAGRAPH_ALIGNMENT_CENTER, true);
        m_fmtBadge = makeFormat(IsMinimal11() ? 12.0f : 11.0f,
                                IsMinimal11() ? DWRITE_FONT_WEIGHT_NORMAL : DWRITE_FONT_WEIGHT_MEDIUM,
                                DWRITE_TEXT_ALIGNMENT_TRAILING, DWRITE_PARAGRAPH_ALIGNMENT_CENTER, true);
    }

    void CleanupDirect2D() {
        SafeRelease(m_fmtInput);
        SafeRelease(m_fmtTab);
        SafeRelease(m_fmtButton);
        SafeRelease(m_fmtRow);
        SafeRelease(m_fmtBadge);
        SafeRelease(m_d2dTarget);
        SafeRelease(m_dwriteFactory);
        SafeRelease(m_d2dFactory);
    }

    void StartAnimTimer() {
        if (m_hwnd && !m_animTimerActive) {
            m_lastAnimTick = GetTickCount64();
            SetTimer(m_hwnd, kTimerAnim, 15, nullptr);
            m_animTimerActive = true;
        }
    }

    bool HasActiveHoverAnimation() const {
        auto needsStep = [](float cur, bool target) {
            return target ? (cur < 0.995f) : (cur > 0.005f);
        };
        if (needsStep(m_hoverTabAnim, m_hover == HoverTarget::StatusTab)) return true;
        if (needsStep(m_hoverBadgeAnim, m_hover == HoverTarget::LeftBadge)) return true;
        if (needsStep(m_hoverBrowseAnim, m_hover == HoverTarget::BrowseBtn)) return true;
        if (needsStep(m_hoverRunAnim, m_hover == HoverTarget::RunBtn)) return true;
        if (needsStep(m_hoverCloseAnim, m_hover == HoverTarget::CloseBtn)) return true;
        for (int i = 0; i < 5; ++i) {
            bool hov = (m_hover == HoverTarget::DropdownItem && m_hoverSuggestion == i);
            if (needsStep(m_hoverDropAnim[i], hov)) return true;
        }
        return false;
    }

    void StopAnimTimerIfIdle() {
        bool dropDone = (m_dropdownOpen && m_dropProgress >= 0.999f) ||
                        (!m_dropdownOpen && m_dropProgress <= 0.001f);
        if (m_animState == AnimState::Idle && dropDone && m_typePulse <= 0.001f && !HasActiveHoverAnimation()) {
            if (m_hwnd && m_animTimerActive) {
                KillTimer(m_hwnd, kTimerAnim);
                m_animTimerActive = false;
            }
        }
    }

    void RequestSmoothClose() {
        if (m_animState == AnimState::Closing) return;
        if (!m_settings.enableAnimation) {
            DestroyWindow(m_hwnd);
            return;
        }
        m_animState = AnimState::Closing;
        m_animStartTick = GetTickCount64();
        StartAnimTimer();
    }

    // ========================================================================
    // Monitor & Responsive Layout
    // ========================================================================
    void ComputeMonitorAndScale() {
        POINT pt = {};
        GetCursorPos(&pt);
        HMONITOR hMon = MonitorFromPoint(pt, MONITOR_DEFAULTTONEAREST);

        UINT dpi = 96;
        using GetDpiForMonitorFn = HRESULT(WINAPI*)(HMONITOR, int, UINT*, UINT*);
        HMODULE hShcore = LoadLibraryW(L"shcore.dll");
        if (hShcore) {
            auto fn = reinterpret_cast<GetDpiForMonitorFn>(
                GetProcAddress(hShcore, "GetDpiForMonitor"));
            if (fn) {
                UINT dpiX = 96, dpiY = 96;
                if (SUCCEEDED(fn(hMon, 0, &dpiX, &dpiY)) && dpiX >= 96) {
                    dpi = dpiX;
                }
            }
            FreeLibrary(hShcore);
        }
        m_scale = static_cast<float>(dpi) / 96.0f;

        MONITORINFO mi = {};
        mi.cbSize = sizeof(mi);
        GetMonitorInfoW(hMon, &mi);
        m_monRect = mi.rcMonitor;
        const RECT& wa = mi.rcWork;
        int waW = wa.right - wa.left;
        int waH = wa.bottom - wa.top;

        float desiredW = static_cast<float>(m_settings.pillWidth) * m_scale;
        float maxSafeW = static_cast<float>(waW) * 0.90f;
        float minSafeW = (min)(maxSafeW, 380.0f * m_scale);
        m_pillW = (max)(minSafeW, (min)(maxSafeW, desiredW));

        // Minimal 11 defaults slightly sleeker/slimmer while respecting Pill Window height
        float rawH = static_cast<float>(m_settings.pillHeight);
        if (IsMinimal11() && rawH > 58.0f) rawH = (max)(52.0f, rawH * 0.88f);
        float desiredH = rawH * m_scale;
        float maxSafeH = static_cast<float>(waH) * 0.14f;
        m_pillH = (max)(46.0f * m_scale, (min)((max)(56.0f * m_scale, maxSafeH), desiredH));

        m_hRatio = (m_pillH / m_scale) / 64.0f;
        float rScale = m_scale * (max)(0.80f, (min)(1.22f, m_hRatio));

        m_padX = 26.0f * m_scale;
        m_padTop = 18.0f * m_scale;
        m_padBottom = 26.0f * m_scale;
        m_tabH = ShowsStatusTab() ? (25.0f * rScale) : 0.0f;
        m_dropGap = IsMinimal11() ? 0.0f : (8.0f * m_scale);
        m_dropRowH = 36.0f * rScale;
        m_dropPadY = IsMinimal11() ? (10.0f * rScale) : (7.0f * rScale);

        const int maxItems = m_settings.showHistoryDropdown ? 5 : 0;
        m_maxDropReserve = maxItems > 0 ? (m_dropGap + m_dropPadY * 2.0f + m_dropRowH * maxItems) : 0.0f;
        m_dropUpward = (m_settings.position == DialogPosition::BottomLeft);

        m_canvasW = static_cast<int>(std::ceil(m_pillW + m_padX * 2.0f));
        m_canvasH = static_cast<int>(std::ceil(m_padTop + m_tabH + m_pillH + m_maxDropReserve + m_padBottom));

        int pillVisualH = static_cast<int>(m_tabH + m_pillH);

        switch (m_settings.position) {
            case DialogPosition::Center:
                m_winX = wa.left + (waW - m_canvasW) / 2;
                m_winY = wa.top + (waH - pillVisualH) / 2 - static_cast<int>(m_padTop);
                break;

            case DialogPosition::BottomLeft: {
                int marginX = static_cast<int>(18.0f * m_scale);
                int marginBottom = static_cast<int>(18.0f * m_scale);
                m_winX = wa.left + marginX - static_cast<int>(m_padX);
                float pillBottomInsideCanvas = m_padTop + m_maxDropReserve + m_tabH + m_pillH;
                m_winY = wa.bottom - marginBottom - static_cast<int>(std::ceil(pillBottomInsideCanvas));
                break;
            }

            case DialogPosition::CenterTop:
            default:
                m_winX = wa.left + (waW - m_canvasW) / 2;
                m_winY = wa.top + static_cast<int>(waH * 0.22f) - static_cast<int>(m_padTop);
                break;
        }
    }

    void ComputeLayoutMetrics() {
        float pillX = m_padX;
        float topOffset = m_dropUpward ? (m_padTop + m_maxDropReserve) : m_padTop;
        float pillY = topOffset + m_tabH;
        m_pillRect = Gdiplus::RectF(pillX, pillY, m_pillW, m_pillH);

        float rScale = m_scale * (max)(0.80f, (min)(1.22f, m_hRatio));

        // Top-left status tab (hidden in Minimal 11 for pure minimal silhouette)
        if (ShowsStatusTab()) {
            float tabW = m_adminMode ? (184.0f * rScale) : (150.0f * rScale);
            if (m_animState == AnimState::Executing || m_animState == AnimState::LaunchPending || m_animState == AnimState::Launching) {
                tabW = 166.0f * rScale;
            } else if (!m_errorMsg.empty()) {
                tabW = (min)(m_pillW * 0.72f, (max)(206.0f * rScale,
                            (m_errorMsg.size() * 7.2f + 44.0f) * rScale));
            }
            tabW = (min)(tabW, m_pillW - 24.0f * m_scale);
            m_tabRect = Gdiplus::RectF(pillX + 10.0f * rScale, topOffset, tabW, m_tabH + 10.0f * m_scale);
        } else {
            m_tabRect = Gdiplus::RectF(0, 0, 0, 0);
        }

        float sidePad = (max)(12.0f * m_scale, m_pillH * 0.22f);

        if (IsMinimal11()) {
            // Minimal 11 (Figma SEROJA-LABS): [Search] [Input] [Folder] [(>)] — zero extra chrome
            float iconHit = m_pillH * 0.56f;
            m_badgeRect = Gdiplus::RectF(
                pillX + sidePad,
                pillY + (m_pillH - iconHit) * 0.5f,
                iconHit, iconHit);

            m_closeRect = Gdiplus::RectF(0, 0, 0, 0); // Minimal 11 uses Esc / click-outside

            float ctrlGap = 6.0f * rScale;
            m_runBtnRect = Gdiplus::RectF(
                pillX + m_pillW - sidePad - iconHit,
                pillY + (m_pillH - iconHit) * 0.5f,
                iconHit, iconHit);

            m_browseRect = Gdiplus::RectF(
                m_runBtnRect.X - ctrlGap - iconHit,
                pillY + (m_pillH - iconHit) * 0.5f,
                iconHit, iconHit);

            float inputLeft = m_badgeRect.GetRight() + 10.0f * rScale;
            float inputRight = m_browseRect.X - 10.0f * rScale;
            m_inputRect = Gdiplus::RectF(
                inputLeft,
                pillY + m_pillH * 0.14f,
                (max)(56.0f * m_scale, inputRight - inputLeft),
                m_pillH * 0.72f);
        } else {
            // Translucent 11 / Frosted Glass / MPRD Legacy / Midnight Aurora
            float badgeSize = m_pillH * 0.625f;
            m_badgeRect = Gdiplus::RectF(
                pillX + sidePad,
                pillY + (m_pillH - badgeSize) * 0.5f,
                badgeSize, badgeSize);

            float closeSize = m_pillH * 0.47f;
            m_closeRect = Gdiplus::RectF(
                pillX + m_pillW - sidePad - closeSize,
                pillY + (m_pillH - closeSize) * 0.5f,
                closeSize, closeSize);

            float runH = m_pillH * 0.60f;
            float runW = 0.0f;
            if (IsFrostedGlass()) {
                // Frosted Glass: Icon-only right-arrow liquid-glass capsule button (NO "Run" label!)
                runW = runH * 1.32f;
            } else {
                std::wstring btnLabel = m_adminMode ? L"Run Admin" : L"Run";
                float labelW = MeasureDirectWriteWidth(btnLabel, btnLabel.size(), m_fmtButton);
                float iconW = 10.5f * rScale;
                float iconGap = 6.5f * rScale;
                runW = (max)(m_adminMode ? (112.0f * rScale) : (86.0f * rScale),
                             iconW + iconGap + labelW + 34.0f * rScale);
            }

            float ctrlGap = (max)(6.0f * m_scale, m_pillH * 0.125f);
            m_runBtnRect = Gdiplus::RectF(
                m_closeRect.X - ctrlGap - runW,
                pillY + (m_pillH - runH) * 0.5f,
                runW, runH);

            float browseSize = m_pillH * 0.50f;
            m_browseRect = Gdiplus::RectF(
                m_runBtnRect.X - ctrlGap - browseSize,
                pillY + (m_pillH - browseSize) * 0.5f,
                browseSize, browseSize);

            float inputLeft = m_badgeRect.GetRight() + (max)(10.0f * m_scale, m_pillH * 0.21f);
            float inputRight = m_browseRect.X - (max)(8.0f * m_scale, m_pillH * 0.15f);
            m_inputRect = Gdiplus::RectF(
                inputLeft,
                pillY + m_pillH * 0.14f,
                (max)(56.0f * m_scale, inputRight - inputLeft),
                m_pillH * 0.72f);
        }

        // Dropdown rect
        int visibleCount = GetVisibleSuggestionCount();
        bool showDrop = m_settings.showHistoryDropdown && visibleCount > 0 &&
                        (m_dropdownOpen || m_dropProgress > 0.01f);
        if (showDrop) {
            float dh = m_dropPadY * 2.0f + visibleCount * m_dropRowH;
            float dropEase = 1.0f - std::pow(1.0f - m_dropProgress, 3.0f);
            float animShift = (m_settings.enableAnimation && !IsMinimal11())
                ? ((1.0f - dropEase) * 10.0f * m_scale)
                : 0.0f;

            if (IsMinimal11()) {
                // Unified expandable card seamlessly attached to m_pillRect
                float curH = dh * dropEase;
                if (m_dropUpward) {
                    m_dropdownRect = Gdiplus::RectF(pillX, pillY - curH, m_pillW, curH);
                } else {
                    m_dropdownRect = Gdiplus::RectF(pillX, pillY + m_pillH, m_pillW, curH);
                }
            } else if (m_dropUpward) {
                float anchorTop = (ShowsStatusTab() ? topOffset : pillY) - m_dropGap;
                m_dropdownRect = Gdiplus::RectF(pillX, anchorTop - dh + animShift, m_pillW, dh);
            } else {
                m_dropdownRect = Gdiplus::RectF(pillX, pillY + m_pillH + m_dropGap - animShift, m_pillW, dh);
            }
        } else {
            m_dropdownRect = Gdiplus::RectF(0, 0, 0, 0);
        }
    }

    int GetVisibleSuggestionCount() const {
        return static_cast<int>((min)(static_cast<size_t>(5), m_suggestions.size()));
    }

    // ========================================================================
    // Full-Monitor Snapshot + Live Region Acrylic Blur (60fps Zero-Flash!)
    // ========================================================================
    void CaptureMonitorSnapshotIfNeeded() {
        m_monPixels.clear();
        m_monW = 0;
        m_monH = 0;
        if (!UsesBlurBackdrop()) return;

        int mw = m_monRect.right - m_monRect.left;
        int mh = m_monRect.bottom - m_monRect.top;
        if (mw <= 0 || mh <= 0) return;

        HDC screenDC = GetDC(nullptr);
        if (!screenDC) return;

        HDC capDC = CreateCompatibleDC(screenDC);
        BITMAPINFO bmi = {};
        bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        bmi.bmiHeader.biWidth = mw;
        bmi.bmiHeader.biHeight = -mh;
        bmi.bmiHeader.biPlanes = 1;
        bmi.bmiHeader.biBitCount = 32;
        bmi.bmiHeader.biCompression = BI_RGB;

        void* bits = nullptr;
        HBITMAP capBmp = CreateDIBSection(screenDC, &bmi, DIB_RGB_COLORS, &bits, nullptr, 0);
        if (capBmp && bits) {
            HGDIOBJ old = SelectObject(capDC, capBmp);
            BitBlt(capDC, 0, 0, mw, mh, screenDC, m_monRect.left, m_monRect.top, SRCCOPY | CAPTUREBLT);
            SelectObject(capDC, old);

            m_monW = mw;
            m_monH = mh;
            m_monPixels.resize(static_cast<size_t>(mw) * mh);
            memcpy(m_monPixels.data(), bits, m_monPixels.size() * sizeof(uint32_t));
        }

        if (capBmp) DeleteObject(capBmp);
        if (capDC) DeleteDC(capDC);
        ReleaseDC(nullptr, screenDC);

        m_lastBlurX = -999999;
        m_lastBlurY = -999999;
    }

    void UpdateBlurForWindowPos(int winX, int winY) {
        if (!UsesBlurBackdrop() || m_monPixels.empty()) return;
        if (winX == m_lastBlurX && winY == m_lastBlurY &&
            m_blurW == m_canvasW && m_blurH == m_canvasH) {
            return;
        }

        m_lastBlurX = winX;
        m_lastBlurY = winY;
        m_blurW = m_canvasW;
        m_blurH = m_canvasH;

        // Crisp, clearly visible Windows 11 Acrylic frost radius (sigma ~8px)
        const int blurRadius = (max)(4, static_cast<int>(std::round(8.0f * m_scale)));
        const int pad = blurRadius * 2;
        const int pw = m_canvasW + pad * 2;
        const int ph = m_canvasH + pad * 2;
        std::vector<uint32_t> padded(static_cast<size_t>(pw) * ph);

        int relX0 = winX - m_monRect.left - pad;
        int relY0 = winY - m_monRect.top - pad;

        for (int y = 0; y < ph; ++y) {
            int sy = (max)(0, (min)(m_monH - 1, relY0 + y));
            const uint32_t* srcRow = m_monPixels.data() + static_cast<size_t>(sy) * m_monW;
            uint32_t* dstRow = padded.data() + static_cast<size_t>(y) * pw;
            for (int x = 0; x < pw; ++x) {
                int sx = (max)(0, (min)(m_monW - 1, relX0 + x));
                dstRow[x] = srcRow[sx] | 0xFF000000u;
            }
        }

        ApplyWindows11AcrylicShader(padded, pw, ph, blurRadius,
                                    m_settings.theme, m_settings.transparentBackground);

        // Crop center back to exact canvas size (eliminates edge darkening!)
        m_blurredPixels.resize(static_cast<size_t>(m_blurW) * m_blurH);
        for (int y = 0; y < m_blurH; ++y) {
            memcpy(m_blurredPixels.data() + static_cast<size_t>(y) * m_blurW,
                   padded.data() + static_cast<size_t>(y + pad) * pw + pad,
                   static_cast<size_t>(m_blurW) * sizeof(uint32_t));
        }
    }

    void EnsureBackbuffer() {
        if (m_memDC && m_dibW == m_canvasW && m_dibH == m_canvasH) return;
        FreeBackbuffer();

        HDC screenDC = GetDC(nullptr);
        m_memDC = CreateCompatibleDC(screenDC);

        BITMAPINFO bmi = {};
        bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        bmi.bmiHeader.biWidth = m_canvasW;
        bmi.bmiHeader.biHeight = -m_canvasH;
        bmi.bmiHeader.biPlanes = 1;
        bmi.bmiHeader.biBitCount = 32;
        bmi.bmiHeader.biCompression = BI_RGB;

        m_dibBmp = CreateDIBSection(screenDC, &bmi, DIB_RGB_COLORS, &m_dibBits, nullptr, 0);
        if (m_dibBmp) {
            m_oldBmp = SelectObject(m_memDC, m_dibBmp);
            m_dibW = m_canvasW;
            m_dibH = m_canvasH;
        }
        ReleaseDC(nullptr, screenDC);
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

    void ForceForeground() {
        HWND fg = GetForegroundWindow();
        DWORD fgTid = fg ? GetWindowThreadProcessId(fg, nullptr) : 0;
        DWORD myTid = GetCurrentThreadId();
        bool attached = false;
        if (fgTid && fgTid != myTid) {
            attached = AttachThreadInput(fgTid, myTid, TRUE) != 0;
        }
        BringWindowToTop(m_hwnd);
        SetForegroundWindow(m_hwnd);
        SetFocus(m_hwnd);
        if (attached) {
            AttachThreadInput(fgTid, myTid, FALSE);
        }
    }

    // ========================================================================
    // DirectWrite Text Measurement & Drawing
    // ========================================================================
    float MeasureDirectWriteWidth(const std::wstring& str, size_t count, IDWriteTextFormat* fmt) const {
        if (count == 0 || str.empty() || !m_dwriteFactory || !fmt) return 0.0f;
        count = (min)(count, str.size());

        IDWriteTextLayout* layout = nullptr;
        if (FAILED(m_dwriteFactory->CreateTextLayout(
                str.c_str(), static_cast<UINT32>(count), fmt, 10000.0f, 100.0f, &layout)) || !layout) {
            return 0.0f;
        }
        DWRITE_TEXT_METRICS metrics = {};
        layout->GetMetrics(&metrics);
        layout->Release();
        return metrics.widthIncludingTrailingWhitespace;
    }

    size_t HitTestCaretIndex(float localX) {
        if (m_text.empty() || !m_dwriteFactory || !m_fmtInput) return 0;

        float targetX = localX - m_inputRect.X + m_scrollX;
        if (targetX <= 0.0f) return 0;

        IDWriteTextLayout* layout = nullptr;
        if (FAILED(m_dwriteFactory->CreateTextLayout(
                m_text.c_str(), static_cast<UINT32>(m_text.size()),
                m_fmtInput, 10000.0f, m_inputRect.Height, &layout)) || !layout) {
            return m_text.size();
        }

        BOOL isTrailing = FALSE;
        BOOL isInside = FALSE;
        DWRITE_HIT_TEST_METRICS htm = {};
        layout->HitTestPoint(targetX, m_inputRect.Height * 0.5f, &isTrailing, &isInside, &htm);
        layout->Release();

        size_t pos = htm.textPosition + (isTrailing ? 1 : 0);
        return (min)(pos, m_text.size());
    }

    void DrawD2DText(const std::wstring& text,
                     IDWriteTextFormat* fmt,
                     const Gdiplus::RectF& rect,
                     D2D1_COLOR_F color) {
        if (!m_d2dTarget || !fmt || text.empty()) return;
        ID2D1SolidColorBrush* brush = nullptr;
        if (SUCCEEDED(m_d2dTarget->CreateSolidColorBrush(color, &brush)) && brush) {
            D2D1_RECT_F d2Rect = D2D1::RectF(rect.X, rect.Y, rect.GetRight(), rect.GetBottom());
            m_d2dTarget->DrawTextW(text.c_str(), static_cast<UINT32>(text.size()),
                                   fmt, &d2Rect, brush, D2D1_DRAW_TEXT_OPTIONS_CLIP);
            brush->Release();
        }
    }

    // ========================================================================
    // Suggestions & Autocomplete
    // ========================================================================
    void RebuildSuggestions() {
        m_suggestions.clear();
        m_ghostSuffix.clear();

        std::wstring query = TrimW(m_text);
        std::wstring lowerQuery = ToLowerW(query);
        std::vector<std::wstring> seen;

        auto alreadySeen = [&](const std::wstring& s) {
            std::wstring lw = ToLowerW(s);
            for (const auto& x : seen) {
                if (x == lw) return true;
            }
            seen.push_back(lw);
            return false;
        };

        for (const auto& h : m_history) {
            std::wstring lh = ToLowerW(h);
            if (lowerQuery.empty() || lh.find(lowerQuery) != std::wstring::npos) {
                if (!alreadySeen(h)) {
                    SuggestionKind kind = ClassifyCommand(h, true);
                    std::wstring badge = (kind == SuggestionKind::Web) ? L"Web" :
                                         (kind == SuggestionKind::Folder) ? L"Path" : L"History";
                    m_suggestions.push_back({h, h, LookupKnownDescription(h, kind), badge, kind});
                }
            }
        }

        if (!lowerQuery.empty()) {
            for (const auto& entry : GetBuiltInCommands()) {
                std::wstring lc = ToLowerW(entry.cmd);
                std::wstring lt = ToLowerW(entry.title);
                if ((lc.find(lowerQuery) != std::wstring::npos || lt.find(lowerQuery) != std::wstring::npos) &&
                    !alreadySeen(entry.cmd)) {
                    SuggestionKind kind = ClassifyCommand(entry.cmd, false);
                    std::wstring badge = (kind == SuggestionKind::Folder) ? L"Folder" : L"System";
                    m_suggestions.push_back({entry.cmd, entry.title, entry.desc, badge, kind});
                }
            }
        }

        if (!lowerQuery.empty()) {
            std::stable_sort(m_suggestions.begin(), m_suggestions.end(),
                             [&](const SuggestionItem& a, const SuggestionItem& b) {
                                 bool aPrefix = ToLowerW(a.command).rfind(lowerQuery, 0) == 0 ||
                                                ToLowerW(a.displayTitle).rfind(lowerQuery, 0) == 0;
                                 bool bPrefix = ToLowerW(b.command).rfind(lowerQuery, 0) == 0 ||
                                                ToLowerW(b.displayTitle).rfind(lowerQuery, 0) == 0;
                                 return aPrefix && !bPrefix;
                             });
        }

        if (!m_text.empty() && m_caret == m_text.size() && !HasSelection()) {
            std::wstring lt = ToLowerW(m_text);
            for (const auto& item : m_suggestions) {
                if (item.command.size() > m_text.size() &&
                    ToLowerW(item.command).rfind(lt, 0) == 0) {
                    m_ghostSuffix = item.command.substr(m_text.size());
                    break;
                }
            }
        }

        if (m_selectedSuggestion >= GetVisibleSuggestionCount()) {
            m_selectedSuggestion = -1;
        }
    }

    // ========================================================================
    // Text Editing Helpers
    // ========================================================================
    bool IsBusyState() const {
        return m_animState == AnimState::Executing ||
               m_animState == AnimState::LaunchPending ||
               m_animState == AnimState::Launching ||
               m_animState == AnimState::Closing;
    }

    bool HasSelection() const { return m_caret != m_selAnchor; }
    size_t SelStart() const { return (min)(m_caret, m_selAnchor); }
    size_t SelEnd() const { return (max)(m_caret, m_selAnchor); }

    void DeleteSelection() {
        if (!HasSelection()) return;
        size_t s = SelStart();
        size_t e = SelEnd();
        m_text.erase(s, e - s);
        m_caret = s;
        m_selAnchor = s;
    }

    void InsertText(const std::wstring& str) {
        if (str.empty() || IsBusyState()) return;
        DeleteSelection();
        m_text.insert(m_caret, str);
        m_caret += str.size();
        m_selAnchor = m_caret;
        OnTextChanged();
    }

    void OnTextChanged() {
        ClearError();
        m_caretVisible = true;
        ResetCaretTimer();
        RebuildSuggestions();
        bool wantOpen = m_settings.showHistoryDropdown && !m_text.empty() && !m_suggestions.empty();
        m_dropdownOpen = wantOpen;
        if (!m_settings.enableAnimation) {
            m_dropProgress = wantOpen ? 1.0f : 0.0f;
        } else {
            m_typePulse = 1.0f;
            StartAnimTimer();
        }
        m_selectedSuggestion = -1;
        ComputeLayoutMetrics();
        RenderAndPresent();
    }

    void ResetCaretTimer() {
        if (m_hwnd) {
            SetTimer(m_hwnd, kTimerCaret, 530, nullptr);
        }
    }

    void ShowError(const std::wstring& msg) {
        m_errorMsg = msg;
        ComputeLayoutMetrics();
        RenderAndPresent();
        if (m_hwnd) {
            SetTimer(m_hwnd, kTimerErrorClear, 3200, nullptr);
        }
    }

    void ClearError() {
        if (!m_errorMsg.empty()) {
            m_errorMsg.clear();
            if (m_hwnd) KillTimer(m_hwnd, kTimerErrorClear);
        }
    }

    void CopyToClipboard() {
        if (!HasSelection()) return;
        std::wstring sel = m_text.substr(SelStart(), SelEnd() - SelStart());
        if (!OpenClipboard(m_hwnd)) return;
        EmptyClipboard();
        HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, (sel.size() + 1) * sizeof(wchar_t));
        if (hMem) {
            void* ptr = GlobalLock(hMem);
            if (ptr) {
                memcpy(ptr, sel.c_str(), (sel.size() + 1) * sizeof(wchar_t));
                GlobalUnlock(hMem);
                SetClipboardData(CF_UNICODETEXT, hMem);
            } else {
                GlobalFree(hMem);
            }
        }
        CloseClipboard();
    }

    void PasteFromClipboard() {
        if (!OpenClipboard(m_hwnd)) return;
        HANDLE hData = GetClipboardData(CF_UNICODETEXT);
        if (hData) {
            const wchar_t* psz = static_cast<const wchar_t*>(GlobalLock(hData));
            if (psz) {
                std::wstring pasted = psz;
                GlobalUnlock(hData);
                pasted.erase(std::remove(pasted.begin(), pasted.end(), L'\r'), pasted.end());
                pasted.erase(std::remove(pasted.begin(), pasted.end(), L'\n'), pasted.end());
                InsertText(pasted);
            }
        }
        CloseClipboard();
    }

    void OpenBrowseDialog() {
        if (IsBusyState()) return;
        m_browseDialogOpen = true;
        wchar_t fileBuf[MAX_PATH] = {};
        OPENFILENAMEW ofn = {};
        ofn.lStructSize = sizeof(ofn);
        ofn.hwndOwner = m_hwnd;
        ofn.lpstrFilter = L"Programs (*.exe;*.bat;*.cmd;*.msc;*.lnk)\0*.exe;*.bat;*.cmd;*.msc;*.lnk\0All Files (*.*)\0*.*\0";
        ofn.lpstrFile = fileBuf;
        ofn.nMaxFile = MAX_PATH;
        ofn.lpstrTitle = L"Browse";
        ofn.Flags = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST | OFN_HIDEREADONLY;

        if (GetOpenFileNameW(&ofn)) {
            std::wstring picked = fileBuf;
            if (picked.find(L' ') != std::wstring::npos) {
                picked = L"\"" + picked + L"\"";
            }
            m_text = picked;
            m_caret = m_text.size();
            m_selAnchor = m_caret;
            m_dropdownOpen = false;
            m_dropProgress = 0.0f;
            ClearError();
            RebuildSuggestions();
            ComputeLayoutMetrics();
        }
        m_browseDialogOpen = false;
        ForceForeground();
        RenderAndPresent();
    }

    void TriggerExecute(bool forceAdmin) {
        if (m_hasTriggeredExec || IsBusyState()) return;

        std::wstring cmdToRun = m_text;
        if (m_dropdownOpen && m_selectedSuggestion >= 0 &&
            m_selectedSuggestion < GetVisibleSuggestionCount()) {
            cmdToRun = m_suggestions[m_selectedSuggestion].command;
            m_text = cmdToRun;
            m_caret = m_text.size();
            m_selAnchor = m_caret;
        }

        if (TrimW(cmdToRun).empty()) {
            ShowError(L"Enter a command to run");
            return;
        }

        m_hasTriggeredExec = true;
        m_pendingCommand = cmdToRun;
        m_execForceAdmin = forceAdmin;
        m_dropdownOpen = false;
        ClearError();

        if (!m_settings.enableAnimation) {
            m_animState = AnimState::LaunchPending;
            PostMessageW(m_hwnd, kMsgExecuteNow, 0, 0);
            return;
        }

        m_execProgress = 0.0f;
        m_animState = AnimState::Executing;
        m_animStartTick = GetTickCount64();
        ComputeLayoutMetrics();
        StartAnimTimer();
        RenderAndPresent();
    }

    // ========================================================================
    // Rendering Engine (All 5 Themes + Live Acrylic Blur + DirectWrite)
    // ========================================================================
    void DrawSoftShadow(Gdiplus::Graphics& g, const Gdiplus::RectF& rect, float radius, float alphaScale) {
        const int layers = 6;
        for (int i = layers; i >= 1; --i) {
            float expand = i * 2.3f * m_scale;
            float offsetY = (i * 1.4f + 2.0f) * m_scale;
            BYTE a = static_cast<BYTE>((min)(255.0f, (22.0f / i) * alphaScale));
            Gdiplus::GraphicsPath sp;
            AddUniformRoundRect(sp,
                                rect.X - expand,
                                rect.Y - expand * 0.4f + offsetY,
                                rect.Width + expand * 2.0f,
                                rect.Height + expand * 1.5f,
                                radius + expand * 0.65f);
            Gdiplus::SolidBrush sb(Gdiplus::Color(a, 0, 0, 0));
            g.FillPath(&sb, &sp);
        }
    }

    void FillSurfaceWithTheme(Gdiplus::Graphics& g,
                              const Gdiplus::GraphicsPath& path,
                              const Gdiplus::RectF& bounds,
                              bool isElevatedTab,
                              float opacityMult,
                              Gdiplus::Bitmap* blurredBmp) {
        const float transp = static_cast<float>(m_settings.transparentBackground) / 100.0f;
        const float tintStrength = 1.0f - transp;

        Gdiplus::PointF ptTop(bounds.X, bounds.Y - 1.0f);
        Gdiplus::PointF ptBot(bounds.X, bounds.GetBottom() + 1.0f);

        auto drawBlurLayer = [&]() {
            if (!blurredBmp) return;
            if (opacityMult >= 0.99f) {
                Gdiplus::TextureBrush blurBrush(blurredBmp, Gdiplus::WrapModeClamp);
                g.FillPath(&blurBrush, &path);
            } else if (opacityMult > 0.01f) {
                Gdiplus::GraphicsState st = g.Save();
                g.SetClip(&path);
                Gdiplus::ColorMatrix cm = {{
                    {1, 0, 0, 0, 0},
                    {0, 1, 0, 0, 0},
                    {0, 0, 1, 0, 0},
                    {0, 0, 0, opacityMult, 0},
                    {0, 0, 0, 0, 1},
                }};
                Gdiplus::ImageAttributes ia;
                ia.SetColorMatrix(&cm, Gdiplus::ColorMatrixFlagsDefault, Gdiplus::ColorAdjustTypeBitmap);
                Gdiplus::Rect dstRc(0, 0, m_canvasW, m_canvasH);
                g.DrawImage(blurredBmp, dstRc, 0, 0, m_blurW, m_blurH, Gdiplus::UnitPixel, &ia);
                g.Restore(st);
            }
        };

        if (m_settings.theme == ThemeMode::Translucent11) {
            // Windows 11 Settings Styler "Translucent Seamless" (Dark Acrylic)
            // The shader already blended Luminosity (0.40) + Tint (0.35) + Acrylic micro-grain!
            drawBlurLayer();

            // Subtle seamless dark surface elevation (tab slightly lighter like Win11 nav)
            if (isElevatedTab) {
                Gdiplus::SolidBrush tabTint(Gdiplus::Color(static_cast<BYTE>(28.0f * opacityMult), 255, 255, 255));
                g.FillPath(&tabTint, &path);
            }

            // Ultra-subtle seamless Windows 11 Acrylic hairline edge
            Gdiplus::LinearGradientBrush rimGrad(
                ptTop, ptBot,
                Gdiplus::Color(static_cast<BYTE>(46.0f * opacityMult), 255, 255, 255),
                Gdiplus::Color(static_cast<BYTE>(18.0f * opacityMult), 255, 255, 255));
            rimGrad.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
            Gdiplus::Pen rimPen(&rimGrad, 1.0f * m_scale);
            g.DrawPath(&rimPen, &path);
        } else if (m_settings.theme == ThemeMode::FrostedGlass) {
            // Apple Liquid Glass Capsule (matches Photo 4 reference!)
            drawBlurLayer();

            // Smooth vertical liquid-glass depth gradient (bright top & bottom lens refraction, clear core)
            Gdiplus::Color lensCols[4] = {
                Gdiplus::Color(static_cast<BYTE>(54.0f * opacityMult), 255, 255, 255),
                Gdiplus::Color(static_cast<BYTE>(14.0f * opacityMult), 20, 32, 42),
                Gdiplus::Color(static_cast<BYTE>(24.0f * opacityMult), 16, 26, 36),
                Gdiplus::Color(static_cast<BYTE>(68.0f * opacityMult), 255, 255, 255),
            };
            Gdiplus::REAL lensPos[4] = {0.0f, 0.24f, 0.78f, 1.0f};
            Gdiplus::LinearGradientBrush lensBrush(ptTop, ptBot, lensCols[0], lensCols[3]);
            lensBrush.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
            lensBrush.SetInterpolationColors(lensCols, lensPos, 4);
            g.FillPath(&lensBrush, &path);

            // Outer dark refractive glass shadow edge
            Gdiplus::Pen outerDark(Gdiplus::Color(static_cast<BYTE>(72.0f * opacityMult), 0, 0, 0), 2.0f * m_scale);
            g.DrawPath(&outerDark, &path);

            // Signature bright crystalline white top & bottom liquid glass bezel (Photo 4!)
            Gdiplus::Color bezelCols[3] = {
                Gdiplus::Color(static_cast<BYTE>(185.0f * opacityMult), 255, 255, 255),
                Gdiplus::Color(static_cast<BYTE>(56.0f * opacityMult), 255, 255, 255),
                Gdiplus::Color(static_cast<BYTE>(215.0f * opacityMult), 255, 255, 255),
            };
            Gdiplus::REAL bezelPos[3] = {0.0f, 0.50f, 1.0f};
            Gdiplus::LinearGradientBrush bezelGrad(ptTop, ptBot, bezelCols[0], bezelCols[2]);
            bezelGrad.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
            bezelGrad.SetInterpolationColors(bezelCols, bezelPos, 3);
            Gdiplus::Pen bezelPen(&bezelGrad, 1.35f * m_scale);
            g.DrawPath(&bezelPen, &path);
        } else if (m_settings.theme == ThemeMode::Minimal11) {
            // Minimal 11 (Figma SEROJA-LABS): clean flat dark charcoal + crisp 1px border
            float alphaVal = (128.0f + tintStrength * 140.0f) * opacityMult;
            BYTE a = static_cast<BYTE>((max)(0.0f, (min)(255.0f, alphaVal)));
            Gdiplus::SolidBrush fill(Gdiplus::Color(a, 18, 18, 20));
            g.FillPath(&fill, &path);

            Gdiplus::Pen border(Gdiplus::Color(static_cast<BYTE>(220.0f * opacityMult), 50, 50, 56), 1.05f * m_scale);
            g.DrawPath(&border, &path);
        } else if (m_settings.theme == ThemeMode::MidnightAurora) {
            // Midnight Aurora: live blurred indigo-obsidian glass + subtle cyan->violet rim
            drawBlurLayer();

            Gdiplus::LinearGradientBrush auroraVeil(
                Gdiplus::PointF(bounds.X, bounds.Y),
                Gdiplus::PointF(bounds.GetRight(), bounds.GetBottom()),
                Gdiplus::Color(static_cast<BYTE>(28.0f * opacityMult), 56, 189, 248),
                Gdiplus::Color(static_cast<BYTE>(28.0f * opacityMult), 139, 92, 246));
            auroraVeil.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
            g.FillPath(&auroraVeil, &path);

            Gdiplus::LinearGradientBrush rimGrad(
                Gdiplus::PointF(bounds.X, bounds.Y),
                Gdiplus::PointF(bounds.GetRight(), bounds.GetBottom()),
                Gdiplus::Color(static_cast<BYTE>(140.0f * opacityMult), 56, 189, 248),
                Gdiplus::Color(static_cast<BYTE>(130.0f * opacityMult), 167, 139, 250));
            rimGrad.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
            Gdiplus::Pen rimPen(&rimGrad, 1.2f * m_scale);
            g.DrawPath(&rimPen, &path);
        } else {
            // MPRD Legacy (Obsidian Matte)
            float alphaVal = (118.0f + tintStrength * 152.0f) * opacityMult;
            BYTE aTop = static_cast<BYTE>((max)(0.0f, (min)(255.0f, alphaVal)));
            BYTE aBot = static_cast<BYTE>((max)(0.0f, (min)(255.0f, alphaVal + 6.0f)));

            Gdiplus::Color topCol = isElevatedTab
                ? Gdiplus::Color(aTop, 42, 42, 46)
                : Gdiplus::Color(aTop, 28, 28, 32);
            Gdiplus::Color botCol = isElevatedTab
                ? Gdiplus::Color(aBot, 32, 32, 36)
                : Gdiplus::Color(aBot, 21, 21, 24);

            Gdiplus::LinearGradientBrush bgBrush(ptTop, ptBot, topCol, botCol);
            bgBrush.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
            g.FillPath(&bgBrush, &path);

            Gdiplus::LinearGradientBrush rimGrad(
                ptTop, ptBot,
                Gdiplus::Color(static_cast<BYTE>(48.0f * opacityMult), 255, 255, 255),
                Gdiplus::Color(static_cast<BYTE>(18.0f * opacityMult), 255, 255, 255));
            rimGrad.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
            Gdiplus::Pen rimPen(&rimGrad, 1.0f * m_scale);
            g.DrawPath(&rimPen, &path);
        }
    }

    void RenderAndPresent() {
        if (!m_hwnd) return;
        EnsureBackbuffer();
        if (!m_dibBits) return;

        // Compute animated slide offset first so live Acrylic blur aligns 1:1 with exact screen pixels!
        float ease = 1.0f - std::pow(1.0f - m_openProgress, 3.0f);
        BYTE masterAlpha = static_cast<BYTE>((max)(0.0f, (min)(255.0f, ease * 255.0f)));

        int slideOffsetY = 0;
        if (m_settings.enableAnimation) {
            if (m_animState == AnimState::Opening) {
                slideOffsetY = static_cast<int>(-(1.0f - ease) * 16.0f * m_scale);
            } else if (m_animState == AnimState::Closing) {
                slideOffsetY = static_cast<int>((1.0f - ease) * 12.0f * m_scale);
            }
        }
        int presentX = m_winX;
        int presentY = m_winY + slideOffsetY;

        UpdateBlurForWindowPos(presentX, presentY);

        memset(m_dibBits, 0, static_cast<size_t>(m_canvasW) * m_canvasH * 4);

        Gdiplus::Bitmap canvas(m_canvasW, m_canvasH, m_canvasW * 4,
                               PixelFormat32bppPARGB, static_cast<BYTE*>(m_dibBits));
        Gdiplus::Graphics g(&canvas);
        g.SetSmoothingMode(Gdiplus::SmoothingModeHighQuality);
        g.SetPixelOffsetMode(Gdiplus::PixelOffsetModeHighQuality);

        std::unique_ptr<Gdiplus::Bitmap> blurredBmp;
        if (UsesBlurBackdrop() &&
            !m_blurredPixels.empty() && m_blurW == m_canvasW && m_blurH == m_canvasH) {
            blurredBmp = std::make_unique<Gdiplus::Bitmap>(
                m_blurW, m_blurH, m_blurW * 4, PixelFormat32bppPARGB,
                reinterpret_cast<BYTE*>(m_blurredPixels.data()));
        }

        const bool isMinimal = IsMinimal11();
        const bool isFrosted = IsFrostedGlass();
        const bool isExec = (m_animState == AnimState::Executing || m_animState == AnimState::LaunchPending);
        const float rScale = m_scale * (max)(0.80f, (min)(1.22f, m_hRatio));
        const float pillRadius = GetWindowCornerRadius(m_pillH);
        const float shadowStrength = isMinimal ? 0.65f : (UsesBlurBackdrop() ? 0.78f : 1.0f);

        float execEase = m_execProgress < 0.5f
            ? (4.0f * m_execProgress * m_execProgress * m_execProgress)
            : (1.0f - std::pow(-2.0f * m_execProgress + 2.0f, 3.0f) * 0.5f);
        float execGlow = isExec ? std::sin(m_execProgress * 3.14159265f) : 0.0f;
        float glowBoost = (max)(execGlow, (max)(m_typePulse * 0.42f, m_hoverBadgeAnim * 0.38f));

        std::wstring tabLabel;
        D2D1_COLOR_F tabTextColor = D2D1::ColorF(0.88f, 0.89f, 0.92f, 0.92f);

        float dropAlpha = m_settings.enableAnimation
            ? (1.0f - std::pow(1.0f - m_dropProgress, 3.0f))
            : (m_dropdownOpen ? 1.0f : 0.0f);
        int dropCount = GetVisibleSuggestionCount();
        bool drawDropdown = (m_dropdownRect.Height > 1.0f && dropAlpha > 0.01f && dropCount > 0);

        // --------------------------------------------------------------------
        // 1. Window Surfaces & Shadows
        // --------------------------------------------------------------------
        if (isMinimal) {
            // Minimal 11: ONE unified expandable container (Figma SEROJA-LABS!)
            Gdiplus::RectF unifiedRect = m_pillRect;
            if (drawDropdown) {
                if (m_dropUpward) {
                    unifiedRect = Gdiplus::RectF(
                        m_pillRect.X, m_dropdownRect.Y,
                        m_pillRect.Width, m_pillRect.GetBottom() - m_dropdownRect.Y);
                } else {
                    unifiedRect = Gdiplus::RectF(
                        m_pillRect.X, m_pillRect.Y,
                        m_pillRect.Width, m_dropdownRect.GetBottom() - m_pillRect.Y);
                }
            }

            float minRadius = (min)(pillRadius, unifiedRect.Height * 0.45f);
            DrawSoftShadow(g, unifiedRect, minRadius, shadowStrength);

            Gdiplus::GraphicsPath unifiedPath;
            AddUniformRoundRect(unifiedPath, unifiedRect.X, unifiedRect.Y,
                                unifiedRect.Width, unifiedRect.Height, minRadius);
            FillSurfaceWithTheme(g, unifiedPath, unifiedRect, false, 1.0f, nullptr);

            // Crisp 1px horizontal divider separating search row & suggestion rows
            if (drawDropdown) {
                float divY = m_dropUpward ? m_pillRect.Y : m_pillRect.GetBottom();
                Gdiplus::Pen divPen(Gdiplus::Color(static_cast<BYTE>(200.0f * dropAlpha), 42, 42, 48), 1.0f * m_scale);
                g.DrawLine(&divPen, unifiedRect.X + 1.0f, divY, unifiedRect.GetRight() - 1.0f, divY);
            }
        } else {
            // Floating Pill + Optional Status Tab + Separate Floating Dropdown
            if (ShowsStatusTab() && m_tabRect.Width > 0) {
                float tabR = (max)(6.0f * rScale, (min)(13.0f * rScale, m_tabH * (m_settings.roundedWindow / 100.0f) * 1.15f));
                DrawSoftShadow(g, Gdiplus::RectF(m_tabRect.X, m_tabRect.Y, m_tabRect.Width, m_tabH),
                               tabR, shadowStrength * 0.55f);

                Gdiplus::GraphicsPath tabPath;
                AddRoundedRectPath(tabPath, m_tabRect.X, m_tabRect.Y,
                                   m_tabRect.Width, m_tabRect.Height,
                                   tabR, tabR, 0.0f, 0.0f);
                FillSurfaceWithTheme(g, tabPath, m_tabRect, true, 1.0f, blurredBmp.get());

                if (m_hoverTabAnim > 0.01f) {
                    Gdiplus::SolidBrush hov(Gdiplus::Color(static_cast<BYTE>(28.0f * m_hoverTabAnim), 255, 255, 255));
                    g.FillPath(&hov, &tabPath);
                }

                float iconCx = m_tabRect.X + 16.0f * rScale;
                float iconCy = m_tabRect.Y + m_tabH * 0.52f;

                if (!m_errorMsg.empty()) {
                    DrawFilledAlertIcon(g, iconCx, iconCy, 12.0f * rScale,
                                        Gdiplus::Color(255, 239, 68, 68),
                                        Gdiplus::Color(255, 255, 255, 255));
                    tabLabel = m_errorMsg;
                    tabTextColor = D2D1::ColorF(0.99f, 0.65f, 0.65f, 1.0f);
                } else if (isExec) {
                    DrawFilledBoltIcon(g, iconCx, iconCy, 11.5f * rScale,
                                       m_adminMode ? Gdiplus::Color(255, 245, 158, 11)
                                                   : Gdiplus::Color(255, 56, 189, 248));
                    tabLabel = L"Launching command..";
                    tabTextColor = m_adminMode
                        ? D2D1::ColorF(0.99f, 0.88f, 0.36f, 1.0f)
                        : D2D1::ColorF(0.56f, 0.87f, 0.99f, 1.0f);
                } else if (m_adminMode) {
                    DrawFilledShieldIcon(g, iconCx, iconCy, 11.5f * rScale,
                                         Gdiplus::Color(255, 245, 158, 11));
                    tabLabel = L"Admin Mode  \x00B7  Elevated";
                    tabTextColor = D2D1::ColorF(0.99f, 0.83f, 0.30f, 1.0f);
                } else {
                    DrawFilledBoltIcon(g, iconCx, iconCy, 11.5f * rScale,
                                       isFrosted ? Gdiplus::Color(235, 255, 255, 255)
                                                 : Gdiplus::Color(255, 56, 189, 248));
                    tabLabel = L"Run  \x00B7  Win + R";
                }
            }

            DrawSoftShadow(g, m_pillRect, pillRadius, shadowStrength);
            Gdiplus::GraphicsPath pillPath;
            AddUniformRoundRect(pillPath, m_pillRect.X, m_pillRect.Y,
                                m_pillRect.Width, m_pillRect.Height, pillRadius);
            FillSurfaceWithTheme(g, pillPath, m_pillRect, false, 1.0f, blurredBmp.get());

            if (drawDropdown) {
                float dropRadius = (min)(pillRadius, m_dropdownRect.Height * 0.42f);
                DrawSoftShadow(g, m_dropdownRect, dropRadius, shadowStrength * 0.85f * dropAlpha);
                Gdiplus::GraphicsPath dropPath;
                AddUniformRoundRect(dropPath, m_dropdownRect.X, m_dropdownRect.Y,
                                    m_dropdownRect.Width, m_dropdownRect.Height, dropRadius);
                FillSurfaceWithTheme(g, dropPath, m_dropdownRect, false, dropAlpha, blurredBmp.get());
            }
        }

        // --------------------------------------------------------------------
        // 2. Left Icon (Minimal 11 Outline Search OR Glowing Pill Badge + 360° Spin)
        // --------------------------------------------------------------------
        {
            float cx = m_badgeRect.X + m_badgeRect.Width * 0.5f;
            float cy = m_badgeRect.Y + m_badgeRect.Height * 0.5f;

            Gdiplus::GraphicsState iconState = g.Save();
            if (isExec) {
                float angleDeg = execEase * 360.0f;
                g.TranslateTransform(cx, cy);
                g.RotateTransform(angleDeg);
                g.TranslateTransform(-cx, -cy);
            }

            if (isMinimal) {
                // Clean Minimal 11 outline search icon (brightens & spins 360° on execute!)
                Gdiplus::Color baseCol = m_adminMode
                    ? Gdiplus::Color(235, 245, 158, 11)
                    : Gdiplus::Color(210, 156, 158, 166);
                Gdiplus::Color litCol = m_adminMode
                    ? Gdiplus::Color(255, 254, 240, 138)
                    : Gdiplus::Color(255, 255, 255, 255);
                Gdiplus::Color col = LerpColor(baseCol, litCol, glowBoost);
                DrawOutlineSearchIcon(g, cx, cy, m_badgeRect.Width * 0.62f, col);
            } else {
                // Radiant outer glow on typing/hover/execute
                if (glowBoost > 0.01f) {
                    for (int r = 3; r >= 1; --r) {
                        float exp = r * 3.6f * rScale * (0.6f + 0.5f * glowBoost);
                        BYTE ga = static_cast<BYTE>((min)(255.0f, (42.0f / r) * glowBoost));
                        Gdiplus::GraphicsPath gp;
                        AddUniformRoundRect(gp,
                                            m_badgeRect.X - exp, m_badgeRect.Y - exp,
                                            m_badgeRect.Width + exp * 2.0f,
                                            m_badgeRect.Height + exp * 2.0f,
                                            11.0f * rScale + exp * 0.5f);
                        Gdiplus::SolidBrush gb(m_adminMode
                            ? Gdiplus::Color(ga, 253, 210, 60)
                            : (isFrosted ? Gdiplus::Color(ga, 224, 242, 254) : Gdiplus::Color(ga, 96, 224, 255)));
                        g.FillPath(&gb, &gp);
                    }
                }

                // Restore transform before drawing fixed brackets, then re-apply for spinning inner icon
                g.Restore(iconState);

                Gdiplus::Color baseBracket = m_adminMode
                    ? Gdiplus::Color(220, 245, 158, 11)
                    : (isFrosted ? Gdiplus::Color(175, 255, 255, 255) : Gdiplus::Color(215, 56, 189, 248));
                Gdiplus::Color brightBracket = m_adminMode
                    ? Gdiplus::Color(255, 254, 232, 128)
                    : (isFrosted ? Gdiplus::Color(255, 255, 255, 255) : Gdiplus::Color(255, 186, 238, 255));
                DrawCornerBrackets(g, m_badgeRect.X, m_badgeRect.Y, m_badgeRect.Width,
                                   m_badgeRect.Width * 0.21f, (1.45f + 0.35f * execGlow) * m_scale,
                                   LerpColor(baseBracket, brightBracket, glowBoost));

                float inset = m_badgeRect.Width * 0.09f;
                Gdiplus::RectF inner(
                    m_badgeRect.X + inset, m_badgeRect.Y + inset,
                    m_badgeRect.Width - inset * 2.0f, m_badgeRect.Height - inset * 2.0f);
                Gdiplus::GraphicsPath badgePath;
                AddUniformRoundRect(badgePath, inner.X, inner.Y, inner.Width, inner.Height, inner.Width * 0.26f);

                BYTE topA = static_cast<BYTE>((min)(255.0f, (isFrosted ? 54.0f : 74.0f) + 140.0f * execGlow + 34.0f * (max)(m_typePulse, m_hoverBadgeAnim)));
                BYTE botA = static_cast<BYTE>((min)(255.0f, (isFrosted ? 24.0f : 36.0f) + 115.0f * execGlow + 20.0f * (max)(m_typePulse, m_hoverBadgeAnim)));
                Gdiplus::Color gradTop = m_adminMode
                    ? Gdiplus::Color(topA, 250, 185, 32)
                    : (isFrosted ? Gdiplus::Color(topA, 255, 255, 255) : Gdiplus::Color(topA, 56, 204, 255));
                Gdiplus::Color gradBot = m_adminMode
                    ? Gdiplus::Color(botA, 202, 102, 12)
                    : (isFrosted ? Gdiplus::Color(botA, 186, 212, 230) : Gdiplus::Color(botA, 14, 152, 233));

                Gdiplus::LinearGradientBrush badgeFill(
                    Gdiplus::PointF(inner.X, inner.Y - 1.0f),
                    Gdiplus::PointF(inner.X, inner.GetBottom() + 1.0f),
                    gradTop, gradBot);
                badgeFill.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
                g.FillPath(&badgeFill, &badgePath);

                iconState = g.Save();
                if (isExec) {
                    float angleDeg = execEase * 360.0f;
                    g.TranslateTransform(cx, cy);
                    g.RotateTransform(angleDeg);
                    g.TranslateTransform(-cx, -cy);
                }

                float badgeIconSz = inner.Width * 0.54f;
                if (m_adminMode) {
                    Gdiplus::Color shieldCol = LerpColor(
                        Gdiplus::Color(255, 245, 158, 11),
                        Gdiplus::Color(255, 254, 240, 138), execGlow);
                    DrawFilledShieldIcon(g, cx, cy, badgeIconSz, shieldCol);
                } else {
                    Gdiplus::Color termCol = LerpColor(
                        isFrosted ? Gdiplus::Color(245, 255, 255, 255) : Gdiplus::Color(255, 56, 189, 248),
                        Gdiplus::Color(255, 236, 250, 255), execGlow);
                    Gdiplus::Color cutCol = isFrosted
                        ? Gdiplus::Color(255, 34, 48, 60)
                        : Gdiplus::Color(255, 12, 32, 48);
                    DrawFilledTerminalIcon(g, cx, cy, badgeIconSz, termCol, cutCol);
                }
            }
            g.Restore(iconState);
        }

        // --------------------------------------------------------------------
        // 3. Text Selection Highlight & Caret
        // --------------------------------------------------------------------
        float caretTextX = MeasureDirectWriteWidth(m_text, m_caret, m_fmtInput);
        float viewW = m_inputRect.Width - 4.0f * m_scale;
        if (caretTextX - m_scrollX > viewW) {
            m_scrollX = caretTextX - viewW;
        } else if (caretTextX - m_scrollX < 0.0f) {
            m_scrollX = caretTextX;
        }
        if (m_text.empty()) m_scrollX = 0.0f;

        {
            Gdiplus::GraphicsState saved = g.Save();
            g.SetClip(m_inputRect);

            float caretH = 19.0f * rScale;
            float caretY = m_inputRect.Y + (m_inputRect.Height - caretH) * 0.5f;

            if (!m_text.empty() && HasSelection()) {
                float x1 = m_inputRect.X + MeasureDirectWriteWidth(m_text, SelStart(), m_fmtInput) - m_scrollX;
                float x2 = m_inputRect.X + MeasureDirectWriteWidth(m_text, SelEnd(), m_fmtInput) - m_scrollX;
                Gdiplus::Color selCol = m_adminMode
                    ? Gdiplus::Color(92, 245, 158, 11)
                    : (isMinimal ? Gdiplus::Color(70, 255, 255, 255) : Gdiplus::Color(92, 56, 189, 248));
                Gdiplus::SolidBrush selBrush(selCol);
                Gdiplus::GraphicsPath selPath;
                AddUniformRoundRect(selPath, x1, caretY - 1.5f * m_scale,
                                    (max)(2.0f, x2 - x1), caretH + 3.0f * m_scale, 4.0f * m_scale);
                g.FillPath(&selBrush, &selPath);
            }

            if (m_caretVisible && !isExec) {
                float cx = m_inputRect.X + caretTextX - m_scrollX;
                Gdiplus::Color caretCol = m_adminMode
                    ? Gdiplus::Color(255, 245, 158, 11)
                    : Gdiplus::Color(255, 244, 244, 247);
                Gdiplus::SolidBrush caretBrush(caretCol);
                Gdiplus::GraphicsPath cp;
                AddUniformRoundRect(cp, cx, caretY, 1.7f * m_scale, caretH, 0.85f * m_scale);
                g.FillPath(&caretBrush, &cp);
            }
            g.Restore(saved);
        }

        // --------------------------------------------------------------------
        // 4. Browse Folder Button (Smooth Hover)
        // --------------------------------------------------------------------
        {
            if (m_hoverBrowseAnim > 0.01f) {
                Gdiplus::SolidBrush hovBrush(Gdiplus::Color(static_cast<BYTE>(30.0f * m_hoverBrowseAnim), 255, 255, 255));
                g.FillEllipse(&hovBrush, m_browseRect);
            }
            float fcx = m_browseRect.X + m_browseRect.Width * 0.5f;
            float fcy = m_browseRect.Y + m_browseRect.Height * 0.5f;
            if (isMinimal) {
                Gdiplus::Color col = LerpColor(Gdiplus::Color(180, 148, 150, 158), Gdiplus::Color(255, 255, 255, 255), m_hoverBrowseAnim);
                DrawOutlineFolderIcon(g, fcx, fcy, m_browseRect.Width * 0.56f, col);
            } else {
                Gdiplus::Color col = LerpColor(Gdiplus::Color(186, 198, 202, 212), Gdiplus::Color(255, 255, 255, 255), m_hoverBrowseAnim);
                DrawFilledFolderIcon(g, fcx, fcy, m_browseRect.Width * 0.48f, col);
            }
        }

        // --------------------------------------------------------------------
        // 5. Run Action Button (Theme-Tailored!)
        // --------------------------------------------------------------------
        std::wstring runBtnText = m_adminMode ? L"Run Admin" : L"Run";
        float runIconSz = (m_adminMode ? 11.5f : 10.5f) * rScale;
        float runIconGap = 6.5f * rScale;
        float runTextW = MeasureDirectWriteWidth(runBtnText, runBtnText.size(), m_fmtButton);
        float runTotalW = runIconSz + runIconGap + runTextW;
        float runContentStartX = m_runBtnRect.X + (m_runBtnRect.Width - runTotalW) * 0.5f;

        {
            float h = m_hoverRunAnim;
            float rcx = m_runBtnRect.X + m_runBtnRect.Width * 0.5f;
            float rcy = m_runBtnRect.Y + m_runBtnRect.Height * 0.5f;

            if (isMinimal) {
                // Minimal 11: Clean outline circle-chevron '( > )' with smooth hover glow
                if (h > 0.01f) {
                    Gdiplus::SolidBrush hov(Gdiplus::Color(static_cast<BYTE>(34.0f * h), 255, 255, 255));
                    g.FillEllipse(&hov, m_runBtnRect);
                }
                Gdiplus::Color baseCol = m_adminMode ? Gdiplus::Color(235, 245, 158, 11) : Gdiplus::Color(195, 156, 158, 166);
                Gdiplus::Color litCol = m_adminMode ? Gdiplus::Color(255, 254, 240, 138) : Gdiplus::Color(255, 255, 255, 255);
                DrawCircleChevronRightIcon(g, rcx, rcy, m_runBtnRect.Width * 0.60f, LerpColor(baseCol, litCol, h));
            } else if (isFrosted) {
                // Frosted Glass: Recessed Liquid Glass inner capsule + RIGHT ARROW ONLY (NO "Run" label!)
                Gdiplus::GraphicsPath btnPath;
                AddUniformRoundRect(btnPath, m_runBtnRect.X, m_runBtnRect.Y,
                                    m_runBtnRect.Width, m_runBtnRect.Height, m_runBtnRect.Height * 0.5f);

                Gdiplus::PointF gStart(m_runBtnRect.X, m_runBtnRect.Y);
                Gdiplus::PointF gEnd(m_runBtnRect.GetRight(), m_runBtnRect.GetBottom());
                Gdiplus::Color c1 = m_adminMode
                    ? LerpColor(Gdiplus::Color(110, 245, 158, 11), Gdiplus::Color(195, 251, 191, 36), h)
                    : LerpColor(Gdiplus::Color(58, 255, 255, 255), Gdiplus::Color(140, 255, 255, 255), h);
                Gdiplus::Color c2 = m_adminMode
                    ? LerpColor(Gdiplus::Color(70, 180, 83, 9), Gdiplus::Color(150, 217, 119, 6), h)
                    : LerpColor(Gdiplus::Color(28, 180, 204, 220), Gdiplus::Color(92, 186, 224, 248), h);

                Gdiplus::LinearGradientBrush fill(gStart, gEnd, c1, c2);
                fill.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
                g.FillPath(&fill, &btnPath);

                Gdiplus::Color rim1 = LerpColor(Gdiplus::Color(145, 255, 255, 255), Gdiplus::Color(245, 255, 255, 255), h);
                Gdiplus::Color rim2 = LerpColor(Gdiplus::Color(60, 255, 255, 255), Gdiplus::Color(180, 255, 255, 255), h);
                Gdiplus::LinearGradientBrush rim(gStart, gEnd, rim1, rim2);
                rim.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
                Gdiplus::Pen border(&rim, 1.15f * m_scale);
                g.DrawPath(&border, &btnPath);

                // Minimal crisp right-pointing arrow '->' (centered!)
                Gdiplus::Color arrowCol = m_adminMode
                    ? Gdiplus::Color(255, 254, 240, 138)
                    : Gdiplus::Color(255, 255, 255, 255);
                DrawRightArrowIcon(g, rcx, rcy, m_runBtnRect.Height * 0.44f, arrowCol);
            } else {
                // Translucent 11 / MPRD Legacy / Midnight Aurora: Centered Icon+Label + Gradient Hover
                Gdiplus::GraphicsPath btnPath;
                AddUniformRoundRect(btnPath, m_runBtnRect.X, m_runBtnRect.Y,
                                    m_runBtnRect.Width, m_runBtnRect.Height, m_runBtnRect.Height * 0.5f);

                Gdiplus::PointF gStart(m_runBtnRect.X, m_runBtnRect.Y);
                Gdiplus::PointF gEnd(m_runBtnRect.GetRight(), m_runBtnRect.GetBottom());

                if (m_adminMode) {
                    Gdiplus::Color c1 = LerpColor(Gdiplus::Color(132, 202, 112, 8), Gdiplus::Color(210, 245, 158, 11), h);
                    Gdiplus::Color c2 = LerpColor(Gdiplus::Color(104, 134, 58, 12), Gdiplus::Color(185, 217, 119, 6), h);
                    Gdiplus::LinearGradientBrush fill(gStart, gEnd, c1, c2);
                    fill.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
                    g.FillPath(&fill, &btnPath);

                    Gdiplus::Pen border(LerpColor(Gdiplus::Color(200, 245, 158, 11), Gdiplus::Color(255, 253, 224, 71), h), 1.15f * m_scale);
                    g.DrawPath(&border, &btnPath);
                } else {
                    Gdiplus::Color baseTop = UsesBlurBackdrop() ? Gdiplus::Color(72, 255, 255, 255) : Gdiplus::Color(235, 78, 80, 88);
                    Gdiplus::Color baseBot = UsesBlurBackdrop() ? Gdiplus::Color(36, 255, 255, 255) : Gdiplus::Color(235, 54, 56, 62);
                    Gdiplus::Color hovLeft = (m_settings.theme == ThemeMode::MidnightAurora)
                        ? Gdiplus::Color(228, 56, 189, 248)
                        : Gdiplus::Color(215, 56, 176, 240);
                    Gdiplus::Color hovRight = (m_settings.theme == ThemeMode::MidnightAurora)
                        ? Gdiplus::Color(228, 139, 92, 246)
                        : Gdiplus::Color(215, 59, 130, 246);

                    Gdiplus::LinearGradientBrush fill(gStart, gEnd, LerpColor(baseTop, hovLeft, h), LerpColor(baseBot, hovRight, h));
                    fill.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
                    g.FillPath(&fill, &btnPath);

                    Gdiplus::LinearGradientBrush rim(gStart, gEnd,
                        LerpColor(Gdiplus::Color(100, 255, 255, 255), Gdiplus::Color(215, 186, 238, 255), h),
                        LerpColor(Gdiplus::Color(34, 255, 255, 255), Gdiplus::Color(145, 196, 181, 253), h));
                    rim.SetWrapMode(Gdiplus::WrapModeTileFlipXY);
                    Gdiplus::Pen border(&rim, 1.15f * m_scale);
                    g.DrawPath(&border, &btnPath);
                }

                Gdiplus::Color iconCol = m_adminMode
                    ? Gdiplus::Color(255, 254, 240, 138)
                    : Gdiplus::Color(255, 252, 252, 255);
                float iconCx = runContentStartX + runIconSz * 0.5f;
                float iconCy = rcy;
                if (m_adminMode) DrawFilledShieldIcon(g, iconCx, iconCy, runIconSz, iconCol);
                else DrawFilledPlayIcon(g, iconCx, iconCy, runIconSz, iconCol);
            }
        }

        // --------------------------------------------------------------------
        // 6. Far-Right Close Button ('X') — hidden in Minimal 11
        // --------------------------------------------------------------------
        if (!isMinimal && m_closeRect.Width > 0) {
            if (m_hoverCloseAnim > 0.01f) {
                Gdiplus::SolidBrush hov(Gdiplus::Color(static_cast<BYTE>(40.0f * m_hoverCloseAnim), 255, 255, 255));
                g.FillEllipse(&hov, m_closeRect);
            }
            Gdiplus::Color xCol = LerpColor(
                Gdiplus::Color(186, 200, 202, 210),
                Gdiplus::Color(255, 255, 255, 255), m_hoverCloseAnim);
            DrawMinimalCloseIcon(g,
                                 m_closeRect.X + m_closeRect.Width * 0.5f,
                                 m_closeRect.Y + m_closeRect.Height * 0.5f,
                                 m_closeRect.Width * 0.35f, xCol);
        }

        // --------------------------------------------------------------------
        // 7. Dropdown Row Highlights & Icons
        // --------------------------------------------------------------------
        if (drawDropdown) {
            Gdiplus::GraphicsState dClip = g.Save();
            g.SetClip(m_dropdownRect);

            for (int i = 0; i < dropCount; ++i) {
                const auto& item = m_suggestions[i];
                Gdiplus::RectF rowRect(
                    m_dropdownRect.X + 8.0f * rScale,
                    m_dropdownRect.Y + m_dropPadY + i * m_dropRowH,
                    m_dropdownRect.Width - 16.0f * rScale,
                    m_dropRowH);

                bool isSelected = (i == m_selectedSuggestion);
                float rowHov = m_hoverDropAnim[i];
                if (isSelected || rowHov > 0.01f) {
                    Gdiplus::GraphicsPath rp;
                    AddUniformRoundRect(rp, rowRect.X, rowRect.Y + 1.0f * m_scale,
                                        rowRect.Width, rowRect.Height - 2.0f * m_scale,
                                        (min)(10.0f * rScale, pillRadius * 0.65f));
                    Gdiplus::Color hlCol;
                    if (isSelected) {
                        BYTE hlA = static_cast<BYTE>((isMinimal ? 34.0f : 54.0f) * dropAlpha);
                        hlCol = m_adminMode ? Gdiplus::Color(hlA, 245, 158, 11)
                                            : (isMinimal ? Gdiplus::Color(hlA, 255, 255, 255)
                                                         : Gdiplus::Color(hlA, 56, 189, 248));
                    } else {
                        BYTE hlA = static_cast<BYTE>(26.0f * rowHov * dropAlpha);
                        hlCol = Gdiplus::Color(hlA, 255, 255, 255);
                    }
                    Gdiplus::SolidBrush hlBrush(hlCol);
                    g.FillPath(&hlBrush, &rp);
                }

                float icx = rowRect.X + (isMinimal ? 18.0f : 20.0f) * rScale;
                float icy = rowRect.Y + rowRect.Height * 0.5f;
                BYTE icA = static_cast<BYTE>((isSelected ? 255.0f : (195.0f + 60.0f * rowHov)) * dropAlpha);

                if (isMinimal) {
                    // Figma SEROJA-LABS: crisp bent sub-arrow '↳'
                    Gdiplus::Color arrCol = isSelected
                        ? Gdiplus::Color(icA, 255, 255, 255)
                        : Gdiplus::Color(icA, 138, 140, 148);
                    DrawReturnSubArrowIcon(g, icx, icy, 13.5f * rScale, arrCol);
                } else {
                    Gdiplus::Color iconCol = isSelected
                        ? (m_adminMode ? Gdiplus::Color(icA, 245, 158, 11) : Gdiplus::Color(icA, 56, 189, 248))
                        : Gdiplus::Color(icA, 196, 200, 210);
                    Gdiplus::Color cutCol(static_cast<BYTE>(255.0f * dropAlpha), 22, 24, 30);

                    switch (item.kind) {
                        case SuggestionKind::Folder:
                            DrawFilledFolderIcon(g, icx, icy, 13.5f * rScale, iconCol);
                            break;
                        case SuggestionKind::Web:
                            DrawFilledGlobeIcon(g, icx, icy, 13.5f * rScale, iconCol, cutCol);
                            break;
                        case SuggestionKind::System:
                            DrawFilledTerminalIcon(g, icx, icy, 14.0f * rScale, iconCol, cutCol);
                            break;
                        case SuggestionKind::History:
                        default:
                            DrawFilledClockIcon(g, icx, icy, 13.5f * rScale, iconCol, cutCol);
                            break;
                    }
                }
            }
            g.Restore(dClip);
        }

        g.Flush(Gdiplus::FlushIntentionSync);

        // --------------------------------------------------------------------
        // 8. Direct2D + DirectWrite Ultra-Smooth Typography Pass
        // --------------------------------------------------------------------
        if (m_d2dTarget) {
            RECT bindRc = {0, 0, m_canvasW, m_canvasH};
            if (SUCCEEDED(m_d2dTarget->BindDC(m_memDC, &bindRc))) {
                m_d2dTarget->BeginDraw();
                m_d2dTarget->SetTextAntialiasMode(D2D1_TEXT_ANTIALIAS_MODE_GRAYSCALE);

                // A. Status tab text
                if (ShowsStatusTab() && m_tabRect.Width > 0 && !tabLabel.empty()) {
                    Gdiplus::RectF tabTextRect(
                        m_tabRect.X + 27.0f * rScale,
                        m_tabRect.Y,
                        m_tabRect.Width - 36.0f * rScale,
                        m_tabH);
                    DrawD2DText(tabLabel, m_fmtTab, tabTextRect, tabTextColor);
                }

                // B. Input / Placeholder / Ghost Autocomplete
                {
                    D2D1_RECT_F clipRc = D2D1::RectF(
                        m_inputRect.X, m_inputRect.Y,
                        m_inputRect.GetRight(), m_inputRect.GetBottom());
                    m_d2dTarget->PushAxisAlignedClip(clipRc, D2D1_ANTIALIAS_MODE_ALIASED);

                    if (m_text.empty()) {
                        std::wstring placeholder = !m_errorMsg.empty() && isMinimal
                            ? m_errorMsg
                            : (m_adminMode
                                ? L"Run a command as Administrator.."
                                : (isMinimal ? L"Type command, app, or path.." : L"Type a command, app, or path.."));
                        D2D1_COLOR_F phCol = (!m_errorMsg.empty() && isMinimal)
                            ? D2D1::ColorF(0.98f, 0.56f, 0.56f, 0.92f)
                            : (isMinimal ? D2D1::ColorF(0.50f, 0.51f, 0.55f, 0.85f)
                                         : D2D1::ColorF(0.84f, 0.86f, 0.90f, 0.72f));
                        DrawD2DText(placeholder, m_fmtInput, m_inputRect, phCol);
                    } else {
                        Gdiplus::RectF scrolledRect(
                            m_inputRect.X - m_scrollX, m_inputRect.Y, 10000.0f, m_inputRect.Height);
                        DrawD2DText(m_text, m_fmtInput, scrolledRect, D2D1::ColorF(0.97f, 0.97f, 0.99f, 1.0f));

                        if (!m_ghostSuffix.empty()) {
                            float fullW = MeasureDirectWriteWidth(m_text, m_text.size(), m_fmtInput);
                            Gdiplus::RectF ghostRect(
                                m_inputRect.X + fullW - m_scrollX, m_inputRect.Y, 10000.0f, m_inputRect.Height);
                            DrawD2DText(m_ghostSuffix, m_fmtInput, ghostRect, D2D1::ColorF(0.72f, 0.74f, 0.78f, 0.52f));
                        }
                    }

                    m_d2dTarget->PopAxisAlignedClip();
                }

                // C. Centered Run button label (omitted for Minimal 11 & Frosted Glass icon-only!)
                if (!isMinimal && !isFrosted) {
                    D2D1_COLOR_F btnCol = m_adminMode
                        ? D2D1::ColorF(0.99f, 0.93f, 0.46f, 1.0f)
                        : D2D1::ColorF(0.98f, 0.98f, 1.0f, 1.0f);
                    Gdiplus::RectF lblRect(
                        runContentStartX + runIconSz + runIconGap,
                        m_runBtnRect.Y,
                        runTextW + 6.0f * m_scale,
                        m_runBtnRect.Height);
                    DrawD2DText(runBtnText, m_fmtButton, lblRect, btnCol);
                }

                // D. Dropdown suggestion rows
                if (drawDropdown) {
                    D2D1_RECT_F dropClip = D2D1::RectF(
                        m_dropdownRect.X, m_dropdownRect.Y,
                        m_dropdownRect.GetRight(), m_dropdownRect.GetBottom());
                    m_d2dTarget->PushAxisAlignedClip(dropClip, D2D1_ANTIALIAS_MODE_ALIASED);

                    for (int i = 0; i < dropCount; ++i) {
                        const auto& item = m_suggestions[i];
                        Gdiplus::RectF rowRect(
                            m_dropdownRect.X + 8.0f * rScale,
                            m_dropdownRect.Y + m_dropPadY + i * m_dropRowH,
                            m_dropdownRect.Width - 16.0f * rScale,
                            m_dropRowH);

                        bool isSelected = (i == m_selectedSuggestion);

                        if (isMinimal) {
                            // Figma SEROJA-LABS: Title on left + descriptive subtitle on right!
                            float descW = rowRect.Width * 0.56f;
                            Gdiplus::RectF titleRect(
                                rowRect.X + 36.0f * rScale,
                                rowRect.Y,
                                (max)(80.0f * rScale, rowRect.Width - descW - 46.0f * rScale),
                                rowRect.Height);
                            DrawD2DText(item.displayTitle, m_fmtRow, titleRect,
                                        isSelected ? D2D1::ColorF(1.0f, 1.0f, 1.0f, dropAlpha)
                                                   : D2D1::ColorF(0.82f, 0.83f, 0.86f, 0.92f * dropAlpha));

                            Gdiplus::RectF descRect(
                                rowRect.GetRight() - descW - 10.0f * rScale,
                                rowRect.Y,
                                descW,
                                rowRect.Height);
                            DrawD2DText(item.description, m_fmtBadge, descRect,
                                        D2D1::ColorF(0.50f, 0.51f, 0.56f, 0.85f * dropAlpha));
                        } else {
                            Gdiplus::RectF cmdRect(
                                rowRect.X + 38.0f * rScale,
                                rowRect.Y,
                                rowRect.Width - 116.0f * rScale,
                                rowRect.Height);
                            DrawD2DText(item.command, m_fmtRow, cmdRect,
                                        isSelected ? D2D1::ColorF(1.0f, 1.0f, 1.0f, dropAlpha)
                                                   : D2D1::ColorF(0.93f, 0.94f, 0.96f, 0.94f * dropAlpha));

                            Gdiplus::RectF badgeTxtRect(
                                rowRect.GetRight() - 74.0f * rScale,
                                rowRect.Y,
                                62.0f * rScale,
                                rowRect.Height);
                            DrawD2DText(item.badge, m_fmtBadge, badgeTxtRect,
                                        D2D1::ColorF(0.76f, 0.78f, 0.84f, 0.72f * dropAlpha));
                        }
                    }
                    m_d2dTarget->PopAxisAlignedClip();
                }

                m_d2dTarget->EndDraw();
            }
        }

        // --------------------------------------------------------------------
        // 9. Present via UpdateLayeredWindow
        // --------------------------------------------------------------------
        POINT ptSrc = {0, 0};
        POINT ptDst = {presentX, presentY};
        SIZE szWnd = {m_canvasW, m_canvasH};
        BLENDFUNCTION blend = {};
        blend.BlendOp = AC_SRC_OVER;
        blend.BlendFlags = 0;
        blend.SourceConstantAlpha = masterAlpha;
        blend.AlphaFormat = AC_SRC_ALPHA;

        HDC screenDC = GetDC(nullptr);
        UpdateLayeredWindow(m_hwnd, screenDC, &ptDst, &szWnd, m_memDC, &ptSrc, 0, &blend, ULW_ALPHA);
        ReleaseDC(nullptr, screenDC);
    }

    // ========================================================================
    // Hit Testing & Mouse / Keyboard Events
    // ========================================================================
    HoverTarget HitTestPoint(float x, float y, int& outDropIndex) const {
        outDropIndex = -1;
        if (!IsMinimal11() && m_closeRect.Contains(x, y)) return HoverTarget::CloseBtn;
        if (m_runBtnRect.Contains(x, y)) return HoverTarget::RunBtn;
        if (m_browseRect.Contains(x, y)) return HoverTarget::BrowseBtn;
        if (m_badgeRect.Contains(x, y)) return HoverTarget::LeftBadge;
        if (ShowsStatusTab() &&
            Gdiplus::RectF(m_tabRect.X, m_tabRect.Y, m_tabRect.Width, m_tabH).Contains(x, y)) {
            return HoverTarget::StatusTab;
        }
        if (m_inputRect.Contains(x, y)) return HoverTarget::InputArea;

        if (m_dropdownOpen && m_dropdownRect.Height > 0 && m_dropdownRect.Contains(x, y)) {
            float relY = y - (m_dropdownRect.Y + m_dropPadY);
            if (relY >= 0.0f) {
                int idx = static_cast<int>(relY / m_dropRowH);
                if (idx >= 0 && idx < GetVisibleSuggestionCount()) {
                    outDropIndex = idx;
                    return HoverTarget::DropdownItem;
                }
            }
        }
        return HoverTarget::None;
    }

    void UpdateHoverCursor(HoverTarget target) {
        switch (target) {
            case HoverTarget::InputArea:
                SetCursor(LoadCursorW(nullptr, reinterpret_cast<LPCWSTR>(IDC_IBEAM)));
                break;
            case HoverTarget::StatusTab:
            case HoverTarget::LeftBadge:
            case HoverTarget::BrowseBtn:
            case HoverTarget::RunBtn:
            case HoverTarget::CloseBtn:
            case HoverTarget::DropdownItem:
                SetCursor(LoadCursorW(nullptr, reinterpret_cast<LPCWSTR>(IDC_HAND)));
                break;
            default:
                SetCursor(LoadCursorW(nullptr, reinterpret_cast<LPCWSTR>(IDC_ARROW)));
                break;
        }
    }

    static LRESULT CALLBACK StaticWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
        ModernRunDialog* self = nullptr;
        if (msg == WM_NCCREATE) {
            auto* cs = reinterpret_cast<CREATESTRUCTW*>(lParam);
            self = static_cast<ModernRunDialog*>(cs->lpCreateParams);
            SetWindowLongPtrW(hwnd, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(self));
        } else {
            self = reinterpret_cast<ModernRunDialog*>(GetWindowLongPtrW(hwnd, GWLP_USERDATA));
        }
        if (self) {
            return self->HandleMessage(hwnd, msg, wParam, lParam);
        }
        return DefWindowProcW(hwnd, msg, wParam, lParam);
    }

    LRESULT HandleMessage(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
        switch (msg) {
            case kMsgExecuteNow: {
                if (m_animState != AnimState::LaunchPending) {
                    return 0;
                }
                m_animState = AnimState::Launching;
                std::wstring err;
                bool ok = ExecuteRunCommand(m_pendingCommand, m_workingDir,
                                            m_adminMode || m_execForceAdmin, err);
                if (ok) {
                    RequestSmoothClose();
                } else {
                    m_hasTriggeredExec = false;
                    m_animState = AnimState::Idle;
                    m_execProgress = 0.0f;
                    ShowError(err);
                }
                return 0;
            }

            case WM_TIMER: {
                if (wParam == kTimerCaret) {
                    m_caretVisible = !m_caretVisible;
                    RenderAndPresent();
                } else if (wParam == kTimerAnim) {
                    ULONGLONG now = GetTickCount64();
                    float dt = (min)(0.05f, static_cast<float>(now - m_lastAnimTick) / 1000.0f);
                    m_lastAnimTick = now;

                    auto stepHover = [&](float& val, bool active) {
                        float speed = active ? 8.5f : 7.0f;
                        if (active) val = (min)(1.0f, val + dt * speed);
                        else val = (max)(0.0f, val - dt * speed);
                    };
                    stepHover(m_hoverTabAnim, m_hover == HoverTarget::StatusTab);
                    stepHover(m_hoverBadgeAnim, m_hover == HoverTarget::LeftBadge);
                    stepHover(m_hoverBrowseAnim, m_hover == HoverTarget::BrowseBtn);
                    stepHover(m_hoverRunAnim, m_hover == HoverTarget::RunBtn);
                    stepHover(m_hoverCloseAnim, m_hover == HoverTarget::CloseBtn);
                    for (int i = 0; i < 5; ++i) {
                        bool rowHov = (m_hover == HoverTarget::DropdownItem && m_hoverSuggestion == i);
                        stepHover(m_hoverDropAnim[i], rowHov);
                    }

                    if (m_typePulse > 0.0f) {
                        m_typePulse = (max)(0.0f, m_typePulse - dt * 5.2f);
                    }

                    float targetDrop = m_dropdownOpen ? 1.0f : 0.0f;
                    if (m_dropProgress < targetDrop) {
                        m_dropProgress = (min)(1.0f, m_dropProgress + dt * 5.8f);
                    } else if (m_dropProgress > targetDrop) {
                        m_dropProgress = (max)(0.0f, m_dropProgress - dt * 6.8f);
                    }

                    if (m_animState == AnimState::Opening) {
                        ULONGLONG elapsed = now - m_animStartTick;
                        m_openProgress = (min)(1.0f, static_cast<float>(elapsed) / 260.0f);
                        if (m_openProgress >= 1.0f) {
                            m_animState = AnimState::Idle;
                        }
                    } else if (m_animState == AnimState::Executing) {
                        ULONGLONG elapsed = now - m_animStartTick;
                        m_execProgress = (min)(1.0f, static_cast<float>(elapsed) / 380.0f);
                        if (m_execProgress >= 1.0f) {
                            m_animState = AnimState::LaunchPending;
                            KillTimer(hwnd, kTimerAnim);
                            m_animTimerActive = false;
                            ComputeLayoutMetrics();
                            RenderAndPresent();
                            PostMessageW(hwnd, kMsgExecuteNow, 0, 0);
                            return 0;
                        }
                    } else if (m_animState == AnimState::Closing) {
                        ULONGLONG elapsed = now - m_animStartTick;
                        float t = (min)(1.0f, static_cast<float>(elapsed) / 170.0f);
                        m_openProgress = 1.0f - t;
                        if (t >= 1.0f) {
                            DestroyWindow(hwnd);
                            return 0;
                        }
                    }

                    ComputeLayoutMetrics();
                    RenderAndPresent();
                    StopAnimTimerIfIdle();
                } else if (wParam == kTimerErrorClear) {
                    ClearError();
                    ComputeLayoutMetrics();
                    RenderAndPresent();
                }
                return 0;
            }

            case WM_ACTIVATE: {
                if (LOWORD(wParam) == WA_INACTIVE &&
                    m_settings.closeOnFocusLoss &&
                    !m_browseDialogOpen &&
                    !IsBusyState()) {
                    RequestSmoothClose();
                }
                return 0;
            }

            case WM_SETCURSOR: {
                if (LOWORD(lParam) == HTCLIENT) {
                    UpdateHoverCursor(m_hover);
                    return TRUE;
                }
                break;
            }

            case WM_MOUSEMOVE: {
                float mx = static_cast<float>(GET_X_LPARAM(lParam));
                float my = static_cast<float>(GET_Y_LPARAM(lParam));

                if (!m_mouseTracked) {
                    TRACKMOUSEEVENT tme = {};
                    tme.cbSize = sizeof(tme);
                    tme.dwFlags = TME_LEAVE;
                    tme.hwndTrack = hwnd;
                    TrackMouseEvent(&tme);
                    m_mouseTracked = true;
                }

                if (m_isDraggingWindow) {
                    POINT cur = {};
                    GetCursorPos(&cur);
                    m_winX = m_dragStartWin.x + (cur.x - m_dragStartCursor.x);
                    m_winY = m_dragStartWin.y + (cur.y - m_dragStartCursor.y);
                    // Live 60fps real-time Acrylic blur update while dragging!
                    RenderAndPresent();
                    return 0;
                }

                if (m_isSelectingText) {
                    m_caret = HitTestCaretIndex(mx);
                    m_caretVisible = true;
                    RenderAndPresent();
                    return 0;
                }

                int dropIdx = -1;
                HoverTarget nextHover = HitTestPoint(mx, my, dropIdx);
                if (nextHover != m_hover || dropIdx != m_hoverSuggestion) {
                    m_hover = nextHover;
                    m_hoverSuggestion = dropIdx;
                    UpdateHoverCursor(m_hover);
                    if (m_settings.enableAnimation) {
                        StartAnimTimer();
                    } else {
                        m_hoverTabAnim = (m_hover == HoverTarget::StatusTab) ? 1.0f : 0.0f;
                        m_hoverBadgeAnim = (m_hover == HoverTarget::LeftBadge) ? 1.0f : 0.0f;
                        m_hoverBrowseAnim = (m_hover == HoverTarget::BrowseBtn) ? 1.0f : 0.0f;
                        m_hoverRunAnim = (m_hover == HoverTarget::RunBtn) ? 1.0f : 0.0f;
                        m_hoverCloseAnim = (m_hover == HoverTarget::CloseBtn) ? 1.0f : 0.0f;
                        for (int i = 0; i < 5; ++i) {
                            m_hoverDropAnim[i] = (m_hover == HoverTarget::DropdownItem && m_hoverSuggestion == i) ? 1.0f : 0.0f;
                        }
                        RenderAndPresent();
                    }
                }
                return 0;
            }

            case WM_MOUSELEAVE: {
                m_mouseTracked = false;
                if (m_hover != HoverTarget::None) {
                    m_hover = HoverTarget::None;
                    m_hoverSuggestion = -1;
                    if (m_settings.enableAnimation) {
                        StartAnimTimer();
                    } else {
                        m_hoverTabAnim = m_hoverBadgeAnim = m_hoverBrowseAnim = m_hoverRunAnim = m_hoverCloseAnim = 0.0f;
                        for (int i = 0; i < 5; ++i) m_hoverDropAnim[i] = 0.0f;
                        RenderAndPresent();
                    }
                }
                return 0;
            }

            case WM_LBUTTONDOWN: {
                if (IsBusyState()) return 0;

                float mx = static_cast<float>(GET_X_LPARAM(lParam));
                float my = static_cast<float>(GET_Y_LPARAM(lParam));
                int dropIdx = -1;
                HoverTarget hit = HitTestPoint(mx, my, dropIdx);

                if (hit == HoverTarget::CloseBtn) {
                    RequestSmoothClose();
                    return 0;
                }
                if (hit == HoverTarget::RunBtn) {
                    TriggerExecute(false);
                    return 0;
                }
                if (hit == HoverTarget::BrowseBtn) {
                    OpenBrowseDialog();
                    return 0;
                }
                if (hit == HoverTarget::StatusTab || hit == HoverTarget::LeftBadge) {
                    m_adminMode = !m_adminMode;
                    ClearError();
                    ComputeLayoutMetrics();
                    RenderAndPresent();
                    return 0;
                }
                if (hit == HoverTarget::DropdownItem && dropIdx >= 0) {
                    m_text = m_suggestions[dropIdx].command;
                    m_caret = m_text.size();
                    m_selAnchor = m_caret;
                    m_selectedSuggestion = -1;
                    TriggerExecute(false);
                    return 0;
                }
                if (hit == HoverTarget::InputArea) {
                    size_t idx = HitTestCaretIndex(mx);
                    m_caret = idx;
                    if (!(GetKeyState(VK_SHIFT) & 0x8000)) {
                        m_selAnchor = idx;
                    }
                    m_isSelectingText = true;
                    m_caretVisible = true;
                    ResetCaretTimer();
                    SetCapture(hwnd);
                    RenderAndPresent();
                    return 0;
                }

                if (m_pillRect.Contains(mx, my)) {
                    if (m_settings.allowDragMove) {
                        m_isDraggingWindow = true;
                        GetCursorPos(&m_dragStartCursor);
                        m_dragStartWin = {m_winX, m_winY};
                        SetCapture(hwnd);
                    }
                    return 0;
                }

                if (m_settings.closeOnFocusLoss) {
                    RequestSmoothClose();
                }
                return 0;
            }

            case WM_LBUTTONDBLCLK: {
                float mx = static_cast<float>(GET_X_LPARAM(lParam));
                float my = static_cast<float>(GET_Y_LPARAM(lParam));
                if (m_inputRect.Contains(mx, my)) {
                    m_selAnchor = 0;
                    m_caret = m_text.size();
                    RenderAndPresent();
                }
                return 0;
            }

            case WM_LBUTTONUP: {
                if (m_isSelectingText || m_isDraggingWindow) {
                    m_isSelectingText = false;
                    m_isDraggingWindow = false;
                    ReleaseCapture();
                }
                return 0;
            }

            case WM_KEYDOWN: {
                if (IsBusyState()) return 0;

                const bool ctrl = (GetKeyState(VK_CONTROL) & 0x8000) != 0;
                const bool shift = (GetKeyState(VK_SHIFT) & 0x8000) != 0;

                switch (wParam) {
                    case VK_ESCAPE:
                        if (m_dropdownOpen) {
                            m_dropdownOpen = false;
                            m_selectedSuggestion = -1;
                            if (!m_settings.enableAnimation) m_dropProgress = 0.0f;
                            else StartAnimTimer();
                            ComputeLayoutMetrics();
                            RenderAndPresent();
                        } else {
                            RequestSmoothClose();
                        }
                        return 0;

                    case VK_RETURN:
                        TriggerExecute(ctrl && shift);
                        return 0;

                    case VK_TAB:
                        if (!m_ghostSuffix.empty()) {
                            m_text += m_ghostSuffix;
                            m_caret = m_text.size();
                            m_selAnchor = m_caret;
                            OnTextChanged();
                        } else if (m_dropdownOpen && m_selectedSuggestion >= 0) {
                            m_text = m_suggestions[m_selectedSuggestion].command;
                            m_caret = m_text.size();
                            m_selAnchor = m_caret;
                            OnTextChanged();
                        } else if (!m_suggestions.empty()) {
                            m_text = m_suggestions[0].command;
                            m_caret = m_text.size();
                            m_selAnchor = m_caret;
                            OnTextChanged();
                        }
                        return 0;

                    case VK_DOWN:
                        if (m_settings.showHistoryDropdown && !m_suggestions.empty()) {
                            if (!m_dropdownOpen) {
                                m_dropdownOpen = true;
                                m_selectedSuggestion = 0;
                                if (!m_settings.enableAnimation) m_dropProgress = 1.0f;
                                else StartAnimTimer();
                            } else {
                                int cnt = GetVisibleSuggestionCount();
                                m_selectedSuggestion = (m_selectedSuggestion + 1) % cnt;
                            }
                            ComputeLayoutMetrics();
                            RenderAndPresent();
                        }
                        return 0;

                    case VK_UP:
                        if (m_settings.showHistoryDropdown && !m_suggestions.empty()) {
                            if (!m_dropdownOpen && m_dropUpward) {
                                m_dropdownOpen = true;
                                m_selectedSuggestion = GetVisibleSuggestionCount() - 1;
                                if (!m_settings.enableAnimation) m_dropProgress = 1.0f;
                                else StartAnimTimer();
                                ComputeLayoutMetrics();
                            } else if (m_dropdownOpen) {
                                int cnt = GetVisibleSuggestionCount();
                                m_selectedSuggestion = (m_selectedSuggestion <= 0) ? (cnt - 1) : (m_selectedSuggestion - 1);
                            }
                            RenderAndPresent();
                        }
                        return 0;

                    case VK_LEFT:
                        if (!shift && HasSelection()) {
                            m_caret = SelStart();
                            m_selAnchor = m_caret;
                        } else if (m_caret > 0) {
                            if (ctrl) {
                                while (m_caret > 0 && m_text[m_caret - 1] == L' ') --m_caret;
                                while (m_caret > 0 && m_text[m_caret - 1] != L' ') --m_caret;
                            } else {
                                --m_caret;
                            }
                            if (!shift) m_selAnchor = m_caret;
                        }
                        m_caretVisible = true;
                        ResetCaretTimer();
                        RebuildSuggestions();
                        RenderAndPresent();
                        return 0;

                    case VK_RIGHT:
                        if (!shift && !ctrl && !m_ghostSuffix.empty() && m_caret == m_text.size()) {
                            m_text += m_ghostSuffix;
                            m_caret = m_text.size();
                            m_selAnchor = m_caret;
                            OnTextChanged();
                            return 0;
                        }
                        if (!shift && HasSelection()) {
                            m_caret = SelEnd();
                            m_selAnchor = m_caret;
                        } else if (m_caret < m_text.size()) {
                            if (ctrl) {
                                while (m_caret < m_text.size() && m_text[m_caret] != L' ') ++m_caret;
                                while (m_caret < m_text.size() && m_text[m_caret] == L' ') ++m_caret;
                            } else {
                                ++m_caret;
                            }
                            if (!shift) m_selAnchor = m_caret;
                        }
                        m_caretVisible = true;
                        ResetCaretTimer();
                        RebuildSuggestions();
                        RenderAndPresent();
                        return 0;

                    case VK_HOME:
                        m_caret = 0;
                        if (!shift) m_selAnchor = m_caret;
                        m_caretVisible = true;
                        ResetCaretTimer();
                        RenderAndPresent();
                        return 0;

                    case VK_END:
                        m_caret = m_text.size();
                        if (!shift) m_selAnchor = m_caret;
                        m_caretVisible = true;
                        ResetCaretTimer();
                        RebuildSuggestions();
                        RenderAndPresent();
                        return 0;

                    case VK_BACK:
                        if (HasSelection()) {
                            DeleteSelection();
                            OnTextChanged();
                        } else if (m_caret > 0) {
                            if (ctrl) {
                                size_t endPos = m_caret;
                                while (m_caret > 0 && m_text[m_caret - 1] == L' ') --m_caret;
                                while (m_caret > 0 && m_text[m_caret - 1] != L' ') --m_caret;
                                m_text.erase(m_caret, endPos - m_caret);
                            } else {
                                m_text.erase(m_caret - 1, 1);
                                --m_caret;
                            }
                            m_selAnchor = m_caret;
                            OnTextChanged();
                        }
                        return 0;

                    case VK_DELETE:
                        if (HasSelection()) {
                            DeleteSelection();
                            OnTextChanged();
                        } else if (m_caret < m_text.size()) {
                            m_text.erase(m_caret, 1);
                            OnTextChanged();
                        }
                        return 0;

                    case 'A':
                        if (ctrl) {
                            m_selAnchor = 0;
                            m_caret = m_text.size();
                            RenderAndPresent();
                            return 0;
                        }
                        break;

                    case 'C':
                        if (ctrl) {
                            CopyToClipboard();
                            return 0;
                        }
                        break;

                    case 'X':
                        if (ctrl) {
                            CopyToClipboard();
                            DeleteSelection();
                            OnTextChanged();
                            return 0;
                        }
                        break;

                    case 'V':
                        if (ctrl) {
                            PasteFromClipboard();
                            return 0;
                        }
                        break;
                }
                return 0;
            }

            case WM_CHAR: {
                wchar_t ch = static_cast<wchar_t>(wParam);
                if (ch < 0x20 || ch == 0x7F) return 0;
                InsertText(std::wstring(1, ch));
                return 0;
            }

            case WM_DESTROY: {
                KillTimer(hwnd, kTimerCaret);
                KillTimer(hwnd, kTimerAnim);
                KillTimer(hwnd, kTimerErrorClear);
                m_animTimerActive = false;
                UnregisterTaskbarTab();
                PostQuitMessage(0);
                return 0;
            }
        }
        return DefWindowProcW(hwnd, msg, wParam, lParam);
    }
};

// ============================================================================
// shell32.dll Ordinal 61 (RunFileDlg) Hook
// ============================================================================
using RunFileDlg_t = void(WINAPI*)(
    HWND hwndOwner,
    HICON hIcon,
    LPCWSTR lpstrDirectory,
    LPCWSTR lpstrTitle,
    LPCWSTR lpstrDescription,
    UINT uFlags);

RunFileDlg_t RunFileDlg_Original = nullptr;

void WINAPI RunFileDlg_Hook(
    HWND hwndOwner,
    HICON hIcon,
    LPCWSTR lpstrDirectory,
    LPCWSTR lpstrTitle,
    LPCWSTR lpstrDescription,
    UINT uFlags) {
    if (g_modUnloading.load()) {
        if (RunFileDlg_Original) {
            RunFileDlg_Original(hwndOwner, hIcon, lpstrDirectory, lpstrTitle, lpstrDescription, uFlags);
        }
        return;
    }

    HWND existing = g_activeDialogHwnd.load();
    if (existing && IsWindow(existing)) {
        SetForegroundWindow(existing);
        return;
    }

    std::wstring workDir = lpstrDirectory ? lpstrDirectory : L"";
    ModSettings snapshot = GetSettingsSnapshot();

    ModernRunDialog dlg(workDir, snapshot);
    dlg.RunModal();
}

} // namespace

// ============================================================================
// Windhawk Lifecycle Callbacks
// ============================================================================
BOOL Wh_ModInit() {
    Wh_Log(L"Initializing MPRD - Modern Pill Run Dialog v1.2.0");
    LoadSettings();

    HMODULE hShell32 = LoadLibraryW(L"shell32.dll");
    if (!hShell32) {
        Wh_Log(L"Failed to load shell32.dll");
        return FALSE;
    }

    // RunFileDlg is exported at ordinal 61 in shell32.dll
    void* pRunFileDlg = reinterpret_cast<void*>(GetProcAddress(hShell32, MAKEINTRESOURCEA(61)));
    if (!pRunFileDlg) {
        Wh_Log(L"Failed to locate RunFileDlg (ordinal 61) in shell32.dll");
        return FALSE;
    }

    if (!Wh_SetFunctionHook(pRunFileDlg,
                            reinterpret_cast<void*>(RunFileDlg_Hook),
                            reinterpret_cast<void**>(&RunFileDlg_Original))) {
        Wh_Log(L"Failed to hook RunFileDlg");
        return FALSE;
    }

    return TRUE;
}

void Wh_ModUninit() {
    Wh_Log(L"Uninitializing MPRD - Modern Pill Run Dialog");
    g_modUnloading.store(true);
    HWND active = g_activeDialogHwnd.load();
    if (active && IsWindow(active)) {
        PostMessageW(active, WM_CLOSE, 0, 0);
        for (int i = 0; i < 100 && g_activeDialogHwnd.load() != nullptr; ++i) {
            Sleep(10);
        }
    }
}

void Wh_ModSettingsChanged() {
    Wh_Log(L"MPRD - Modern Pill Run Dialog settings reloaded");
    LoadSettings();
}
