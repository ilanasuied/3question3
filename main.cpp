//ilana suied
//324523141
//sadna c++
//this program receives 2 words and makes modifications to them
#include "MyString.h"
#include <iostream>
using namespace std;
int main()
{
	MyString a;
	MyString b;
	int n;
	char str[21];
	cin >> str;
	a.setString(str);
	cin >> str;
	b.setString(str);
	cin >> n;
	bool flag = true;//when an if will be active, dont do the others if
	if ( a > str)
	{
		cout << "a>b\n";
		flag = false;
	}
	if (flag && a == b)
	{
		cout << "a=b\n";
		flag = false;
	}
	if (flag && a < str)
	{
		cout << "a<b\n";
	}

	if (n > strlen(str) || n<0)//if the index is bigger then the len of the word
	{
		cout << "ERROR\n";
		char ch;
		cin >> ch >> n;//do nothig
		cout << "ERROR";
		return 0;
	}
	MyString newOne=b.insert(n,a.getString());
	int index; char ch;
	cin >> ch >> index;
	if (index >= newOne.getLen() || n<0)
		cout << "ERROR";
	else
	{
		newOne[index] = ch;
		newOne.print();
	}
	return 0;
}
/*World
Hello
5
a>b
HelloWorld
!
5
Hell!World

C:\Users\ilana suied\Downloads\visual studio project\3.3\Debug\3.3.exe (process 2360) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
Hello
Hello
2
a=b
HeHellollo
h
2
Hehellollo

C:\Users\ilana suied\Downloads\visual studio project\3.3\Debug\3.3.exe (process 49668) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
Hello
World
2
a<b
WoHellorld
?
10
ERROR

C:\Users\ilana suied\Downloads\visual studio project\3.3\Debug\3.3.exe (process 48608) exited with code -1.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
Hello
World
0
a<b
HelloWorld
-
6
HelloW-rld

C:\Users\ilana suied\Downloads\visual studio project\3.3\Debug\3.3.exe (process 43196) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
hello
world
8
a<b
ERROR
j
3
ERROR

C:\Users\ilana suied\Downloads\visual studio project\3.3\Debug\3.3.exe (process 48748) exited with code -1.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
Hello
World
8
a<b
ERROR

j
3
ERROR

C:\Users\ilana suied\Downloads\visual studio project\3.3\Debug\3.3.exe (process 41368) exited with code -1.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
