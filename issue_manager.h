/**
* @file issue_manager.h
* @author Declan Holmes
* @brief Header file for issue_manager.cpp
* @date 2026-04-20 initial creation
* @date n/a completion
*/
#include "issue.h"
#include <vector.h>

class IssueManager {
private:
    std::vector<Issue> issues;
    int nextId;
    int findIssueIndexById(int id) const;
    int getNextId();

public:
    IssueManager();
    void addIssue(const Issue& issue);
    void listIssues() const;
    bool editIssue(int id, const Issue& updatedIssue);
    bool deleteIssue(int id);
};