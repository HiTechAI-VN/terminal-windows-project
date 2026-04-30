// Copyright (c) Pho Tue SoftWare Solutions JSC.
// Licensed under the MIT license.

namespace winrt::Microsoft::Terminal::Settings::Model
{
    bool IsPortableMode();
    std::filesystem::path GetBaseSettingsPath();
    std::filesystem::path GetReleaseSettingsPath();
}
