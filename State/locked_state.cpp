#include <bits/stdc++.h>
#include "phone.hpp"
#include "state.hpp"
#include "off_state.hpp"
#include "locked_state.hpp"
#include "ready_state.hpp"

void LockedState::handleHomePressed(Phone& phone) {
    std::cout << "locked";
    State::handleHomePressed(phone);
    phone.changeState(std::make_shared<ReadyState>());
    std::cout << "ready\n";
}

void LockedState::handlePowerPressed(Phone& phone) {
    std::cout << "locked";
    State::handlePowerPressed(phone);
    phone.changeState(std::make_shared<OffState>());
    std::cout << "off\n";
}