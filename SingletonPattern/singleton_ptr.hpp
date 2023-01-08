#pragma once

#include <bits/stdc++.h>

class SingletonPtr{
private:
    int _cnt;
    SingletonPtr();
public:
    ~SingletonPtr();
    static std::shared_ptr<SingletonPtr> getInstance();
    void setCnt(int x);
    int getCnt();
};