#pragma once

#include <bits/stdc++.h>

#include "observer.hpp"

class Observer;

class Subject{
public:
    Subject();
    ~Subject();
    virtual void Attach(Observer*);
    virtual void Detach(Observer*);
    virtual void Notify();
    virtual std::string GetInfo() = 0;
    virtual void SetInfo(std::string) = 0;
private:
    std::unordered_set<Observer*> observers_;
};