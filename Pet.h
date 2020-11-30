//
// Created by jdvelasquezo on 28/11/20.
//
#include <string>
using namespace std;

#ifndef TEST1_PET_H
#define TEST1_PET_H

class Pet {
    int id;
    string name;

public:
    Pet(int id, string name);
    string showName();

    int getId() const;
    const string &getName() const;

    void setId(int id);
    void setName(const string &name);
};

#endif //TEST1_PET_H
