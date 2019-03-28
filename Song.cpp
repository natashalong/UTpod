//
// Created by Austin on 3/26/2019.
//


#include "Song.h"

using namespace std;

Song::Song(string _artist, string _title, int _size)
{
    artist = _artist;
    title = _title;
    size = _size;
}

void Song:: setartist(char art)
{
    artist = art;
}

string Song:: getartist() const
{
    return artist;
}

void Song:: settitle(char tit)
{
    title = tit;
}

string Song:: gettitle() const
{
    return title;
}

void Song:: setsize(int siz)
{
    size = siz;
}

int Song:: getsize() const
{
    return size;
}

bool Song::operator>(Song const &rhs)
{
    if(artist > rhs.artist){
        return true;
    }
    if(title > rhs.title){
        return true;
    }
    if(size > rhs.size){
        return true;
    }else{
        return false;
    }
}