//
// Created by Natasha Long on 4/2/2019.
//

#ifndef UTPOD_SONG_H
#define UTPOD_SONG_H

#endif //UTPOD_SONG_H

#include <cstdlib>

#include <string>

#include <iostream>

//#include "UtPod.h"



using namespace std;



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

    void settitle(char);

    string gettitle() const;

    void setsize(int);

    int getsize() const;



//greater than for sorting songs

    bool operator >(Song const &rhs);

    bool operator <(Song const &rhs);

    bool operator ==(Song const &rhs);



};