#pragma once

#include <bits/stdc++.h>

#include "subject.hpp"

class Subject;

class Observer{
public:
    Observer();
    ~Observer();
    virtual void Update(Subject*) = 0;
};