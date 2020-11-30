//
// Created by jdvelasquezo on 28/11/20.
//

#include "Pet.h"

Pet::Pet(int id, string name) {
    setId(id); setName(name);
}

string Pet::showName() {
    return this->getName();
}

int Pet::getId() const {
    return id;
}

void Pet::setId(int id) {
    Pet::id = id;
}

const string &Pet::getName() const {
    return name;
}

void Pet::setName(const string &name) {
    Pet::name = name;
}
