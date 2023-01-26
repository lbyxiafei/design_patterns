#include <bits/stdc++.h>

#include "stream.hpp"
#include "file_stream.hpp"

FileStream::FileStream()=default;

FileStream::~FileStream()=default;

void FileStream::handleBufferFull(){
    while(buffer_.size() > capacity_){
        std::string t=buffer_.substr(0,capacity_);
        buffer_=buffer_.substr(capacity_);
        std::cout << "buffer: " << t << " saved to file.\n";
    }
}