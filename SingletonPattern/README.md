# Singleton Pattern

## Use Case

Abstract factory的factory，以及State pattern中的state(e.g., phone_state)都是以singleton为recommended option.

## Structure

首先，constructor必须是non-public，默认private，当有`多态`时，则为protected。

其次，显然地，instance和getInstance()必然为`static`。

最后，关于c++，instance可以是static object形态，也可以是static pointer

> static object是推荐写法，然而要注意的是这种写法要把class member variable也定义为`static`，否则，至少在shared_ptr<Single>这类调用中会产生member variable有不同value的情况：

```cpp
// 书上所说，如果此处singleton中的_val是non-static
// 则会产生ptr和ptr2的getCnt()返回结果不同的尴尬结果
cout << "instance version:" << endl;
auto ptr = make_shared<Singleton>(Singleton::getInstance());
ptr->setCnt(1);
auto ptr2 = make_shared<Singleton>(Singleton::getInstance());
ptr2->setCnt(2);
cout << ptr->getCnt() << ',' << ptr2->getCnt() << endl;
```

## Conclusion
