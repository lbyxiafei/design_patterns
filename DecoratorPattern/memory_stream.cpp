#include <bits/stdc++.h>

#include "stream.hpp"
#include "memory_stream.hpp"

MemoryStream::MemoryStream()=default;

MemoryStream::~MemoryStream()=default;

void MemoryStream::handleBufferFull(){
    while(buffer_.size() > capacity_){
        std::string t=buffer_.substr(0,capacity_);
        buffer_=buffer_.substr(capacity_);
        std::cout << "buffer: " << t << " saved to memory.\n";
    }
}