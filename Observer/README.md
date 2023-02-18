# Observer Pattern

Also known as `Dependents`, `Publish-Subscribe`.

> 值得注意的是，`push/pull`模型也是observer pattern的衍生：其是push或pull，取决于subject与observer之间在state change时，如何沟通交换信息

```cpp push
// push model

// subject:
void Subject::Notify(){
    for(auto observer : observers)
        observer->Update(details); // push
}

// observer:
void Observer::Update(details){
}
```

```cpp pull
// pull model

// subject:
void Subject::Notify(){
    for(auto observer : observers_)
        observer->Update(this);
}

// observer:
void Update(Subject*){
    subject->getState(); // pull
}
```

## Use Case

经典`MVC`

`pub-sub`

## Combo 

`Mediator Pattern`对于observer pattern是很重要的辅助：

```cpp
class Mediator{
    Register(sub,ob);
    UnRegister(sub,ob);
    Notify();
}
```

Mediator在这里扮演了一个subject/observer中间调解人的角色

> 值得注意的是，在完整的work flow中，有一个此处未提及但很重要的component：`producer`，进而observer就是comsumer，mediator进行subject和comsumer的管理

> 那么问题来了，producer和subject的互动是怎样被管理的呢？也是mediator吗？

