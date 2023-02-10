#pragma once

#include <bits/stdc++.h>

#include "subject.hpp"

class Subject;

class Observer{
public:
    Observer();
    ~Observer();
    virtual void Update(std::shared_ptr<Subject>) = 0;
};