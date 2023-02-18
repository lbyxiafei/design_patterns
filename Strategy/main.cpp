#include <bits/stdc++.h>

#include "payment_service.hpp"
#include "payment_strategy.hpp"
#include "payment_strategy_paypal.hpp"
#include "payment_strategy_visa.hpp"

int main(){
    std::cout << "hello" << std::endl;

    PaymentService ps;
    std::unique_ptr<PaymentStrategy> paypal=std::make_unique<PaymentStrategyPaypal>();
    std::unique_ptr<PaymentStrategy> visa=std::make_unique<PaymentStrategyVisa>();

    ps.setUser("user A");
    ps.setPaymenStrategy(std::move(paypal));
    ps.processPayment();

    ps.setPaymenStrategy(std::move(visa));
    ps.processPayment();

    return 0;
}