#include <bits/stdc++.h>
#include "phone.hpp"
#include "state.hpp"
#include "ready_state.hpp"
#include "off_state.hpp"

void ReadyState::handleHomePressed(Phone& phone) {
    std::cout << "ready";
    State::handleHomePressed(phone);
    phone.changeState(std::make_shared<ReadyState>());
    std::cout << "ready\n";
}

void ReadyState::handlePowerPressed(Phone& phone) {
    std::cout << "ready";
    State::handlePowerPressed(phone);
    phone.changeState(std::make_shared<OffState>());
    std::cout << "off\n";
}