
#include <bits/stdc++.h>

#include "Course.hpp"
#include "CppCourse.hpp"

CppCourse::CppCourse() = default;

CppCourse::CppCourse(std::string course) : _course(course + " cpp ") {}

std::string CppCourse::getCourseInfo() {
    return _course;
}

void CppCourse::createCourseMaterial(){}

void CppCourse::createCourseSchedule(){}