#include <bits/stdc++.h>

#include "stream.hpp"
#include "compress_decorator.hpp"

CompressDecorator::CompressDecorator(std::shared_ptr<Stream> sp){
    sp_=sp;
}

CompressDecorator::~CompressDecorator()=default;

void CompressDecorator::putString(std::string s) {
    sp_->putString(s);
}

void CompressDecorator::handleBufferFull() {
    std::cout << "compress: \n";
    sp_->handleBufferFull();
}