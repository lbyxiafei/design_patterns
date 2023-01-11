#include "OnlineCourseFactory.hpp"
#include "Course.hpp"
#include "JavaCourse.hpp"

std::unique_ptr<Course> OnlineCourseFactory::initializeCourse(std::string type){
    std::unique_ptr<Course> course = std::make_unique<JavaCourse>();
    return course;
}