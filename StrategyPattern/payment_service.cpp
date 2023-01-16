#include <bits/stdc++.h>

#include "payment_service.hpp"
#include "payment_strategy.hpp"

PaymentService::PaymentService() = default;

void PaymentService::processPayment() {
    strategy_->pay(*this);
}

std::string PaymentService::getUser(){
    return user_;
}

void PaymentService::setUser(std::string user){
    user_=user;
}

void PaymentService::setPaymenStrategy(std::unique_ptr<PaymentStrategy> strategy){
    strategy_=std::move(strategy);
}

