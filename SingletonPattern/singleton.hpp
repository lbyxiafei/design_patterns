#pragma once

#include <bits/stdc++.h>

class Singleton{
private:
    int _cnt;
    Singleton();
public:
    static Singleton& getInstance();

    void setCnt(int x);

    int getCnt();
};