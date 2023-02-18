#include <bits/stdc++.h>

#include "subject.hpp"
#include "digital_clock.hpp"

DigitalClock::DigitalClock() = default;

DigitalClock::~DigitalClock() = default;

void DigitalClock::Update(Subject* sub){
    ts_ = sub->GetInfo();
    Display();
}

void DigitalClock::Display(){
    std::cout << ts_ << '\n';
}