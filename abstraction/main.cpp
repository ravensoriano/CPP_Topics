// Topic: Abstraction
// Synopsis: Program that will decide if the Artist eligible to create a new album base on the sales of their last project.
// Short Extra Content (at the end): Smartphone Analogy using the concept of "Information Hiding".
// Author: Raven Soriano


#include <iostream>
#include <string>
using namespace std;

// Abstraction
class RecordLabel {
    virtual void project_proposal() = 0; // Abstract Class/Virtual Function - Making it obligatory for "Album" Class.
};

class Album:RecordLabel { // Album Class "signing" the contract from Record Label to implement the method of "project_proposal".
// Encapsulated Properties
private:
    string Title;
    string Genre;
    int Number_Of_Songs;
    int Sales;
    bool Is_Explicit;


public:
    // Title
    void setTitle (string title) {  // Setter
        Title = title;
    }
    string getTitle() { // Getter
        return Title;
    }

    // Genre
    void setGenre (string genre) {
        Genre = genre;
    }
    string getGenre() {
        return Genre;
    }

    // Number of Songs with Input Validation
    void setNum_Of_Songs (int num_of_songs) {
        int min_songs = 10;
        int max_songs = 30;

        if (num_of_songs > min_songs && num_of_songs <= max_songs)
            Number_Of_Songs = num_of_songs;
    }
    int getNum_Of_Songs() {
        return Number_Of_Songs;
    }


    // Sales
    void setSales (int sales) {
        Sales = sales;
    }
    int getSales () {
        return Sales;
    }


    // Explicit
    void setExplicit (bool is_explicit) {
        Is_Explicit = is_explicit;
    }
    bool getExplicit () {
        return Is_Explicit;
    }


    // Constructor
    Album(string title, string genre, int number_of_songs, int sales, bool is_explicit) {
        Title = title;
        Genre = genre;
        Number_Of_Songs = number_of_songs;
        Sales = sales;
        Is_Explicit = is_explicit;
    }

// Album Function
    int Album_Function () {
        char selection {0};
        do {
            cout << "Menu: \n"
                 << "P - Play\n"
                 << "S - Stop\n"
                 << "Q - Quit" << endl;
            cout << "Enter your selection: ";
            cin >> selection;
            switch (selection) {
                case 'P':
                case 'p':
                    cout << "Play the song\n"; break;
                case 'S':
                case 's':
                    cout << "Stop the song\n"; break;
                case 'Q':
                case 'q':
                    cout << "Goodbye"; break;
            }
        } while (false);
        return selection;
    }

    // Abstraction - Implementation for 'Record Label' Class
    void project_proposal() {
        int min_sale_of_last_album = 100000;
        if (Sales > min_sale_of_last_album)
            cout << "You can create a new Album" << endl;
        else
            cout << "You can't create a new Album" << endl;
    }
};


int main() {
    Album album1 ("1989", "Pop", 13, 10000000,false);
    Album album2 ("folklore", "Alternative", 15, 2000000, true);

    // Will display the decision of Record Label
    cout << "Since you sold " << album1.getSales() << " from you last album " << album1.getTitle() <<  " It means... " << endl;
    album1.project_proposal(); // People/Fans doesn't know what's going behind the scene, it's hidden from them.


    return 0;
}

// Smartphone Analogy:
// Manufacturer provide the Physical Structure and display the UI/UX for the user while taking care the Logical Structure
// of the phone behind the scene (Operating System, Fixing the Bugs, Enhancing the UI/UX, Security Patches, etc..).
// User Doesn't need to know what's going behind the scene in order to utilize the phone.
// All the information and complexity is hidden from them.