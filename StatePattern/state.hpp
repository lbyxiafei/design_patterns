
class State{
private:
    State();
public:
    static State& getInstance();
    virtual void handleHomePressed();
    virtual void handlePowerPressed();
};