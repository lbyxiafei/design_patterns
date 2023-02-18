
#include<bits/stdc++.h>

#include "bike.hpp"

Bike::Bike() = default;

Bike::Bike(std::string make, std::string model) : make_(make), model_(model){}

void Bike::setMake(std::string make){
    make_=make;
}

void Bike::setModel(std::string model){
    model_=model;
}

void Bike::setColor(std::string color){
    color_=color;
}

void Bike::setHeight(int height){
    height_=height;
}

void Bike::out(){
    std::cout << make_ << ',' << model_ << ',' << color_ << ',' << height_ << std::endl;

}