#include <bits/stdc++.h>
#include "singleton.hpp"

Singleton::Singleton() = default;

Singleton& Singleton::getInstance() {
    static Singleton instance;
    return instance;
}

void Singleton::setCnt(int x) {
    _cnt = x;
}

int Singleton::getCnt() {
    return _cnt;
}