// Topic: Encapsulation in C++
// Synopsis: Program that use Encapsulation to provide an information about the album.
// Author: Raven Soriano


#include <iostream>
#include <string>
using namespace std;

class Album {

// Encapsulated Properties
private:
    string Title;
    string Genre;
    int Number_Of_Songs;
    bool Is_Explicit;

public:
    // Title
    void setTitle (string title) {  // Setter
        Title = title;
    }
    string getTitle() { // Getter - This value will return whoever invokes this method
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

    // Explicit
    void setExplicit (bool is_explicit) {
        Is_Explicit = is_explicit;
    }
    bool getExplicit () {
        return Is_Explicit;
    }


    // Constructor
    Album(string title, string genre, int number_of_songs, bool is_explicit) {
        Title = title;
        Genre = genre;
        Number_Of_Songs = number_of_songs;
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
};


int main() {
    Album album1 ("1989", "Pop", 13, false);
    Album album2 ("folklore", "Alternative", 15, true);
//    album1.Album_Function();

    album1.setNum_Of_Songs(15);
    cout << album1.getTitle() << " and it has " << album1.getNum_Of_Songs() << " songs in Deluxe Version." << endl;
    cout << album1.getGenre();
    return 0;
}





