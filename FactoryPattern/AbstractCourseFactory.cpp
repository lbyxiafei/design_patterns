#include <bits/stdc++.h>

#include "Course.hpp"
#include "JavaCourse.hpp"
#include "AbstractCourseFactory.hpp"

AbstractCourseFactory::AbstractCourseFactory() = default;

std::unique_ptr<Course> AbstractCourseFactory::createCourse(std::string type) {
    return initializeCourse(type);
}