// Copyright (c) Pho Tue SoftWare Solutions JSC.
// Licensed under the MIT license.

#pragma once

class ConsoleArguments;

[[nodiscard]] HRESULT ConsoleCreateIoThreadLegacy(_In_ HANDLE Server, const ConsoleArguments* const args);
