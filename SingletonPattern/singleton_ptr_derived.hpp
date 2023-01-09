#pragma once

#include <bits/stdc++.h>

#include "singleton_ptr.hpp"

class SingletonPtrDerived : public SingletonPtr {
private:
    int _cnt;
protected:
    SingletonPtrDerived();
public:
    ~SingletonPtrDerived();
    static std::shared_ptr<SingletonPtrDerived> getInstance();
    void setCnt(int x) override;
    int getCnt() override;
};