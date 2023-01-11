#pragma once

#include <bits/stdc++.h>

#include "AbstractCourseFactory.hpp"
#include "Course.hpp"

class Course;

class OfflineJavaCourseFactory : public AbstractCourseFactory{
private:
protected:
    Course& initializeCourse() override;
public:
};