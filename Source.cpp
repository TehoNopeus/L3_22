#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main() 
{
	ifstream inp;
	string Wtream;
	string add;
	stringstream ss(add);
	inp.open("texxt.txt");
	if (!inp.is_open())
	{
		cout << "No such file\n";
	}
	while (inp >> Wtream)
	{
		if (Wtream[0] == 'a'|| Wtream[0] == 'e' || Wtream[0] == 'y' || Wtream[0] == 'u' || Wtream[0] == 'i' || Wtream[0] == 'o')
		add += Wtream + " ";
	}
	ss << add;
	while (ss) {
		ss >> Wtream;
		cout << Wtream << " ";
	}
}