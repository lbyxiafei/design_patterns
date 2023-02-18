#pragma once

#include <bits/stdc++.h>
#include "state.hpp"

class State;
class OffState; 
class LockedState; 
class ReadyState;

class Phone{
public:
    Phone();
    ~Phone();
    void pressHomeButton();
    void pressPowerButton();
private:
    friend class State; 
    friend class OffState; 
    friend class LockedState;
    friend class ReadyState;
    std::shared_ptr<State> _state;
    void changeState(std::shared_ptr<State>);
};