#include <bits/stdc++.h>

#include "stream.hpp"
#include "encode_decorator.hpp"

EncodedDecorator::EncodedDecorator(std::shared_ptr<Stream> sp){
    sp_=sp;
}

EncodedDecorator::~EncodedDecorator()=default;

void EncodedDecorator::putString(std::string s) {
    sp_->putString(s);
}

void EncodedDecorator::handleBufferFull() {
    std::cout << "encoded: \n";
    sp_->handleBufferFull();
}