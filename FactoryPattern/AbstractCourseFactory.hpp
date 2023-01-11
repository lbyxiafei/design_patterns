#pragma once

#include <bits/stdc++.h>

#include "Course.hpp"

class Course;

class AbstractCourseFactory{
private:
protected:
    virtual Course& initializeCourse();
public:
    Course& createCourse();
};