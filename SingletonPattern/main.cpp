#include <bits/stdc++.h>

#include "singleton.hpp"
#include "singleton_ptr.hpp"

using namespace std;

int main(){
    cout << "hello" << endl;
    auto pptr = SingletonPtr::getInstance();
    cout << pptr->getCnt() << endl;
    pptr->setCnt(5);
    cout << pptr->getCnt() << endl;

    auto pptr2 = SingletonPtr::getInstance();
    cout << pptr2->getCnt() << endl;
    pptr2->setCnt(555);
    cout << pptr2->getCnt() << endl;



    cout << "hello" << endl;
    // instance version
    auto ptr = make_shared<Singleton>(Singleton::getInstance());
    cout << ptr->getCnt() << endl;
    ptr->setCnt(5);
    cout << ptr->getCnt() << endl;
    cout << &ptr << endl;

    auto ptr2 = make_shared<Singleton>(Singleton::getInstance());
    cout << ptr2->getCnt() << endl;
    ptr2->setCnt(5);
    cout << ptr2->getCnt() << endl;
    cout << &ptr2 << endl << endl;


    auto& instance = Singleton::getInstance();
    cout << instance.getCnt() << endl;
    cout << &instance << endl;
    instance.setCnt(55);
    cout << instance.getCnt() << endl;

    auto& instance2 = Singleton::getInstance();
    cout << instance2.getCnt() << endl;
    cout << &instance2 << endl << endl;

    auto ptr3 = make_shared<Singleton>(instance);
    cout << ptr3->getCnt() << endl;
    ptr3->setCnt(5);
    cout << ptr3->getCnt() << endl;
    cout << &ptr3 << endl << endl;

    return 0;
}