/**
* @file issue.h
* @author Declan Holmes
* @brief Header file for issue.cpp
* @date 2026-04-20 initial creation
* @date n/a completion
*/

#ifndef ISSUE_H
#define ISSUE_H

#include <string>
#include <iostream>

struct Issue {
    int id;
    std::string title;
    std::string desc;
    std::string status;
    std::string priority;
};

#endif