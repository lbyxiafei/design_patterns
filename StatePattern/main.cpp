#include <bits/stdc++.h>
#include "state.hpp"

using namespace std;

int main(){
    State& st=State::getInstance();
    cout << &st << endl;
    st.test();
    
    return 0;
}