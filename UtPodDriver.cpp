/* utPod_driver.cpp
Demo Driver for the UtPod.

Austin Blanchard
EE 312 3/26/19

This is a basic driver for the UtPod.

You will want to do more complete testing.

*/
#include <cstdlib>
#include <iostream>
#include <string>
#include "UtPod.h"

using namespace std;

int main(int argc, char *argv[])
{

    UtPod t;

    Song s1("Beatles", "Hey Jude1", 4);
    Song s2("Beatles", "Hey Jude2", 5);
    Song s3("Beatles", "Hey Jude3", 6);
    Song s4("Beatles", "Hey Jude4", 7);
    int result = t.addSong(s1);
    result = t.addSong(s2);
    result = t.addSong(s3);
    result = t.addSong(s4);

    //swap(s1, s2);

    t.showSongList();
    cout << endl;
    t.shuffle();
    cout << endl;
    t.showSongList();
    //cout << "result = " << result << endl;

    //t.showSongList();



    //cout << "result = " << result << endl;


    //cout << "result = " << result << endl;

    //t.showSongList();
    //t.sortSongList();
    //t.showSongList();
/*    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;
    t.showSongList();



    Song s4("Beatles", "Hey Jude4", 7);
    result = t.addSong(s4);
    cout << "result = " << result << endl;

    Song s5("Beatles", "Hey Jude5", 241);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();

    result = t.removeSong(s2);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s3);
    cout << "delete result = " << result << endl;

    t.showSongList();

    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;


    t.showSongList();

    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();
    cout << "memory = " << t.getRemainingMemory() << endl;

*/
}