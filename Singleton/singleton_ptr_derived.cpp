#include <bits/stdc++.h>

#include "singleton_ptr_derived.hpp"

SingletonPtrDerived::SingletonPtrDerived() : _cnt(0) {}

SingletonPtrDerived::~SingletonPtrDerived() {
    std::cout << "SingletonPtrDerived: " << _cnt << " destroyed.\n";
}

std::shared_ptr<SingletonPtrDerived> SingletonPtrDerived::getInstance() {
    static std::shared_ptr<SingletonPtrDerived> instance(new SingletonPtrDerived);
    return instance;
}

void SingletonPtrDerived::setCnt(int x) {
    _cnt = x;
}

int SingletonPtrDerived::getCnt() {
    return _cnt;
}