#include <iostream>
#include "Pet.h"
#include "List.h"

using namespace std;

int main() {
    List *list = new List();
    Pet *pet = new Pet(1, "perro");
    Pet *pet2 = new Pet(2, "gato");
    Pet *pet3 = new Pet(3, "pez");

    list->add(pet);
    list->add(pet2);
    list->add(pet3);

    for (int i = 0; i < list->getLength(); i++) {
        cout << list->showNamePet(i) << endl;
    }
    return 0;
}
