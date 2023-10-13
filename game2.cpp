#include<iostream>
#include<windows.h>
using namespace std;

int x=2, y=2;
int ex=8, ey=19;
int e2x=19, e2y=2;

void gotoxy(int x, int y);
void printenemy1(int x, int y);
void printcar(int ex, int ey);
void printenemy2(int e2x, int e2y);
void printmaze();
void eraseEnemy1();
void moveEnemy1();

main(){
	system ("cls");
	printmaze();
	printcar(ex, ey);
	printenemy1(x,y) ;
	printenemy2(e2x, e2y);
	while(true)
	{
	moveEnemy1();
	Sleep(200);
}
	gotoxy (25,37);
}
void printcar(int ex, int ey) 
{
	gotoxy (ex,ey);
	cout << "       ___,__,___" << endl;
	gotoxy (ex,ey+1);
	cout << "   __ (          )__" << endl;
	gotoxy (ex,ey+2);
	cout << "   |^||    <>    ||^|" << endl;
	gotoxy (ex,ey+3);
	cout << "   |^||          ||^|" << endl;
	gotoxy (ex,ey+4);
	cout << "    --|          |--" << endl;
	gotoxy (ex,ey+5);
	cout << "      |          |" << endl;
	gotoxy (ex,ey+6);
	cout << "      \\          /  " << endl;
	gotoxy (ex,ey+7);
	cout << "      (__________)" << endl;
} 

void printenemy1(int x, int y){
	gotoxy (x,y);
	cout << "    __________" << endl;
	gotoxy (x,y+1);
	cout << "   (          )" << endl;
	gotoxy (x,y+2);
	cout << "   [  ______  ]" << endl;
	gotoxy (x,y+3);
	cout << "   |  | $$ |  | " << endl;
	gotoxy (x,y+4);
	cout << "   |  | $$ |  | " << endl;
	gotoxy (x,y+5);
	cout << "   [  ______  ]" << endl;
	gotoxy (x,y+6);
	cout << "   (          ) " << endl;
	gotoxy (x,y+7);
	cout << "    \\  | |  / " << endl;
	gotoxy (x,y+8);
	cout << "     \\____/ " << endl;
}
void eraseEnemy1(){
	gotoxy (x,y);
	cout << "              " << endl;
	gotoxy (x,y+1);
	cout << "              " << endl;
	gotoxy (x,y+2);
	cout << "              " << endl;
	gotoxy (x,y+3);
	cout << "              " << endl;
	gotoxy (x,y+4);
	cout << "               " << endl;
	gotoxy (x,y+5);
	cout << "               " << endl;
	gotoxy (x,y+6);
	cout << "               " << endl;
	gotoxy (x,y+7);
	cout << "                " << endl;
	gotoxy (x,y+8);
	cout << "                " << endl;
}

void printenemy2(int e2x, int e2y)
{	gotoxy (e2x, e2y);
	cout << "       _________" << endl;
	gotoxy (e2x, e2y+1);
	cout << "      |         |" << endl;
	gotoxy (e2x, e2y+2);
	cout << "      |         |" << endl;
	gotoxy (e2x, e2y+3);
	cout << "      |_________|" << endl;
	gotoxy (e2x, e2y+4);
	cout << "        |     |" << endl;
	gotoxy (e2x, e2y+5);
	cout << "        |     |" << endl;
	gotoxy (e2x, e2y+6);
	cout << "        (------)" << endl;
	gotoxy (e2x, e2y+7);
	cout << "          * *" << endl;
}
void moveEnemy1(int x, inty)
{
	eraseEnemy1();
	x = x + 1;
	if(x == 30)
	{
	x = 2;
	}
	printEnemy1(int x,int y);
}

void printmaze()
{
	cout << " ####################################################################" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " #                                                                  #" << endl;
	cout << " ####################################################################" << endl;

}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
