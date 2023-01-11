#pragma once

#include <bits/stdc++.h>

#include "Course.hpp"

class CppCourse : public Course {
private:
    std::string _course;
public:
    CppCourse(std::string course);
    std::string getCourseInfo() override;
    void createCourseMaterial() override;
    void createCourseSchedule() override;
};