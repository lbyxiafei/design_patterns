#pragma once

#include <bits/stdc++.h>

class Stream{
public:
    Stream();
    ~Stream();
    virtual void putString(std::string);
    virtual void handleBufferFull()=0;
protected:
    std::string buffer_;
    int capacity_;
};