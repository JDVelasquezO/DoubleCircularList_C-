//
// Created by jdvelasquezo on 29/11/20.
//

#include <iostream>
#include <string>
#include "List.h"
#include "Pet.h"

using namespace std;

List::List() {
    start = nullptr;
    length = 0;
}

bool List::isEmpty() {
    return start == nullptr;
}

void List::add(Pet *pet) {
    Node *node = new Node(pet);

    if (isEmpty()) {
        start = node;
        node->setNext(start);
        node->setPrev(start);
    } else {
        Node *pointer = start;

        while (pointer->getNext() != start) {
            pointer = pointer->getNext();
        }

        pointer->setNext(node);
        node->setPrev(pointer);
        node->setNext(start);
        start->setPrev(node);
    }

    length++;
}

string List::showNamePet(int n) {
    string res = "";
    Node *pointer = start;
    int counter = 0;

    while (counter < n && pointer->getNext() != nullptr) {
        pointer = pointer->getNext();
        counter++;
    }

    if (counter != n) {
        return nullptr;
    } else {
        return pointer->getPrev()->getPet()->getName() + " <- " + pointer->getPet()->showName() +
                " -> " + pointer->getNext()->getPet()->getName();
    }
}

Node *List::getStart() const {
    return start;
}

void List::setStart(Node *start) {
    List::start = start;
}

int List::getLength() const {
    return length;
}

void List::setLength(int length) {
    List::length = length;
}
