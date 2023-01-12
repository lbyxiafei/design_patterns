#include "OnlineCourseFactory.hpp"
#include "Course.hpp"
#include "CppCourse.hpp"
#include "JavaCourse.hpp"

std::unique_ptr<Course> OnlineCourseFactory::initializeCourse(std::string type){
    std::unique_ptr<Course> course;
    if("Java"==type) course = std::make_unique<JavaCourse>("Online");
    else if("cpp"==type) course = std::make_unique<CppCourse>("Online");
    return course;
}