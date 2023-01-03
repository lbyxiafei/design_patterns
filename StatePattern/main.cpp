#include <bits/stdc++.h>
#include "phone.hpp"
#include "state.hpp"
#include "off_state.hpp"
#include "locked_state.hpp"
#include "ready_state.hpp"

using namespace std;

int main(){
    Phone phone;
    cout << &phone << endl;

    phone.pressHomeButton();
    phone.pressPowerButton();
    phone.pressHomeButton();
    phone.pressHomeButton();

    return 0;
}