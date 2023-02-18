#pragma once

#include <bits/stdc++.h>

#include "payment_service.hpp"
#include "payment_strategy.hpp"

class PaymentStrategyVisa : public PaymentStrategy {
public:
    PaymentStrategyVisa();
    void pay(PaymentService&) override;
};