#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    system("mode con:cols=120 lines=45");


    cout << "@@@     @@@   @    @  @  @@@@@     @@@  @@@@    @@@     @@@    @@@      @@@@@  @   @  @@@@     @       @  @    @  @@@@" << endl;
    cout << "@  @@  @   @  @@   @  @    @      @     @   @  @   @   @      @           @    @   @  @        @       @  @@   @  @    " << endl;
    cout << "@   @  @   @  @ @  @       @     @      @   @  @   @    @@@    @@@        @    @@@@@  @@@@     @       @  @ @  @  @@@@ " << endl;
    cout << "@   @  @   @  @  @ @       @     @      @@@@   @   @       @      @       @    @   @  @        @       @  @  @ @  @    " << endl;
    cout << "@  @@  @   @  @   @@       @      @     @   @  @   @       @      @       @    @   @  @        @       @  @   @@  @    " << endl;
    cout << "@@@     @@@   @    @       @       @@@  @   @   @@@     @@@    @@@        @    @   @  @@@@     @@@@@@  @  @    @  @@@@ " << endl;

    cout << "\n\n \t\t\t\t\t\t\t START : SPACE \n";
    cout << "\t\t\t\t\t\t Player1 : WASD  Player2 : ¡è¡ç¡é¡æ \n";

    string** block = new string * [30];
    for (int i = 0; i < 30; ++i)
        block[i] = new string[60];

    for (int i = 0; i < 30; i++)
        for (int j = 0; j < 60; j++)
            block[i][j] = "¡à";

    for (int i = 0; i < 60; i++)
    {
        block[0][i] = "¡á";
        block[29][i] = "¡á";
    }
    for (int i = 0; i < 30; i++)
    {
        block[i][0] = "¡á";
        block[i][59] = "¡á";
    }

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 60; j++)
            cout << block[i][j];
        cout << endl;
    }

}