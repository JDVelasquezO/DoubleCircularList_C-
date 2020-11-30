//
// Created by jdvelasquezo on 29/11/20.
//
#include "Pet.h"
#include "Node.h"

Node::Node(Pet *pet, Node *next, Node *prev) {
    this->pet = pet; this->next = next; this->prev = prev;
}

Pet *Node::getPet() const {
    return pet;
}

void Node::setPet(Pet *pet) {
    Node::pet = pet;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}

Node *Node::getPrev() const {
    return prev;
}

void Node::setPrev(Node *prev) {
    Node::prev = prev;
}
