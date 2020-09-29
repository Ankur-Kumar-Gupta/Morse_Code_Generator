#include<conio.h>
#include<ctype.h>
#include<string.h>
#include <windows.h>
#include<iostream>
using namespace std;
void logo()
{
	system("CLS");
	cout<<"\n \n ";
	cout<<" \t \t ";cout<<"##     ##   # # #   # # # #    # # #   # # # #      # # # #   # # #   # # # #    # # # #  ";cout<<endl;
	cout<<" \t \t ";cout<<"# #   # #  #     #  #      #  #        #           #         #     #  #       #  #        ";cout<<endl;
	cout<<" \t \t ";cout<<"#  # #  #  #     #  #      #  #        #           #         #     #  #       #  #        ";cout<<endl;
    	cout<<" \t \t ";cout<<"#   #   #  #     #  # # # #    # # #   # # #       #         #     #  #       #  # # #    ";cout<<endl;
   	cout<<" \t \t ";cout<<"#       #  #     #  #   #           #  #           #         #     #  #       #  #        ";cout<<endl;
   	cout<<" \t \t ";cout<<"#       #  #     #  #     #         #  #           #         #     #  #       #  #        ";cout<<endl;
   	cout<<" \t \t ";cout<<"#       #   # # #   #      #   # # #   # # # #      # # # #   # # #   # # # #    # # # #  ";cout<<endl;
}
string input()
{
	string str;
	cout<<"\n \t \t Enter the message (use alphanumeric mostly) : \t";
	getline(cin,str);
	return str;
}
void morse()
{
	logo();
	string msg;
	int i;
	cout<<"\n \n ";
	msg = input();
	cout<<"\n \t \t Morse Code is : \t";
	for (i=0; i < msg.length(); i++)
    {
     {
        if (msg[i] == 'A' || msg[i]== 'a')
            cout<<".-";
        else if (msg[i] == 'B' || msg[i] == 'b')
            cout<<"-...";
        else if (msg[i] == 'C' || msg[i] == 'c')
            cout<<"-.-.";
        else if (msg[i] == 'D' || msg[i] == 'd')
            cout<<"-..";
        else if (msg[i] == 'E' || msg[i] == 'e')
            cout<<".";
        else if (msg[i] == 'F' || msg[i] == 'f')
            cout<<"..-.";
        else if (msg[i] == 'G' || msg[i] == 'g')
            cout<<"--.";
        else if (msg[i] == 'H' || msg[i] == 'h')
            cout<<"....";
        else if (msg[i] == 'I' || msg[i] == 'i')
            cout<<"..";
        else if (msg[i] == 'J' || msg[i] == 'j')
            cout<<".---";
        else if (msg[i] == 'K' || msg[i] == 'k')
            cout<<"-.-";
        else if (msg[i] == 'L' || msg[i] == 'l')
            cout<<".-..";
        else if (msg[i] == 'M' || msg[i] == 'm')
            cout<<"--";
        else if (msg[i] == 'N' || msg[i] == 'n')
            cout<<"-.";
        else if (msg[i] == 'O' || msg[i] == 'o')
            cout<<"---";
        else if (msg[i] == 'P' || msg[i] == 'p')
            cout<<".--.";
        else if (msg[i] == 'Q' || msg[i] == 'q')
            cout<<"--.-";
        else if (msg[i] == 'R' || msg[i] == 'r')
            cout<<".-.";
        else if (msg[i] == 'S' || msg[i] == 's')
            cout<<"...";
        else if (msg[i] == 'T' || msg[i] == 't')
            cout<<"-";
        else if (msg[i] == 'U' || msg[i] == 'u')
            cout<<"..-";
        else if (msg[i] == 'V' || msg[i] == 'v')
            cout<<"...-";
        else if (msg[i] == 'W' || msg[i] == 'w')
            cout<<".--";
        else if (msg[i] == 'X' || msg[i] == 'x')
            cout<<"-..-";
        else if (msg[i] == 'Y' || msg[i] == 'y')
            cout<<"-.--";
        else if (msg[i] == 'Z' || msg[i]== 'z')
            cout<<"--..";
        else if (msg[i] == ' ')
            cout<<"    ";
        else if (msg[i] == '1')
            cout<<".----";
        else if (msg[i]== '2')
            cout<<"..---";
        else if (msg[i]== '3')
            cout<<"...--";
        else if (msg[i] == '4')
            cout<<"....-";
        else if (msg[i] == '5')
            cout<<".....";
        else if (msg[i] == '6')
            cout<<"-....";
        else if (msg[i] == '7')
            cout<<"--...";
        else if (msg[i] == '8')
            cout<<"---..";
        else if (msg[i] == '9')
            cout<<"----.";
        else if (msg[i] == '0')
            cout<<"-----";
        else if(msg[i] == '.')
            cout<<".-.-.-";
        else if (msg[i] == ',')
            cout<<"--..--";
        else if (msg[i] == '!')
            cout<<"-.-.--";
        else if (msg[i] == '@')
            cout<<".--.-.";
        else if (msg[i] == '$')
            cout<<"...-..-";
        else if (msg[i] == '&')
            cout<<".-...";
        else if (msg[i] == '-')
            cout<<"-....-";
        else if (msg[i] == '_')
            cout<<"..--.-";
        else if (msg[i] == '=')
            cout<<"-...-";
        else if (msg[i] == '+')
            cout<<".-.-.";
        else if (msg[i] == ';')
            cout<<"-.-.-.";
        else if (msg[i] == ':')
            cout<<"---...";
        else if (msg[i] == '\'')
            cout<<".----.";
        else if (msg[i] == '"')
            cout<<".-..-.";
        else if (msg[i] == '/')
            cout<<"-..-.";
        else if (msg[i] == '?')
            cout<<"..--..";
        else
        	cout<<msg[i];
     }
	 cout<<"  ";
	}
}
int option()
{
	cout<<"\n \n \t \t Do you want to do it again (Yes/No) : ";
	char x[100];
	fflush(stdin);
	char str1[] = "yes";char str2[] = "YES";char str3[] = "y";char str4[] = "Y";char str5[] = "Yes";
	char str6[] = "NO";char str7[] = "no";char str8[] = "N";char str9[] = "n";char str10[] = "No";
	gets(x);
	if((strcmp(x,str1)==0)||(strcmp(x,str2)==0)||(strcmp(x,str3)==0)||(strcmp(x,str4)==0)||(strcmp(x,str5)==0))
	{
		return 1;
	}
	else if((strcmp(x,str6)==0)||(strcmp(x,str7)==0)||(strcmp(x,str8)==0)||(strcmp(x,str9)==0)||(strcmp(x,str10)==0))
	{
		return 0;
	}
	else
	{
		cout<<" \n \t \t \t \t \t \t \t >>> Wrong Input <<<";
		return option();
	}
}
void close()
{
	logo();
	cout<<"\n \n \n \n \t \t \t \t \t \t Have a Nice Day !!!";
}
int main()
{
	system("color 0A");
	repeat:
	morse();
	int c = option();
	if(c==1)
	{
		goto repeat;
	}
	else
	{
		close();
	}
	getch();
	return 0;
}
