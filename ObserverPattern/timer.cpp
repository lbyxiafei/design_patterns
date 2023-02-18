#include <bits/stdc++.h>

#include "timer.hpp"

Timer::Timer() = default;

Timer::~Timer() = default;

std::string Timer::GetInfo(){
    return info_;
}

void Timer::SetInfo(std::string s){
    info_=s;
}