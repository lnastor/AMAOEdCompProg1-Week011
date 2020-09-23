// QUESTION #1

#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include "dog.h"

using namespace std;

int main() {

    LeggedMammal LeggedMammal (4, "smooth", "tail");

    Dog dog;
    string breed, size, status;

    cout << "Breed: ";
    getline (cin, breed);
    dog.setBreed(breed);

    cout << "Size: ";
    getline (cin,size);
    dog.setSize(size);

    cout << "Status: ";
    getline (cin, status);
    dog.setStatus(status);

    cout << "\n";
    cout << LeggedMammal.getLeggedMammal();
    cout << "Its breed is " << dog.getBreed() << "." << endl;
    cout << "It is " << dog.getSize() << " and its status is " << dog.getStatus() << "." << endl;

    cout << "\n\n";
    system ("pause");
    return EXIT_SUCCESS;

}