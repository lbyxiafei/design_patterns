#pragma once

#include <bits/stdc++.h>

#include "builder.hpp"
#include "bike.hpp"

class Director{
private:
    std::unique_ptr<Builder> builder_;
public:
    Director();
    Director(std::unique_ptr<Builder> builder);
    std::unique_ptr<Bike> create(std::string color, int height);
};