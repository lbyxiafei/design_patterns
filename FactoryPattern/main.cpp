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
    AbstractCourseFactory *tes = new OnlineCourseFactory();

    return 0;
}