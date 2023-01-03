#include <bits/stdc++.h>
#include "phone.hpp"
#include "state.hpp"
#include "off_state.hpp"

void OffState::handleHomePressed(Phone& phone) {
    std::cout << "off home pressed" << '\n';
}

void OffState::handlePowerPressed(Phone& phone) {
    std::cout << "off power pressed" << '\n';
}