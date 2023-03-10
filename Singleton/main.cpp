#include <bits/stdc++.h>

#include "singleton.hpp"
#include "singleton_ptr.hpp"
#include "singleton_ptr_derived.hpp"

using namespace std;

int main(){
    // Derived & Base singleton
    std::shared_ptr<SingletonPtr> pd = SingletonPtrDerived::getInstance();
    pd->setCnt(6);
    std::shared_ptr<SingletonPtr> pt = SingletonPtr::getInstance();
    pt->setCnt(5);
    //pt = pd;
    //cout << pt->getCnt() << ',' << pd->getCnt() << endl;;
    cout << &pd << ',' << &pt << endl;
    pt = SingletonPtrDerived::getInstance();
    cout << pt->getCnt() << endl;

    //cout << "pointer as singleton:" << endl;
    //auto pptr = SingletonPtr::getInstance();
    //pptr->setCnt(5);
    //auto pptr2 = SingletonPtr::getInstance();
    //pptr2->setCnt(555);
    //cout << pptr->getCnt() << ',' << pptr2->getCnt() << endl << endl;

    //cout << "instance version:" << endl;
    //auto ptr = make_shared<Singleton>(Singleton::getInstance());
    //ptr->setCnt(1);
    //auto ptr2 = make_shared<Singleton>(Singleton::getInstance());
    //ptr2->setCnt(2);
    //auto& instance = Singleton::getInstance();
    //instance.setCnt(3);
    //auto ptr3 = make_shared<Singleton>(instance);
    //cout << ptr->getCnt() << ',' << ptr2->getCnt() << ',' << ptr3->getCnt() << endl;

    return 0;
}