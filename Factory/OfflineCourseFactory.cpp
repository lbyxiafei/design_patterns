#include "OfflineCourseFactory.hpp"
#include "Course.hpp"
#include "CppCourse.hpp"
#include "JavaCourse.hpp"

std::unique_ptr<Course> OfflineCourseFactory::initializeCourse(std::string type){
    std::unique_ptr<Course> course;
    if("Java"==type) course = std::make_unique<JavaCourse>("Offline");
    else if("cpp"==type) course = std::make_unique<CppCourse>("Offline");
    return course;
}