#pragma once

#include <bits/stdc++.h>

#include "payment_strategy.hpp"

class PaymentService{
public:
    PaymentService();

    void processPayment();

    std::string getUser();
    void setUser(std::string);

    void setPaymenStrategy(std::unique_ptr<PaymentStrategy>);
private:
    std::unique_ptr<PaymentStrategy> strategy_;
    std::string user_;
};
