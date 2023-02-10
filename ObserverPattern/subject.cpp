#include <bits/stdc++.h>

#include "subject.hpp"

Subject::Subject() = default;

Subject::~Subject() = default;

void Subject::Attach(std::shared_ptr<Observer> obs){
    observers_.insert(obs);
}

void Subject::Detach(std::shared_ptr<Observer> obs){
    if(observers_.find(obs)!=observers_.end()){
        observers_.erase(obs);
    }
}

void Subject::Notify(){
    for(auto obs:observers_){
        obs->Update(std::shared_ptr<Subject>(this));
    }
}