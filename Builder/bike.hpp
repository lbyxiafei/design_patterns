#pragma once

#include<bits/stdc++.h>

class Bike{
private:
    std::string make_;
    std::string model_;
    std::string color_;
    int height_;
public:
    Bike();
    Bike(std::string make, std::string model);
    void setMake(std::string make);
    void setModel(std::string model_);
    void setColor(std::string color_);
    void setHeight(int height);
    void out();
};