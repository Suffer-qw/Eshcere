#include <iostream>
using namespace std;
class Long
{
private:
    int KM;
    int M;

public:
    Long(int KM, int M)
    {
        this->KM = KM;
        this->M = M;
    }
    Long operator+ (const Long& secondCurrency)
    {
        M = M + secondCurrency.M;
        while (M >1000)
        {
            M -= 1000;
            KM++;
        }
        return Long(KM + secondCurrency.KM, M);
    }
    Long operator+= (const int& addRubles)
    {
        KM = KM + addRubles;
        return *this;
    }
    Long operator-= (const int& addRubles)
    {
        KM = KM - addRubles;
        return *this;
    }
    Long operator*= (const int& addRubles)
    {
        M = M * addRubles;
        KM = KM * addRubles;
        while (M > 1000)
        {
            M -= 1000;
            KM++;
        }
        return *this;
    }
    Long operator/= (const int& addRubles)
    {
        M = M / addRubles;
        KM = KM / addRubles;
        return *this;
    }
    //равны ли километры
    bool operator== (const Long& secondCurrency)
    {
        return KM == secondCurrency.KM ? true : false;
        
    }
    //неравны ли километры
    bool operator!= (const Long& secondCurrency)
    {
        return KM == secondCurrency.KM ? false  : true;

    }
    friend ostream& operator<<(ostream& stream, Long& curr)
    {
        stream << "long:" << curr.KM << "." << curr.M << endl;
        return stream;
    }
    friend istream& operator>>(istream& stream, Long& curr) {
        cout << "curr.KM: " << endl;    stream >> curr.KM;
        cout << "curr.M: ";    stream >> curr.M;
        while (curr.M >= 1000)
        {
            curr.M -= 1000;
            curr.KM++;
        }
        return stream;
    }
};

int main()
{
    setlocale(LC_ALL, "rus");
    Long val1 = Long(5, 10);
    Long val2 = Long(15, 25);
    Long val3 = val1 + val2;
    val3 += 99;
    val3 -= 99;
    cin >> val3;
    cout << val3;
}
