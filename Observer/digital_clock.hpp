#pragma once

#include <bits/stdc++.h>

#include "subject.hpp"

class Subject;

class DigitalClock : public Observer{
public:
    DigitalClock();
    ~DigitalClock();
    void Update(Subject*) override;
    void Display();
private:
    std::string ts_;
};