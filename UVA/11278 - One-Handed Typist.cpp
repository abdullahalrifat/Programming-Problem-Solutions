#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;



int main(){

    string input;

    while(getline(cin,input)){

		char temp[1000+50];

		strcpy(temp,input.c_str());

		for(int j=0;temp[j]!=NULL;j++){
				if(temp[j]=='`')
					temp[j]='`';
				else if(temp[j]=='1')
					temp[j]='1';
				else if(temp[j]=='2')
					temp[j]='2';
				else if(temp[j]=='3')
					temp[j]='3';
				else if(temp[j]=='4')
					temp[j]='q';
				else if(temp[j]=='5')
					temp[j]='j';
				else if(temp[j]=='6')
					temp[j]='l';
				else if(temp[j]=='7')
					temp[j]='m';
				else if(temp[j]=='8')
					temp[j]='f';
				else if(temp[j]=='9')
					temp[j]='p';
				else if(temp[j]=='0')
					temp[j]='/';
				else if(temp[j]=='-')
					temp[j]='[';
				else if(temp[j]=='=')
					temp[j]=']';
				else if(temp[j]=='q')
					temp[j]='4';
				else if(temp[j]=='w')
					temp[j]='5';
				else if(temp[j]=='e')
					temp[j]='6';
				else if(temp[j]=='r')
					temp[j]='.';
				else if(temp[j]=='t')
					temp[j]='o';
				else if(temp[j]=='y')
					temp[j]='r';
				else if(temp[j]=='u')
					temp[j]='s';
				else if(temp[j]=='i')
					temp[j]='u';
				else if(temp[j]=='o')
					temp[j]='y';
				else if(temp[j]=='p')
					temp[j]='b';
				else if(temp[j]=='[')
					temp[j]=';';
				else if(temp[j]==']')
					temp[j]='=';
				else if(temp[j]=='a')
					temp[j]='7';
				else if(temp[j]=='s')
					temp[j]='8';
				else if(temp[j]=='d')
					temp[j]='9';
				else if(temp[j]=='f')
					temp[j]='a';
				else if(temp[j]=='g')
					temp[j]='e';
				else if(temp[j]=='h')
					temp[j]='h';
				else if(temp[j]=='j')
					temp[j]='t';
				else if(temp[j]=='k')
					temp[j]='d';
				else if(temp[j]=='l')
					temp[j]='c';
				else if(temp[j]==';')
					temp[j]='k';
				else if(temp[j]=='\'')
					temp[j]='-';
				else if(temp[j]=='z')
					temp[j]='0';
				else if(temp[j]=='x')
					temp[j]='z';
				else if(temp[j]=='c')
					temp[j]='x';
				else if(temp[j]=='v')
					temp[j]=',';
				else if(temp[j]=='b')
					temp[j]='i';
				else if(temp[j]=='n')
					temp[j]='n';
				else if(temp[j]=='m')
					temp[j]='w';
				else if(temp[j]==',')
					temp[j]='v';
				else if(temp[j]=='.')
					temp[j]='g';
				else if(temp[j]=='/')
					temp[j]='\'';




				
				else if(temp[j]=='$')
					temp[j]='Q';
				else if(temp[j]=='%')
					temp[j]='J';
				else if(temp[j]=='^')
					temp[j]='L';
				else if(temp[j]=='&')
					temp[j]='M';
				else if(temp[j]=='*')
					temp[j]='F';
				else if(temp[j]=='(')
					temp[j]='P';
				else if(temp[j]==')')
					temp[j]='?';
				else if(temp[j]=='_')
					temp[j]='{';
				else if(temp[j]=='+')
					temp[j]='}';
				else if(temp[j]=='Q')
					temp[j]='$';
				else if(temp[j]=='W')
					temp[j]='%';
				else if(temp[j]=='E')
					temp[j]='^';
				else if(temp[j]=='R')
					temp[j]='>';
				else if(temp[j]=='T')
					temp[j]='O';
				else if(temp[j]=='Y')
					temp[j]='R';
				else if(temp[j]=='U')
					temp[j]='S';
				else if(temp[j]=='I')
					temp[j]='U';
				else if(temp[j]=='O')
					temp[j]='Y';
				else if(temp[j]=='P')
					temp[j]='B';
				else if(temp[j]=='{')
					temp[j]=':';
				else if(temp[j]=='}')
					temp[j]='+';
				else if(temp[j]=='A')
					temp[j]='&';
				else if(temp[j]=='S')
					temp[j]='*';
				else if(temp[j]=='D')
					temp[j]='(';
				else if(temp[j]=='F')
					temp[j]='A';
				else if(temp[j]=='G')
					temp[j]='E';
				else if(temp[j]=='H')
					temp[j]='H';
				else if(temp[j]=='J')
					temp[j]='T';
				else if(temp[j]=='K')
					temp[j]='D';
				else if(temp[j]=='L')
					temp[j]='C';
				else if(temp[j]==':')
					temp[j]='K';
				else if(temp[j]=='"')
					temp[j]='_';
				else if(temp[j]=='Z')
					temp[j]=')';
				else if(temp[j]=='X')
					temp[j]='Z';
				else if(temp[j]=='C')
					temp[j]='X';
				else if(temp[j]=='V')
					temp[j]='<';
				else if(temp[j]=='B')
					temp[j]='I';
				else if(temp[j]=='N')
					temp[j]='N';
				else if(temp[j]=='M')
					temp[j]='W';
				else if(temp[j]=='<')
					temp[j]='V';
				else if(temp[j]=='>')
					temp[j]='G';
				else if(temp[j]=='?')
					temp[j]='"';
			
		}

		
		cout << temp << endl; 
    }

    return 0;
}