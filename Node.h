//
// Created by jdvelasquezo on 29/11/20.
//

#include "Pet.h"

using namespace std;

#ifndef TEST1_NODE_H
#define TEST1_NODE_H

class Node {

    Pet *pet;
    Node *next, *prev;

public:
    Node(Pet *pet, Node *next = nullptr, Node *prev = nullptr);

    Pet *getPet() const;

    void setPet(Pet *pet);

    Node *getNext() const;

    void setNext(Node *next);

    Node *getPrev() const;

    void setPrev(Node *prev);
};

#endif //TEST1_NODE_H
