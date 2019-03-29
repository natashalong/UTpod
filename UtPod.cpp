//
// Created by Austin on 3/26/2019.
//

#include <string>
#include <iostream>
#include "UtPod.h"
//#include "Song.h"

using namespace std;


//Default constructor
//set the memory size to MAX_MEMORY

UtPod::UtPod()
{

    podMemSize = MAX_MEMORY;

}

//Constructor with size parameter
//The user of the class will pass in a size.
//If the size is greater than MAX_MEMORY or less than or equal to 0, set the size to MAX_MEMORY.

UtPod::UtPod(int size)
{
    if(size > MAX_MEMORY || size <= 0)
    {
        size = MAX_MEMORY;
    }
    else
    {
        this. -> size = size;
    }
}

/*FUNCTION - int addSong
 * attempts to add a new song to the UtPod
     o returns a 0 if successful
     o returns -1 if not enough memory to add the song

 precondition: s is a valid Song

 input parms - address of the Song being added

 output parms - -1 or 0
*/

int UtPod::addSong(Song const &s)
{
    if(podMemSize < s.getsize())
    {
        return -1;
    }
    else
    {

        SongNode temp;
        temp.s = s;
        temp.next = songs;
        songs = &s;
        return 0;

    }

}


/* FUNCTION - int removeSong
 * attempts to remove a song from the UtPod
 * removes the first instance of a song that is in the the UtPod multiple times
     o returns 0 if successful
     o returns -1 if nothing is removed


   input parms -

   output parms -
*/

int removeSong(Song const &s)
{
    if (songs == nullptr)
    {
        return NO_MEMORY;
    }
    else
    {
        SongNode *prev = songs;
        while (prev -> next != (SongNode *) &s || prev != nullptr)       //find the previous node
        {
            prev = prev -> next;
        }

        if (prev == nullptr)
        {
            return NOT_FOUND;
        }
        else
        {
            prev -> next = s -> next;
            podMemSize += s.getsize();
            return SUCCESS;
        }

    }

}


/* FUNCTION - void shuffle
 *  shuffles the songs into random order
    o will do nothing if there are less than two songs in the current list

   input parms -

   output parms -
*/
/*
void shuffle()
{

}
*/

/* FUNCTION - void showSongList
 * prints the current list of songs in order from first to last to standard output
 * format - Title, Artist, size in MB (one song per line)

   input parms -

   output parms -
*/
/*
void showSongList()
{

}
*/

/* FUNCTION - void sortSongList
 *  sorts the songs in ascending order
    o will do nothing if there are less than two songs in the current list

   input parms -

   output parms -
*/
/*
void sortSongList()
{

}
*/

/* FUNCTION - void clearMemory
 * clears all the songs from memory

   input parms -

   output parms -
*/

void clearMemory()
{

}


/* FUNCTION - int getTotalMemory
 *  returns the total amount of memory in the UtPod
    o will do nothing if there are less than two songs in the current list

   input parms - none

   output parms -
*/

    int getTotalMemory() {
        return podMemSize;
    }



/* FUNCTION - int getRemainingMemory
 *  returns the amount of memory available for adding new songs

   input parms -

   output parms -
*/

int getRemainingMemory()
{
    return podMemSize;
}


