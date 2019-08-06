#include <iostream>
#include <string>
using namespace std;
void main()
{
	char Ch;
	//cout << "--------------------------------------------\n";
	string usn;
	string usn1;
	string psw;
	string psw1;
	do{
	   cout << "////////////////////Menu////////////////////" << endl;
	   cout << "1. Register" << endl;
	   cout << "2. Login" << endl;
	   cout << "Q. Exit Program"<< endl;
	   cout << "--------------------------------------------\n";
	   cout << "Enter Menu : ";
	   cin >> Ch;
	   if(Ch == '1')
	      {cout << "**********Register**********\n";
		   cout << "Input Username : ";
	       cin >> usn;
		   cout << "Input Password : ";
		   cin >> psw;
		   cout << "****************************\n"<< endl << endl;
	      }
	   else if(Ch == '2')
	      {cout << "************login***********\n";
	       cout << "Input Username : ";
	       cin >> usn1;
		   cout << "Input Password : ";
		   cin >> psw1;
		   if(usn1 != usn,psw1 != psw)
		   {
			   cout << "!!!!Username or Password incorrect Please try again!!!!\n"<< endl << endl;
		   }else cout << "Username or Password correct ^o^\n"<< endl << endl;
	      }
	   else if (Ch == 'Q')
	   {cout << "Exit Program....\n";}
	}while(Ch!='Q');
}