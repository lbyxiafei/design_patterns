# BuilderPattern

整体思路体现了：`分层处理`，责任分摊(`director`, `builder`, `product`)。

## Use Case

自行车的属性有：make、model、height、color，其中前两个由builder控制，后两个由director控制

> 另一个来自GoF书中的例子，这里只作简单讨论下：迷宫建造，其中game是director，负责控制maze长啥样；不同的concrete builder控制maze的wall、door、room的构建细节

## Structure

> IDirector
>> IBuilder
>>> buildPart() //此处可以嵌入fluent interface的概念，return *this
>>> IProduct
>>>> build()

## Comparison

`Fluent Interface`可以和builder pattern有效结合发挥不错的视觉效果：[一个有趣的pizza范例](https://stackoverflow.com/questions/328496/when-would-you-use-the-builder-pattern)。

## Conclusion

多态主要体现在`builder`上，product虽然复杂，但其可以是单一的，如，pizza、bike。