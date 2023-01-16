#include <bits/stdc++.h>

#include "payment_service.hpp"
#include "payment_strategy.hpp"
#include "payment_strategy_paypal.hpp"

PaymentStrategyPaypal::PaymentStrategyPaypal() = default;

void PaymentStrategyPaypal::pay(PaymentService& ps){
    std::cout << ps.getUser() << " paying with paypal\n";
}