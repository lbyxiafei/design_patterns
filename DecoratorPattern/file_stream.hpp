#pragma once

#include <bits/stdc++.h>

#include "stream.hpp"

class FileStream : public Stream{
public:
    FileStream();
    ~FileStream();
    void handleBufferFull() override;
};