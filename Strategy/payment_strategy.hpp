#pragma once

#include <bits/stdc++.h>

#include "payment_service.hpp"

class PaymentService;

class PaymentStrategy{
public:
    virtual void pay(PaymentService&)=0;
};