#include <iostream>
using namespace std;

class Koleso
{
public:
	Koleso(int deamiter) {
		this->deamiter = deamiter;
	}

private:
	int deamiter;
};

class Dvigatel
{
public:
	Dvigatel(int moznost) {
		this->moznost = moznost;
	}

private:
	int moznost;
};

class Corpys
{
public:
	Corpys(string color) {
		this->color = color;
	}
	
private:
	string color;
};

class Number
{
public:
	Number(string num) {
		this->num = num;
	}

private:
	string num;
};

class Car: Koleso, Dvigatel, Corpys, Number
{
public:
	Car(string Name,int dem,int moz, string col, string num): Koleso( dem),Dvigatel(moz), Corpys(col), Number(num)
	{
		this->Name = Name;
	}
	void print()
	{
		cout << " " << Name << " тут тип гетеры которые дают нам всю остальную информацию и выводят её" << endl;
	}

private:
	string Name;

};

int main()
{
   Car mazina("IGOR", 22, 13,"yello", "r666rr");
   mazina.print();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
