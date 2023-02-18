# Abstract Factory & Factory Method

## Use Case

课程管理系统需要一个课程创建助手(CourseFactory)，要求能够根据不同种类的要求（Online、Offline）创建对应课程(CourseProduct)。

> 值得一提的，和现实中(Microsoft项目)的PublishProvider(Factory)针对不同dataset创建的不同的publisher(Product)的情况做一个简单类比：最明显的不同就是CourseFactory是multi-level的factory，而PublishProvider只有一层，即，没有多个family的概念

## Structure

> AbstractCourseFactory

>> OnlineCourseFactory

>> OfflineCourseFactory

> Course

>> OnlineJavaCourse/OfflineJavaCourse

>> OnlineCppCourse/OfflineCppCourse

## Conclusion

重点：`分层/family`，`template method`