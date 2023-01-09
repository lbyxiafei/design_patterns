#pragma once

#include <bits/stdc++.h>

class SingletonPtr{
private:
    int _cnt;
protected:
    SingletonPtr();
public:
    ~SingletonPtr();
    static std::shared_ptr<SingletonPtr> getInstance();
    virtual void setCnt(int x);
    virtual int getCnt();
};