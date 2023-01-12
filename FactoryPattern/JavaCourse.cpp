#include <bits/stdc++.h>

#include "Course.hpp"
#include "JavaCourse.hpp"

JavaCourse::JavaCourse() = default;

JavaCourse::JavaCourse(std::string course) : _course(course+" Java ") {}

std::string JavaCourse::getCourseInfo() {
    return _course;
}

void JavaCourse::createCourseMaterial(){}

void JavaCourse::createCourseSchedule(){}