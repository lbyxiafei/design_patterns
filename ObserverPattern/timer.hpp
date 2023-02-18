#pragma once

#include <bits/stdc++.h>

#include "observer.hpp"

class Timer : public Subject{
public:
    Timer();
    ~Timer();
    std::string GetInfo() override;
    void SetInfo(std::string) override;
private:
    std::string info_;
};