#include <iostream>
#include <cstdio>
#include <string.h>
#include <windows.h>
using namespace std;

/* var area */
bool control=true;//control 
string text;

void ShowDisplay()
{
	if(control) 
	{
		cout<<"user:"<<endl;
		getline(cin,text);
		freopen("command.txt","w",stdin);
	}
	 
}

int main()
{
	while(true)
	{
		ShowDisplay();
		if (text=="q")
		{
			cout<<"Thanks for using."<<endl;
			break;
		}
	}
	return 0;
}
