#pragma once

#include<bits/stdc++.h>

#include "bike.hpp"

class Builder{
private:
    std::unique_ptr<Bike> bike_;
public:
    Builder();

    Builder* buildMake(std::string make);
    Builder* buildModel(std::string model);
    Builder* buildColor(std::string color);
    Builder* buildHeight(int height);

    std::unique_ptr<Bike> build();
};
