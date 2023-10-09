#include<iostream>
#include<windows.h>
using namespace std;
void printcar();
void printenemy1();
void printenemy2();
int x,y;
main(){
	cout<< printcar() <<endl;
	gotoxy (15,16);
	cout<< printenemy1() <<endl;
}

void printcar(){
	cout <<"                       ---''''''''''''''--\\       "<< endl;
	cout <<"              _.. ' _'.]]- .'-.            \\              "<< endl;
	cout <<"  _____.-'        (_) |       ]]          ' ]]'-. _                 "<< endl;
	cout <<" /_        -------------,--------]]---....______]]__'.'''''''-----__    "<< endl;
	cout <<" | T      .----.           Xxx|x...           |         .---.   ''__            "<< endl;
	cout <<" | |    .' ..--.. '.          Xxx|XXXXXXXXXxx==  |      .' ..--.. '.    ''__                        "<< endl;
	cout <<" ]_j   /  /  _   )  )        Xxx|XXXXXXXXXXX==  |     /  /  _   )  )       '' _  _                   "<< endl;
	cout <<"  |  |  |  /  )  |  |        Xx|'           |     | |  |  /  )  |  |         ()(_)           "<< endl;
	cout <<" |__)_|  |  (__/  |  |___________|_____________|_____|  |  (__/  |  |  |__________J  "<< endl;
	cout <<"      (, (       / ./________________________________(, (       / ./______________)          "<< endl;
	cout <<"         '.'----'.'                                     '.'----'.'                     "<< endl;
	return 0;
}

void printenemy1(){
	cout<<"                          //-''''''''''''''---                                          "<<endl;
	cout<<"                         //              _.. ____________                                  "<<endl;
	cout<<"             ,,,,,,   [[          ' [['-. _                |_____.-'        ____  _\\                "<<endl;
	cout<<"    ___           -------------,--------[[---....______[[__'.       -----__        ] "<<endl;
	cout<<" ,__          . ----.           Xxx|x...           |        .---.   ''__          |"<<endl;
	cout<<" _       	.' ..--.. '.          Xxx|XXXXXXXXXx==  |      .' ..--.. '.   '' |            "<<endl;
	cout<<" (  	   /  /  _   )  )        Xxx|XXXXXXXXXXX==  |    /  /  _   )  )       '_ ]               "<<endl;
	cout<<"  | 	   |  |  /  )  |  |        Xx|'           |    | |  |  /  )  |  |        |         "<<endl;
	cout<<" (__________|  |  (__/  |  |___________|_____________|____|  |  (__/  |  |  |___  |"<<endl;
	cout<<"   [___)    (, (       / ./_______________________________(, (       / |         "<<endl;
	cout<<"         '.'----'.'                                     '.'----'.'                     "<<endl;
	return 0;
}