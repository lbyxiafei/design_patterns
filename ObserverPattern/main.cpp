#include <bits/stdc++.h>

#include "subject.hpp"
#include "observer.hpp"

int main(){
    std::cout << "hello" << std::endl;

    std::unique_ptr<Subject> sub = std::make_unique<Subject>();

    std::unique_ptr<Observer> obs = std::make_unique<Observer>();

    return 0;
}