// Topic: Lambda Expression in Modern C++
// Synopsis: Program that will check if the element is Divisible by 10 using Lambda Expression.
// Author: Raven Soriano

// Lambda Expression Structure and Definition
// known as "Inline Anonymous Function".
// [](){} - Structure of Lambda Expression
// [] - Capture Claws (Give you access to variable inside the main function)
// () - Parameters
// {} - Function Definition

#include <iostream>
#include <vector>
#include <algorithm> // for_each()

using namespace std;

int main() {

    int divisible = 10;

    vector <int> numbers {5, 10, 15, 20, 25, 30};
    for_each(numbers.begin(), numbers.end(),[divisible](int x) {
        if (x % divisible == 0) {
            cout << x << " is Divisible by " << divisible << endl;
        } else
            cout << x << " is not Divisible by " << divisible << endl;
    } );

    return 0;
}



