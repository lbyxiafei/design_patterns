#include <bits/stdc++.h>
#include "state.hpp"
#include "phone.hpp"

using namespace std;

int main(){
    State& st=State::getInstance();
    cout << &st << endl;

    Phone phone;
    cout << &phone << endl;

    return 0;
}