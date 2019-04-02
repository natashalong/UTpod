/* utPod_driver.cpp

Demo Driver for the UtPod.


Austin Blanchard and Natasha Long

EE 312 3/26/19


*/

#include <cstdlib>

#include <iostream>

#include <string>

#include "UtPod.h"



using namespace std;



int main(int argc, char *argv[])

{



    UtPod t;



    Song s1("beatles", "Hey Jude1", 4);


    Song s2("Beatles", "Hey Jude2", 5);





    int result = t.addSong(s1);



    //cout << "result = " << result << endl;



    //t.showSongList();





    result = t.addSong(s2);

    //cout << "result = " << result << endl;

    Song s3("Beatles", "Hey Jude3", 6);

    result = t.addSong(s3);

    //cout << "result = " << result << endl;



    t.showSongList();

    t.sortSongList();

    t.showSongList();

    result = t.removeSong(s1);

    cout << "delete result = " << result << endl;

    t.showSongList();

    Song s4("Beatles", "Hey Jude4", 7);

    result = t.addSong(s4);

    //cout << "add result = " << result << endl;

    Song s5("Beatles", "Hey Jude5", 241);

    result = t.addSong(s5);

    //cout << "add result = " << result << endl;

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





}