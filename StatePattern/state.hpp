#pragma once

#include "phone.hpp"

class Phone;

class State{
public:
    virtual void handleHomePressed(Phone&);
    virtual void handlePowerPressed(Phone&);
};