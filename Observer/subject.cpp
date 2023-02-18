#include <bits/stdc++.h>

#include "subject.hpp"

Subject::Subject() = default;

Subject::~Subject() = default;

void Subject::Attach(Observer* obs){
    observers_.insert(obs);
}

void Subject::Detach(Observer* obs){
    if(observers_.find(obs)!=observers_.end()){
        observers_.erase(obs);
    }
}

void Subject::Notify(){
    for(auto ob:observers_){
        ob->Update(this);
    }
}