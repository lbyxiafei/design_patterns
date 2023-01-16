#include <bits/stdc++.h>

#include "payment_service.hpp"
#include "payment_strategy.hpp"
#include "payment_strategy_visa.hpp"

PaymentStrategyVisa::PaymentStrategyVisa() = default;

void PaymentStrategyVisa::pay(PaymentService& ps){
    std::cout << ps.getUser() << " paying with visa\n";
}