#include <iostream>
#include "Pet.h"
using namespace std;

int main() {
    // Pet object using default constructor
    Pet pet1;
    cout << "Pet 1 (Default Constructor):" << endl;
    cout << "Name: " << pet1.getName() << endl;
    cout << "Age: " << pet1.getAge() << endl;
    cout << "Owner: " << pet1.getOwner() << endl;
    cout << "House Trained: " << (pet1.getisHouseTrained() ? "Yes" : "No") << endl;
    cout << endl;

    // Pet object using overloaded constructor
    Pet pet2("Buddy", 3, "Alice", true);
    cout << "Pet 2 (Overloaded Constructor):" << endl;
    cout << "Name: " << pet2.getName() << endl;
    cout << "Age: " << pet2.getAge() << endl;
    cout << "Owner: " << pet2.getOwner() << endl;
    cout << "House Trained: " << (pet2.getisHouseTrained() ? "Yes" : "No") << endl;
    cout << endl;

    // Update pet2 details
    pet2.updateName("Charlie");
    pet2.updateAge();
    pet2.updateOwner("Bob");
    pet2.setHouseTrained();

    cout << "Pet 2 (After Updates):" << endl;
    cout << "Name: " << pet2.getName() << endl;
    cout << "Age: " << pet2.getAge() << endl;
    cout << "Owner: " << pet2.getOwner() << endl;
    cout << "House Trained: " << (pet2.getisHouseTrained() ? "Yes" : "No") << endl;

    return 0;
}