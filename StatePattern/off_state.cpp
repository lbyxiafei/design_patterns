#include <bits/stdc++.h>
#include "phone.hpp"
#include "state.hpp"
#include "locked_state.hpp"
#include "off_state.hpp"

void OffState::handleHomePressed(Phone& phone) {
    std::cout << "off";
    State::handleHomePressed(phone);
    phone.changeState(std::make_shared<LockedState>());
    std::cout << "locked\n";
}

void OffState::handlePowerPressed(Phone& phone) {
    std::cout << "off state";
    State::handlePowerPressed(phone);
    phone.changeState(std::make_shared<LockedState>());
    std::cout << "locked\n";
}