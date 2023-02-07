# Observer Pattern

Also known as `Dependents`, `Publish-Subscribe`.

> 值得注意的是，`push/pull`模型也是observer pattern的衍生：其是push或pull，取决于subject与observer之间在state change时，如何沟通交换信息

```cpp push
// push model

// subject:
for(auto observer : observers)
    observer->Update(details) // push

// observer:
void Update(details){
}
```

```cpp pull
// pull model

// subject:
for(auto observer : observers_)
    observer->Update(details);

// observer:
void Update(){
    subject_->getState(); // pull
}
```

## Use Case

## Structure

## Comparison

## Conclusion