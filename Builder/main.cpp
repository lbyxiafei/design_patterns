#include <bits/stdc++.h>

#include "director.hpp"
#include "builder.hpp"
#include "bike.hpp"


int main(){
    std::cout << "hello" << std::endl;

    Director d;
    std::unique_ptr<Bike> bike=d.create("Red", 34);
    bike->out();

    // 这里使用多态extend builder
    std::unique_ptr<Builder> builder2 = std::make_unique<Builder>(); 
    Director d2(std::move(builder2));
    std::unique_ptr<Bike> bike2=d2.create("Gold", 36);
    bike2->out();

    return 0;
}