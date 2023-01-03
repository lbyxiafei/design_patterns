# State Pattern

## Use Case

手机的home、power按钮，控制了off、locked和ready states

## Structure

> phone
>> shared_ptr<state> _state

> state
>> off_state
>> locked_state
>> ready_state

## Comparison

### Strategy Pattern

Strategies are completely `independent` and `unaware` of each other.

The Strategy pattern is really about having `different implementations` that `accomplish the same thing`.

> States can be `dependent` as you can easily jump from one state to another.

> The State pattern is about `doing different things based on the state`, hence the result may vary.