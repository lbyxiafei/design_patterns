#pragma once

#include <bits/stdc++.h>

class Course{
private:
    std::string _course;
public:
    virtual std::string getCourseInfo()=0;
    virtual void createCourseMaterial()=0;
    virtual void createCourseSchedule()=0;
};