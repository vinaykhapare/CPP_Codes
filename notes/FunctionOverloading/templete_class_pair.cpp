#include <iostream>
using namespace std;

// Template class definition
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor
    Pair(T1 first, T2 second) : first(first), second(second) {}

    // Getter for first
    T1 getFirst() const {
        return first;
    }

    // Getter for second
    T2 getSecond() const {
        return second;
    }

    // Setter for first
    void setFirst(T1 first) {
        this->first = first;
    }

    // Setter for second
    void setSecond(T2 second) {
        this->second = second;
    }
};

// Main function to test the Pair class
int main() {
    // Create a Pair of int and string
    Pair<int, string> p1(1, "apple");
    cout << "Pair 1: (" << p1.getFirst() << ", " << p1.getSecond() << ")" << endl;

    // Create a Pair of double and char
    Pair<double, char> p2(3.14, 'A');
    cout << "Pair 2: (" << p2.getFirst() << ", " << p2.getSecond() << ")" << endl;

    // Modify the first pair
    p1.setFirst(2);
    p1.setSecond("orange");
    cout << "Modified Pair 1: (" << p1.getFirst() << ", " << p1.getSecond() << ")" << endl;

    return 0;
}
