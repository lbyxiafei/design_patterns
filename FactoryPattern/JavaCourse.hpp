#pragma once

#include <bits/stdc++.h>

#include "Course.hpp"

class JavaCourse : public Course{
private:
    std::string _course;
public:
    JavaCourse();
    JavaCourse(std::string);
    std::string getCourseInfo() override;
    virtual void createCourseMaterial() override;
    virtual void createCourseSchedule() override;
};