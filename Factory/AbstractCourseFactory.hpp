#pragma once

#include <bits/stdc++.h>

#include "Course.hpp"

class AbstractCourseFactory{
private:
protected:
    virtual std::unique_ptr<Course> initializeCourse(std::string type) = 0;
public:
    AbstractCourseFactory();
    std::unique_ptr<Course> createCourse(std::string type);
};