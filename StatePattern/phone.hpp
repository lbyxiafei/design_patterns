#pragma once

#include <bits/stdc++.h>
#include "state.hpp"

class State;

class Phone{
public:
    Phone();
    void pressHomeButton();
    void pressPowerButton();
private:
    friend class State;
    std::unique_ptr<State> _state;
    void changeState(std::unique_ptr<State>);
};