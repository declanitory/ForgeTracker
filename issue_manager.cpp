/**
* @file issue_manager.cpp
* @author Declan Holmes
* @brief Implementation of IssueManager (explain what is used)
* @date 2026-04-20 initial creation
* @date n/a completion
*/
#include "issue_manager.h"
#include <vector>

/*
 * loops through issues to find the one that was passed through
 */
int IssueManager::findIssueIndexById(int id) const {
    int i = 0;
    while (i < issues.size()) {
        if (issues[i].id == id) {
            return i;
        }
        i++;
    }

    return -1;
}

/*
 * gets the next issue id
 */
int IssueManager::getNextId() {
    int old = nextId;
    nextId = nextId + 1;
    return old;
}

/*
 * constructor for issue manager
 */
IssueManager::IssueManager() {
    nextId = 1;
}

/*
 * method header sample
 */
void IssueManager::addIssue(const Issue& issue) {
    Issue temp = issue;
    temp.id = getNextId();
    issues.push_back(temp);
}

/*
 * method header sample
 */
void IssueManager::listIssues() const {
    return 0;
}

/*
 * method header sample
 */
bool IssueManager::editIssue(int id, const Issue& updatedIssue) {
    return 0;
}

/*
 * method header sample
 */
bool IssueManager::deleteIssue(int id) {
    return 0;
}