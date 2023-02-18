#include "phone.hpp"
#include "state.hpp"
#include "off_state.hpp"
#include "locked_state.hpp"
#include "ready_state.hpp"

Phone::Phone(){
    _state = std::make_shared<OffState>();
}

Phone::~Phone(){}

void Phone::pressHomeButton(){
    _state->handleHomePressed(*this);
}

void Phone::pressPowerButton(){
    _state->handlePowerPressed(*this);
}

void Phone::changeState(std::shared_ptr<State> state){
    _state = state;
}