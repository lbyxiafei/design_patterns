#pragma once

#include <bits/stdc++.h>

class Course{
public:
    virtual std::string getCourseInfo()=0;
    virtual void createCourseMaterial()=0;
    virtual void createCourseSchedule()=0;
};