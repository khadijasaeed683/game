#include<iostream>
#include<windows.h>
using namespace std;

void printcar();
void printenemy1();
void printenemy2();
int x,y;
main(){
	cout << printcar() <<endl;
	gotoxy (15,16);
	cout << printenemy1() <<endl;
}

void printcar(){
	cout << "     ___________" << endl;
	cout << "    (           )" << endl;
	cout << "   /  _________  \\" << endl;
	cout << "   |  |        |  | " << endl;
	cout << "   |  |   $$   |  | " << endl;
	cout << "   |  |   $$   |  | " << endl;
	cout << " ,,|  |________|  |,, " << endl;
	cout << "   (              ) " << endl;
	cout << "     \\   | |    / " << endl;
	cout << "       \\______/ " << endl;
}
void printenemy1() {
	cout << "       ____,__,____" << endl;
	cout << "   __ (            )__" << endl;
	cout << "   |^||     <>     ||^|" << endl;
	cout << "   |^||            ||^|" << endl;
	cout << "    --|            |--" << endl;
	cout << "      |            |" << endl;
	cout << "      |            |" << endl;
	cout << "      \\           /  " << endl;
	cout << "      (___________)" << endl;
}

