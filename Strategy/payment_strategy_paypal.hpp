#pragma once

#include <bits/stdc++.h>

#include "payment_service.hpp"
#include "payment_strategy.hpp"

class PaymentStrategyPaypal : public PaymentStrategy {
public:
    PaymentStrategyPaypal();
    void pay(PaymentService&) override;
};