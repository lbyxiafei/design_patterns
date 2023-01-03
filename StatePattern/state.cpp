#include <bits/stdc++.h>
#include "state.hpp"

State::State()=default;

State& State::getInstance() {
   static State state;
   return state;
}

void State::handleHomePressed(){
    std::cout << "handle home pressed" << '\n';
}

void State::handlePowerPressed(){
    std::cout << "handle power pressed" << '\n';
}