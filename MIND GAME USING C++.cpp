#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
int s=34;
cout<<"\n"<<"CHOOSE THE NUMBER BETWEEN THE FOLLOWING NUMBERS"<<"\n"<<"\n"<<"\n";
int temp=1;
for(int i=1;i<=4;i++)
{
	for(int j=1;j<=4;j++)
	{
		cout<<temp<<" ";
		temp++;
	}
	cout<<"\n";
}
cout<<"\n"<<"\n"<<"PRESS ENTER AFTER CHOOSING"<<"\n"<<"\n";
getch();
system("cls");
cout<<"\n"<<"\n"<<"                                                     !CAUTION      ";
cout<<"\n"<<"\n"<<"\n"<<"\n"<<"******DON'T CHOOSE THE NUMBER AGAIN FROM THE SAME ROW AND SAME COLUMN WhICH YOU CHOOSE ALREADY******"<<"\n";
cout<<"\n"<<"\n"<<"CHOOSE THE SECOND NUMBER!!"<<"\n";
cout<<"\n"<<"1 2 3 4"<<"\n"<<"5 6 7 8"<<"\n"<<"9 10 11 12"<<"\n"<<"13 14 15 16"<<"\n"<<"\n"<<"\n"<<"PRESS ENTER AFTER CHOOSE THE SECOND NUMBER";
getch();
system("cls");
cout<<"\n"<<"\n"<<"                                                     !CAUTION      ";
cout<<"\n"<<"\n"<<"\n"<<"\n"<<"****** CAREFULL DON'T CHOOSE THE NUMBER AGAIN FROM THE SAME ROW AND SAME COLUMN WhICH YOU CHOOSE ALREADY******"<<"\n";
cout<<"\n"<<"\n"<<"CHOOSE THE Third NUMBER!!"<<"\n";
cout<<"\n"<<"1 2 3 4"<<"\n"<<"5 6 7 8"<<"\n"<<"9 10 11 12"<<"\n"<<"13 14 15 16"<<"\n"<<"\n"<<"\n"<<"PRESS ENTER AFTER SELECT THE THIRD NUMBER";
getch();
system("cls");
cout<<"\n"<<"\n"<<"                                                     !CAUTION      ";
cout<<"\n"<<"\n"<<"\n"<<"\n"<<"****** CAREFULL DON'T CHOOSE THE NUMBER AGAIN FROM THE SAME ROW AND SAME COLUMN WhICH YOU CHOOSE ALREADY******"<<"\n";
cout<<"\n"<<"\n"<<"CHOOSE THE FOURTH NUMBER!!"<<"\n";
cout<<"\n"<<"1 2 3 4"<<"\n"<<"5 6 7 8"<<"\n"<<"9 10 11 12"<<"\n"<<"13 14 15 16"<<"\n"<<"\n"<<"\n"<<"PRESS ENTER AFTER CHOOSE THE FOURTH NUMBER";
getch();
system("cls");
cout<<"\n"<<"\n"<<"\n"<<"                   SUM UP THE ALL FOUR NUMBERS YOU CHOOSE     "<<"\n"<<"\n";
getch();
system("cls");
cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"         ANSWER IS ="<<s;
}
