#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "@@@     @@@   @    @  @  @@@@@     @@@  @@@@    @@@     @@@    @@@      @@@@@  @   @  @@@@     @       @  @    @  @@@@" << endl;
    cout << "@  @@  @   @  @@   @  @    @      @     @   @  @   @   @      @           @    @   @  @        @       @  @@   @  @    " << endl;
    cout << "@   @  @   @  @ @  @       @     @      @   @  @   @    @@@    @@@        @    @@@@@  @@@@     @       @  @ @  @  @@@@ " << endl;
    cout << "@   @  @   @  @  @ @       @     @      @@@@   @   @       @      @       @    @   @  @        @       @  @  @ @  @    " << endl;
    cout << "@  @@  @   @  @   @@       @      @     @   @  @   @       @      @       @    @   @  @        @       @  @   @@  @    " << endl;
    cout << "@@@     @@@   @    @       @       @@@  @   @   @@@     @@@    @@@        @    @   @  @@@@     @@@@@@  @  @    @  @@@@ " << endl;


    cout << endl;
    string** block = new string * [30];
    for (int i = 0; i < 30; ++i)
        block[i] = new string[60];

    for (int i = 0; i < 30; i++)
        for (int j = 0; j < 60; j++)
            block[i][j] = "��";

    for (int i = 0; i < 60; i++)
    {
        block[0][i] = "��";
        block[29][i] = "��";
    }
    for (int i = 0; i < 30; i++)
    {
        block[i][0] = "��";
        block[i][59] = "��";
    }

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 60; j++)
            cout << block[i][j];
        cout << endl;
    }

}