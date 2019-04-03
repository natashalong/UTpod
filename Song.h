//
// Created by Austin on 3/26/2019.
//

#ifndef LAB5_UTPOD_SONG_H
#define LAB5_UTPOD_SONG_H

#include <cstdlib>
#include <string>
#include <iostream>
//#include "UtPod.h"

using namespace std;

#endif //LAB5_UTPOD_SONG_H

//Song declaration
class Song
{
private:

    string artist;
    string title;
    int size;

public:

    Song();
    Song(string artist, string title, int size);

    void setartist(string);
    string getartist() const;
    void settitle(string);
    string gettitle() const;
    void setsize(int);
    int getsize() const;

//greater than for sorting songs
    bool operator >(Song const &rhs);
    bool operator <(Song const &rhs);
    bool operator ==(Song const &rhs);

};
