#include <bits/stdc++.h>

#include "singleton_ptr.hpp"

SingletonPtr::SingletonPtr() : _cnt(0) {}

SingletonPtr::~SingletonPtr() {
    std::cout << "SingletonPtr: " << _cnt << " destroyed.\n";
}

std::shared_ptr<SingletonPtr> SingletonPtr::getInstance() {
    static std::shared_ptr<SingletonPtr> instance(new SingletonPtr);
    return instance;
}

void SingletonPtr::setCnt(int x) {
    _cnt = x;
}

int SingletonPtr::getCnt() {
    return _cnt;
}