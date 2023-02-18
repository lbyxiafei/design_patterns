#include <bits/stdc++.h>

#include "AbstractCourseFactory.hpp"
#include "OnlineCourseFactory.hpp"
#include "OfflineCourseFactory.hpp"

#include "Course.hpp"
#include "JavaCourse.hpp"
#include "CppCourse.hpp"

int main(){
    std::cout << "hello" << std::endl;

    std::shared_ptr<AbstractCourseFactory> onlineFactory = std::make_shared<OnlineCourseFactory>();
    std::cout << onlineFactory->createCourse("Java")->getCourseInfo() << std::endl;
    std::cout << onlineFactory->createCourse("cpp")->getCourseInfo() << std::endl;

    std::shared_ptr<AbstractCourseFactory> offlineFactory = std::make_shared<OfflineCourseFactory>();
    std::cout << offlineFactory->createCourse("Java")->getCourseInfo() << std::endl;
    std::cout << offlineFactory->createCourse("cpp")->getCourseInfo() << std::endl;

    return 0;
}