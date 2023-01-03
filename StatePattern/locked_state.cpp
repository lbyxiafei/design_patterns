#include <bits/stdc++.h>
#include "phone.hpp"
#include "state.hpp"
#include "locked_state.hpp"

void LockedState::handleHomePressed(Phone& phone) {
    std::cout << "locked home pressed" << '\n';
    
}

void LockedState::handlePowerPressed(Phone& phone) {
    std::cout << "locked power pressed" << '\n';
    // phone.changeState(std::make_shared<OffState>());
}