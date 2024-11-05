int main()
{
string zxc;
	zxc = "01022037";
	int xxc = stoi(zxc);
	int age = stoi(zxc.substr(4, 4));
	if (xxc > 01012000) {
		for (int i = 2000; i <= age; i += 4) {
			cout << " " << i;
		}

	}
}
