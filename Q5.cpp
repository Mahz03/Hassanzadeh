#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char ch[16];

	for (int i = 0; i < 16; i++)
	{
		ch[i]=_getch();
		if ('0' > (ch[i]) || '9' < (ch[i])) {
			cout << "\nwrong char please enter numberic char at" << i<<"\r\n";
			for (int ii = 0; ii < i; ii++)
			{
				cout << ch[ii];
			}
			i--;
		}
		else
		{
			cout << ch[i];
			if (i == 3)cout << "-";
			if (i == 7)cout << "-";
			if (i == 11)cout << "-";
		}
	}
	cout <<"\r\n";
	for (int i = 0; i < 16; i++)
	{
		cout << ch[i];
		if (i == 3)cout << "-";
		if (i == 7)cout << "-";
		if (i == 11)cout << "-";
	}
}
