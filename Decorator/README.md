# Decorator Pattern

Also known as `Wrapper`

## Use Case

Stream/流: provides an interface for converting objects into a sequence of bytes or characters.

## Structure

> Stream
>> File/MemoryStream
>>> EncodedStreamDecorator
>>>> CompressedStreamDecorator
>>>>> ...

## Comparison

`Strategy pattern`是内核的修改、替换，`decorator pattern`是保留内核，在外层进行复式装修

`Template method`着重保留公共functions，并定义统一的流程，`decorator pattern`保留内核的同时，侧重于n种装饰的组合套用

## Conclusion

Decorator的优势和特点很明显：可以层层嵌套使用；劣势在于：必须在decorator内复写每一个每一个装饰对象的functions。