// ShoosMarcet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
using namespace std;

class Sock
{
public:
	Sock()
	{
		this->size = 1;
		this->color = "color";
	}
	Sock(int size, string color)
	{
		this->size = size;
		this->color = color;
	}
	
	void getSock()
	{
		cout<<size<<" "<< color<<endl;
	}
	

private:
	int size;
	string color;
};

class Shoes
{
public:
	Shoes()
	{
		this->size = NULL;
		this->color = "NULL";
		this->type = "NULL";
	}

	Shoes(int size, string color, string type)
	{
		this->size = size;
		this->color = color;
		this->type = type;
	}

	void getShoes()
	{
		cout << size << " " << color <<" "<< type<< endl;
	}


private:
	int size;
	string color;
	string type;
};

class Shop
{

private:
	int SockSize = 0;
	Sock* SockA =  new Sock[SockSize];
	int SockShoes = 0;
	Shoes* ShoesA = new Shoes[SockShoes];
public:

	void AddSock(Sock hehe)
	{
		
		Sock* Time= new Sock[SockSize+1];
		for (int i = 0; i < SockSize;i++)
		{
			Time[i] = SockA[i];
		}
		Time[SockSize] = hehe;
		SockA = Time;
		this->SockSize++;
	}
	void AddShoes(Shoes haha)
	{

		Shoes* Time = new Shoes[SockShoes + 1];
		for (int i = 0; i < SockShoes;i++)
		{
			Time[i] = ShoesA[i];
		}
		Time[SockShoes] = haha;
		ShoesA = Time;
		this->SockShoes++;
	}
	void ptint()
	{
		for (int i = 0; i < SockSize;i++)
		{
			SockA[i].getSock();
		}
		for (int i = 0; i < SockShoes;i++)
		{
			ShoesA[i].getShoes();
		}
	}


};





int main()
{
	Sock ss(12, "yllo");
	Shoes qq(42, "red", "butz");
	Shop qvic;
	qvic.AddSock(ss);
	qvic.AddShoes(qq);
	qvic.ptint();


}
