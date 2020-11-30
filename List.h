//
// Created by jdvelasquezo on 29/11/20.
//
#include "Node.h"
#include "Pet.h"

#ifndef TEST1_LIST_H
#define TEST1_LIST_H


class List {

    Node *start;
    int length;

public:
    List();
    void add(Pet *pet);
    string showNamePet(int n);
    bool isEmpty();

    Node *getStart() const;

    void setStart(Node *start);

    int getLength() const;

    void setLength(int length);
};


#endif //TEST1_LIST_H
