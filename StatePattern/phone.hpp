#pragma once

#include "state.hpp"

class Phone{
public:
    void pressHomeButton();
    void pressPowerButton();
private:
    friend class State;
    void changeState(State&);
};