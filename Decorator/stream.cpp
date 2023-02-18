#include <bits/stdc++.h>

#include "stream.hpp"

Stream::Stream() : capacity_(10) {}

Stream::~Stream() = default;

void Stream::putString(std::string s){
    buffer_+=s;
}
