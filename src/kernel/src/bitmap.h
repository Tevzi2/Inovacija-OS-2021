#pragma once

#include "typedef.h"

class Bitmap
{
    public:
        size_t size;
        u8* Buffer;

        bool operator[](u64 index);

        bool set(u64 index, bool value);
};