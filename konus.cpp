// я не понял зачем в этой задачи добовлть координты 
//

#include <iostream>
#include <math.h>
using namespace std;

class Konus
{
public:
	Konus() {
		this->r = 1;
		this->h = 1;
	};
	Konus(int r,int h) {
		this->r = r;
		this->h = h;
	};
	
	void VSize()
	{
		double Vsize =((r * r) * h)*1/3;
		cout << Vsize << endl;
	}
	void SSize()
	{
		double ssize =  r * (r+sqrt(r*r+h*h));
		cout << ssize << endl;
	}

	friend istream& operator>>(istream& in, Konus& con)
	{
		in >> con;
		con.SSize();
		con.VSize();
	}
	friend ostream& operator<<(ostream& in, Konus con)
	{
		in <<"радиус " << con.r<<"\n" << "высота " << con.h << "\n";
		return in;
	}
	int r;
	int h;
};
class Kon : Konus
{
public:
	Kon() : Konus(){
		this->rtwo = 1;
	};
	Kon(int r, int h, int rtwo) : Konus(r, h){
		this->rtwo = rtwo;
	};

	void VSize()
	{
		double Vsize = (h * ((r * r) + r * rtwo + (rtwo * rtwo)) * 3.14) / 3;
		cout << Vsize << endl;
	}
	void SSize()
	{
		double ssize = ((r * r)+ (rtwo * rtwo)+ (r + rtwo)*(sqrt((h * h) + ((r - rtwo)* (r - rtwo)))))*3.14;
		cout << ssize << endl;
	}

	friend istream& operator>>(istream& in, Kon& con)
	{
		in >> con;
		con.SSize();
		con.VSize();
	}
	friend ostream& operator<<(ostream& in, Kon& con)
	{
		in << "радиус " << con.r << "\n" << "высота " << con.h << "\n" << "радиус два " << con.rtwo << "\n";
		return in;
	}
private:
	int rtwo;
};

int main()
{
    setlocale(LC_ALL, "rus");
	Konus one(3, 4);
	Konus two;
	Konus three(6, 7);
	const int size = 3;
	Konus box[size] = {one, two,three };
	for (int i = 0; i < size; i++)
	{
		cout << endl;
		cout << box[i];
		cout << "площадь "<<i+1<<" пи ";
		box[i].SSize();
		cout << "объем " << i + 1 << " пи ";
		box[i].VSize();
	}
	cout << endl;
	cout<<"усечёный" << endl;

	//усечёный
	Kon onex(3, 4, 2);
	Kon twox;
	Kon threex(10, 7, 5);
	Kon boxx[size] = { onex, twox,threex };
	for (int i = 0; i < size; i++)
	{
		cout << endl;
		cout << boxx[i];
		cout << "площадь " << i + 1 << " пи ";
		boxx[i].SSize();
		cout << "объем " << i + 1 << " пи ";
		boxx[i].VSize();
	}
}
