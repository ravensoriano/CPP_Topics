// Topic: Classes and Objects in C++
// Synopsis: Program that will initiate a conversation and ask a person about his/her background.
// Author: Raven Soriano


#include <iostream>
#include <string>
using namespace std;


class Person {
public:
    string name;
    string company;
    string background;

    void greetings() {
        const string DEFAULT_NAME = "John";

        cout << "Hello, What's your name? ";
        cin >> name;

        cout << "Hello " << name << ", I'm "<< DEFAULT_NAME << "\n"
             << "What's your background? ";
        getline(cin, background);

        cout << "Woah! " << name << ", " << background << " is an awesome field!" << endl;

        cout << "In what company you're working with? ";
        getline(cin, company);
        cout << "I heard a lot of good things about " << company << ", Tell me more about it."<<  endl;
    }
};


int main() {

    Person person_one;
    person_one.greetings();

    return 0;
}
