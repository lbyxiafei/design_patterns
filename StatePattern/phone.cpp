#include "state.hpp"
#include "phone.hpp"

Phone::Phone(){
    _state = std::make_shared<State>(State::getInstance());
}

Phone::~Phone(){}

void Phone::pressHomeButton(){
    _state->handleHomePressed();
}

void Phone::pressPowerButton(){
    _state->handlePowerPressed();
}

void Phone::changeState(std::shared_ptr<State> state){
    _state = state;
}