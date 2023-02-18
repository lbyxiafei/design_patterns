# Strategy Pattern

Also known as `Policy`

最为常用的design pattern之一，通过创建接口同一但algorithm不同的strategy/compositor来维护不同的运算方案。

## Use Case

付费系统，PaymentService作为composition/context，其component是user account，PaymentStrategy分为pay by paypal、by visa。

## Structure

> Composition
>> components_
>> Compositor
>>> calculate(Composition&) //或者只传需要计算的components

## Comparison

从implement角度看，和`state pattern`极为相似，区别在于：不同的stretegies之间是相互独立的，彼此互不知晓；而不同的states之间是彼此知晓且会互相转换

## Conclusion

整体来看，strategy pattern的宗旨就是以`composition + polymorphism`的形式取代`if-else-statements`。

> 关于`if-else-statements`多说一句自己的理解：从design角度看，应该尽量将if/else安排在上层，即`if/else stays top`

P.S. [一篇关于if-else best practice的文章](https://medium.com/@balsikandar/best-practices-for-writing-if-else-7e89dd503754)