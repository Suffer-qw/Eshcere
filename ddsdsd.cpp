/*

class Shrift
{
public:
	virtual string Crypto() = 0;
	virtual string Salt() = 0;
};

class Atbash
{
public:
	Atbash() { name = "atb"; }

	string Crypto(string gg) {
		int lenG = gg.size();
		string newStr;
		for (int i = 0; i < gg.size(); i++)
		{
			for (int j = 0; j < 33; j++)
			{
				newStr += (russianLetters[j] == gg[i]) ? russianLetters[j + 1] : '.';
			}
		}
	}

private:
	char russianLetters[33] = {
		'а', 'б', 'в', 'г', 'д', 'е', 'ё', 'ж', 'з', 'и', 'й',
		'к', 'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф',
        'х', 'ц', 'ч', 'ш', 'щ', 'ъ', 'ы', 'ь', 'э', 'ю', 'я'
    };
	string name;
};

*/

#include <iostream>
using namespace std;

class Encoder {
public:
    virtual string crypt(const string& data) = 0;
    virtual string salt(const string& data, const string& salt) = 0;
};

class SimpleCaesar : public Encoder {
public:
    string crypt(const string& data) override {
        string result;
        for (char c : data) {
            result += c + 3; 
        }
        return result;
    }

    string salt(const string& data, const string& salt) override {
        return crypt(data + salt);
    }
};

class Reverser : public Encoder {
public:
    string crypt(const string& data) override {
        return string(data.rbegin(), data.rend());
    }

    string salt(const string& data, const string& salt) override {
        return crypt(data + salt);
    }
};

int main() {
    SimpleCaesar caesar;
    cout << "Caesar: " << caesar.crypt("ABC") << endl; 
    cout << "Salted: " << caesar.salt("Hi", "123") << endl; 

    Reverser rev;
    cout << "Reversed: " << rev.crypt("hello") << endl; 

    return 0;
