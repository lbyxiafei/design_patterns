#pragma once

#include "phone.hpp"
#include "state.hpp"

class OffState : public State{
public:
    void handleHomePressed(Phone&) override;
    void handlePowerPressed(Phone&) override;
};