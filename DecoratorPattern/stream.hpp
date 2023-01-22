#pragma once

#include <bits/stdc++.h>

class Stream{
public:
    Stream();
    void putInt();
    void putString();
    virtual void handleBufferFull();
private:
    std::string _buffer;
};