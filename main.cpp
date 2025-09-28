// COMSC-210 | Lab 15 | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
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
        cout << "Movie: "
    }
};

int main() {

    return 0;
}