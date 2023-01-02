#include <bits/stdc++.h>
#include "state.hpp"

using namespace std;

State::State()=default;

State& State::getInstance() {
   static State state;
   return state;
}

void State::handleHomePressed(){
}

void State::handlePowerPressed(){
}