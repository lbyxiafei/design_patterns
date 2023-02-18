#include<bits/stdc++.h>

#include "director.hpp"
#include "builder.hpp"
#include "bike.hpp"

Director::Director(){
    builder_=std::make_unique<Builder>();
}

Director::Director(std::unique_ptr<Builder> builder){
    builder_=std::move(builder);
}

std::unique_ptr<Bike> Director::create(std::string color, int height){
    return std::move(builder_->buildColor(color)->buildHeight(height)->build());
}