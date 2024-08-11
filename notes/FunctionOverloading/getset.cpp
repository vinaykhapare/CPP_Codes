#include <bits/stdc++.h>
using namespace std;
class Person {
private:
   string name;
    int age;

public:
    // Setter for name
    void setName(const string& newName) {
        name = newName;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for age
    void setAge(int newAge) {
        if(newAge >= 0) { // Adding a simple check to ensure age is non-negative
            age = newAge;
        }
    }

    // Getter for age
    int getAge() const {
        return age;
    }
};

int main() {
    Person person;
    person.setName("John Doe");
    person.setAge(30);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    return 0;
}

