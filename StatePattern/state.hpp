#pragma once

class State{
private:
    State();
public:
    static std::unique_ptr<State> getInstance();
    virtual void handleHomePressed();
    virtual void handlePowerPressed();
};