#include "state.hpp"
#include "phone.hpp"

Phone::Phone(){
    _state = State::getInstance();
}

void Phone::pressHomeButton(){
    _state->handleHomePressed();
}

void Phone::pressPowerButton(){
    _state->handlePowerPressed();
}

void Phone::changeState(unique_ptr<State> state){
    _state = state;
}