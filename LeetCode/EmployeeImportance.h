//
// Created by KsGin on 2017/10/1.
//

#ifndef LEETCODE_EMPLOYEEIMPORTANCE_H
#define LEETCODE_EMPLOYEEIMPORTANCE_H

#include <vector>


// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    std::vector<int> subordinates;
};

class EmployeeImportance {
public:
    int getImportance(std::vector<Employee*> employees, int id) {
        int ret = employees[id-1]->importance;
        for (int i = 0; i < employees[id-1]->subordinates.size(); ++i) {
            ret += getImportance(employees,employees[id-1]->subordinates[i]);
        }
        return ret;
    }
};


#endif //LEETCODE_EMPLOYEEIMPORTANCE_H
