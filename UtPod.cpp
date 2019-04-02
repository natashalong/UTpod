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
}

/*FUNCTION - int addSong
 * attempts to add a new song to the UtPod
     o returns a 0 if successful
     o returns -1 if not enough memory to add the song

 precondition: s is a valid Song

 input parms - address of the Song being added

 output parms - a new node on the tail of the linked list
*/

int UtPod::addSong(Song const &s)
{

    if(podMemSize < s.getsize()){
        return NO_MEMORY;
    }else {
        //code to insert at tail
        SongNode *last = new SongNode;
        last->s = s;
        last->next = nullptr;
        if (songs == nullptr)                     //if list is empty, insert node at songs(head)
        {
            songs = last;

        } else {
            SongNode *temp = new SongNode;
            temp = songs;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = last;
        }
        return SUCCESS;
    }
/*
 * code to insert at head
        SongNode *temp = new SongNode;
        temp -> s = s;
        temp->next = songs;
        songs = temp;
        podMemSize -= s.getsize();
        return SUCCESS;
*/
}


/* FUNCTION - int removeSong
 * attempts to remove a song from the UtPod
 * removes the first instance of a song that is in the the UtPod multiple times
     o returns 0 if successful
     o returns -1 if nothing is removed


   input parms - address to the song to be removed

   output parms - a new linked list with the song removed
*/

int UtPod::removeSong(Song const &s)
{
    if (songs == nullptr)
    {
        return NO_MEMORY;
    }
    else
    {
        SongNode *prev = songs;
        if(prev->s == (Song) s)                                         //if song to be removed is at first node
        {
            songs = prev->next;
            podMemSize += s.getsize();
            delete &s;
            return SUCCESS;
        }

        while(!(prev->next->s == (Song) s) && prev != nullptr)         //find node before one to be removed
        {
            prev = prev->next;
        }
        if (prev == nullptr)                                            //return if node to be deleted not found
        {
            return NOT_FOUND;
        } else
        {
            prev->next = prev->next->next;                              //
            podMemSize += s.getsize();
            delete &s;
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

   input parms - a linked list

   output parms -
*/

void UtPod::showSongList()
{
    SongNode *current = songs;

    while(current != nullptr)
    {
        string artsy = current -> s.getartist();
        string tity = current -> s.gettitle();
        int sizey = current -> s.getsize();
        cout << artsy << " , " << tity << " , " << sizey << endl;
        current = current -> next;
    }
}


/* FUNCTION - void sortSongList
 *  sorts the songs in ascending order
    o will do nothing if there are less than two songs in the current list

   input parms -a linked list with more than 2 nodes

   output parms - sorted linked list
*/

void UtPod::sortSongList()
{
    if(songs->next == nullptr){                 //return if less than 2 elements in list
        return;
    }
    bool unsorted = true;
    SongNode *temp = new SongNode;
    while(unsorted)
    {
        unsorted = false;
        temp = songs;
        while(temp->next != nullptr)
        {
            SongNode *next = new SongNode;
            next = temp->next;
            if(temp->s > next->s)
            {
                temp = next;
                next = songs;
                songs = temp;
                next->next = songs->next;
                temp->next = next;
                unsorted = true;
            }
            temp = temp -> next;
        }
    }
}


/* FUNCTION - void clearMemory
 * clears all the songs from memory

   input parms -

   output parms -
*/
/*
void clearMemory()
{

}
*/

/* FUNCTION - int getTotalMemory
 *  returns the total amount of memory in the UtPod
    o will do nothing if there are less than two songs in the current list

   input parms - none

   output parms - returns max memory of the UtPod which is a constant
*/

int UtPod::getTotalMemory()
{
    return MAX_MEMORY;
}



/* FUNCTION - int getRemainingMemory
 *  returns the amount of memory available for adding new songs

   input parms - none

   output parms - returns the amount of memory not used
*/

int UtPod::getRemainingMemory()
{
    return podMemSize;
}


