#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;


enum KeyBoard
{
    W = 87, A = 65, S = 83, D = 68,
    UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77,
    SPACE = 32
};

int getCommand();
void PrintScreen(string**);
void SetBoard(string**);
void PrintScreen(string**);


int main()
{
    system("mode con:cols=120 lines=45");

    string** block = new string * [30];
    for (int i = 0; i < 30; ++i)
        block[i] = new string[60];

    SetBoard(block);
    PrintScreen(block);

}

int getCommand() 
{
    if (_kbhit()) 
    {
        return _getch();
    }
    return -1;
}

void SetBoard(string** block)
{
    for (int i = 0; i < 30; i++)
        for (int j = 0; j < 60; j++)
            block[i][j] = "  ";

    for (int i = 0; i < 60; i++)
    {
        block[0][i] = "＠";
        block[29][i] = "＠";
    }
    for (int i = 0; i < 30; i++)
    {
        block[i][0] = "＠";
        block[i][59] = "＠";
    }

    //시작 지점 
    block[15][2] = "□";
    block[15][57] = "■";
}

void PrintScreen(string** block)
{

    COORD pos = { 0, 0 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);


    cout << "@@@     @@@   @    @  @  @@@@@     @@@  @@@@    @@@     @@@    @@@      @@@@@  @   @  @@@@     @       @  @    @  @@@@" << endl;
    cout << "@  @@  @   @  @@   @  @    @      @     @   @  @   @   @      @           @    @   @  @        @       @  @@   @  @    " << endl;
    cout << "@   @  @   @  @ @  @       @     @      @   @  @   @    @@@    @@@        @    @@@@@  @@@@     @       @  @ @  @  @@@@ " << endl;
    cout << "@   @  @   @  @  @ @       @     @      @@@@   @   @       @      @       @    @   @  @        @       @  @  @ @  @    " << endl;
    cout << "@  @@  @   @  @   @@       @      @     @   @  @   @       @      @       @    @   @  @        @       @  @   @@  @    " << endl;
    cout << "@@@     @@@   @    @       @       @@@  @   @   @@@     @@@    @@@        @    @   @  @@@@     @@@@@@  @  @    @  @@@@ " << endl;

    cout << "\n\n \t\t\t\t\t\t\t START : SPACE \n";
    cout << "\t\t\t\t\t\t □Player1 : WASD    ■Player2: ↑←↓→ \n";


    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 60; j++)
            cout << block[i][j];
        cout << endl;
    }
}
