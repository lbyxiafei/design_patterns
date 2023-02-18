#include <bits/stdc++.h>

#include "subject.hpp"
#include "timer.hpp"

#include "observer.hpp"
#include "digital_clock.hpp"

int main(){
    std::cout << "hello" << std::endl;

    std::unique_ptr<Subject> sub = std::make_unique<Timer>();

    std::unique_ptr<Observer> ob1 = std::make_unique<DigitalClock>();
    std::unique_ptr<Observer> ob2 = std::make_unique<DigitalClock>();

    sub->Attach(ob1.get());
    sub->Attach(ob2.get());

    sub->SetInfo("Time is money!");
    sub->Notify();

    sub->Detach(ob1.get());

    sub->SetInfo("Haste makes waste!");
    sub->Notify();

    return 0;
}