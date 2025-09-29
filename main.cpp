// COMSC-210 | Lab 15 | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Movie {
private:
    string screenWriter;
    int yrReleased;
    string title;
public:
    string getScreenWriter()            { return screenWriter; }
    void setScreenWriter(string s)      { screenWriter = s; }
    int getYrReleased()                 { return yrReleased; }
    void setYrReleased(int y)           { yrReleased = y; }
    string getTitle()                   { return title; }
    void setTitle(string t)             { title = t; }

    void print() {
        cout << "Movie: " << title << endl;
        cout << "\tYear released: " << yrReleased << endl;
        cout << "\tScreenwriter: " << screenWriter << endl << endl;
    }
};

int main() {
    vector<Movie> movies;
    ifstream fin("input.txt");
    string t;   // holds temp title
    int y;      // holds temp year released
    string s;   // holds temp screenwriter

    if (fin.good()) {
        while () {

        }
    }

    return 0;
}