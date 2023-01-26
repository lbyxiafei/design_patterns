#pragma once

#include <bits/stdc++.h>

#include "stream.hpp"

class CompressDecorator:public Stream{
public:
    CompressDecorator(std::shared_ptr<Stream>);
    ~CompressDecorator();
    void putString(std::string);
    void handleBufferFull() override;
private:
    std::shared_ptr<Stream> sp_;
};