// フレンド.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <locale>
#include <windows.h>
#include <string>
using namespace std;

class User;

class SecuritySystem;

class Fun;

class Point;

class User
{
	friend void view(SecuritySystem&);
	friend void enter(SecuritySystem&, string login, int pass);
private:
	string login;
	int password;
public:
	User(string login, int password)
	{
		this->login = login;
		this->password = password;
	}
	User()
	{
	}

};

class SecuritySystem
{
	friend void view(SecuritySystem&);
	friend void enter(SecuritySystem&, string login, int pass);
private:
	int num = 1;
	User* Log = new User[num];
public:
	SecuritySystem()
	{
	}
	void Add(User& gg)
	{
		if (this->num > 1) {
			
			User* NLog = new User[num];
			for (int i = 0; i < num - 1; i++)
			{
				NLog[i] = this->Log[i];
			}
			NLog[num-1] = gg;
			this->Log = NLog;
			this->num = num + 1;
		}
		else
		{
			this->Log[num-1] = gg;
			this->num = num + 1;
		}
	}
	
};
void view(SecuritySystem& sys)
{
	for (int i = 0; i < sys.num-1; i++)
	{
		User time = sys.Log[i];
		cout << "id." << i <<" LOG. " << time.login << " PASS. " << time.password<<endl;
	}
}

void enter(SecuritySystem& sys,string login, int pass)
{
	for (int i = 0; i < sys.num-1; i++)
	{
		User time = sys.Log[i];
		if (time.login == login && time.password == pass)
		{
			cout << "you Enter\n" << " LOG. " << time.login << " PASS. " << time.password << endl;
		}
	}
}


class Fun
{
	friend int tripleKILL(Fun& s, int x);
private:
	int a;
	int b;
	int c;
public:
	Fun(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

};

int tripleKILL(Fun& s, int x)
{
	return s.a * (x * x) + s.b * x + s.c;
}

class Point
{
	friend bool TTRUE(Point& q, int num);
private:
	int x;
	int y;
public:
	Point(int x, Fun& s)
	{
		x = x;
		this->y = tripleKILL(s, x);
	}

};

bool TTRUE(Point& q, int num)
{
	cout << q.y <<" " << num;
	return num = q.y ? true : false;
}


int main()
{
	Fun a(2, 4, 0);
	Point q(2, a);
	TTRUE(q, 14);
}
