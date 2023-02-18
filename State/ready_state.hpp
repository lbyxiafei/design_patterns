#pragma once

#include "phone.hpp"
#include "state.hpp"

class ReadyState : public State{
public:
    void handleHomePressed(Phone&) override;
    void handlePowerPressed(Phone&) override;
};