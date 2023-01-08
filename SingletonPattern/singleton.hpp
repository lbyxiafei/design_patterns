#pragma once

#include <bits/stdc++.h>

class Singleton{
private:
    static int _cnt;
    Singleton();
public:
    ~Singleton();
    static Singleton& getInstance();
    void setCnt(int x);
    int getCnt();
};