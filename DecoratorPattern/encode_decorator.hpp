#pragma once

#include <bits/stdc++.h>

#include "stream.hpp"

class EncodedDecorator:public Stream{
public:
    EncodedDecorator(std::shared_ptr<Stream>);
    ~EncodedDecorator();
    void putString(std::string);
    void handleBufferFull() override;
private:
    std::shared_ptr<Stream> sp_;
};