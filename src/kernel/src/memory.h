#pragma once

#include "typedef.h"
#include "boot.h"

u64 getMemorySize(EFI_MEMORY_DESCRIPTOR* mMap, u64 memMapEntries, u64 memMapDescSize);

void memset(void* start, u8 value, u64 amount);