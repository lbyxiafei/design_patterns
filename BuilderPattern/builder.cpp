#include<bits/stdc++.h>

#include "builder.hpp"
#include "bike.hpp"

Builder::Builder(){
    bike_=std::make_unique<Bike>("standard","average");
}

Builder* Builder::buildMake(std::string make){
    bike_->setMake(make);
    return this;
}
Builder* Builder::buildModel(std::string model){
    bike_->setModel(model);
    return this;
}
Builder* Builder::buildColor(std::string color){
    bike_->setColor(color);
    return this;
}
Builder* Builder::buildHeight(int height){
    bike_->setHeight(height);
    return this;
}

std::unique_ptr<Bike> Builder::build(){
    return std::move(bike_);
}