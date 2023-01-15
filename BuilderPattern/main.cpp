#include <bits/stdc++.h>

#include "director.hpp"
#include "builder.hpp"
#include "bike.hpp"


int main(){
    std::cout << "hello" << std::endl;

    Director d;
    auto bike=d.create("Red", 34);
    bike->out();

    auto builder2 = std::make_unique<Bike>("Gold", 36);
    Director d2(std::move(builder2));

    return 0;
}