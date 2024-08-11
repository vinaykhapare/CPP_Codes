#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() const {
        cout << "Some generic animal sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Override the virtual function
    void makeSound() const override {
        cout << "Woof!" << endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    // Override the virtual function
    void makeSound() const override {
        cout << "Meow!" << endl;
    }
};

int main() {
    // Create an array of base class pointers
    Animal* animals[3];

    // Assign derived class objects to base class pointers
    animals[0] = new Animal();
    animals[1] = new Dog();
    animals[2] = new Cat();

    // Loop through the array and call makeSound()
    for(int i = 0; i < 3; ++i) {
        animals[i]->makeSound();
    }

    // Clean up dynamically allocated memory
    for(int i = 0; i < 3; ++i) {
        delete animals[i];
    }

    return 0;
}
