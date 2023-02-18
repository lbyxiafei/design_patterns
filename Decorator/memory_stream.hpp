#pragma once

#include <bits/stdc++.h>

#include "stream.hpp"

class MemoryStream : public Stream{
public:
    MemoryStream();
    ~MemoryStream();
    void handleBufferFull() override;
};