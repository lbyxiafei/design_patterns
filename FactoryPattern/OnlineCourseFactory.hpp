#pragma once

#include <bits/stdc++.h>

#include "AbstractCourseFactory.hpp"
#include "Course.hpp"

class OnlineCourseFactory : public AbstractCourseFactory{
private:
protected:
    std::unique_ptr<Course> initializeCourse(std::string type) override;
public:
};