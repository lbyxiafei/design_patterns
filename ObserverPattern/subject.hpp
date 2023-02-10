#pragma once

#include <bits/stdc++.h>

#include "observer.hpp"

class Subject{
public:
    Subject();
    ~Subject();
    virtual void Attach(std::shared_ptr<Observer>);
    virtual void Detach(std::shared_ptr<Observer>);
    virtual void Notify();
private:
    std::unordered_set<std::shared_ptr<Observer>> observers_;
};