#include <iostream>
#include <vector>
#include <fstream> 
#include <iomanip>
#include <algorithm>
#include <cstdlib>

using namespace std;

bool IsWovel(char ch)
{
	ch = tolower(ch);
	return ch == 'a' || 
		ch == 'o' ||
		ch == 'u' ||
		ch == 'å' ||
		ch == 'e' ||
		ch == 'i' ||
		ch == 'y' ||
		ch == 'ä' ||
		ch == 'ö';
}

void ToLower2Lab()
{
	ofstream utfil("c:\\kurser\\aaa2.log", ifstream::out | ifstream::app);

	ifstream infil("c:\\kurser\\aaa.log", ifstream::in);
	string line;
	while (infil >> line)
	{
		for (int i = 0; i < line.length(); i++)
		{
			if(IsWovel(line[i]))
				line[i] = ::toupper(line[i]);
		}
		// alt 2
		//for (char& c : row)
		//{
		//	c = ::tolower(c);
		//}
		//alt 3
		utfil << line << endl;
	}

}




void ToLowerLab()
{
	ofstream utfil("c:\\kurser\\aaa.log", ifstream::out | ifstream::app);

	ifstream infil("c:\\kurser\\2019-10-29-13-37-39.log", ifstream::in);
	string s;
	while (infil >> s)
	{
		for (int i = 0; i < s.length(); i++)
		{
			s[i] = ::tolower(s[i]);
		}
		// alt 2
		//for (char& c : row)
		//{
		//	c = ::tolower(c);
		//}
		//alt 3
		utfil << s << endl;
	}

}

void GissaDinSiffra()
{
	srand((int)time(0)); // seed random number
	while (true)
	{
		cout << "Tänk på ett tal mellan 0-100";
		int min = 0;
		int max = 100;
		int antal = 0;
		while (true)
		{
			string input;
			int guess = (min + max) / 2;
			antal++;
			cout << "jag gissar på " << guess << "\n";
			cout << "Är det för (h)ögt för (l)ågt eller (r)ätt?\n";
			cin >> input;
			if (input == "h")
				max = guess - 1;
			if (input == "l")
				min = guess + 1;
			if (input == "r")
			{
				cout << "Yes " << antal << "\n";
				return;
			}
		}
	}
}



void GissaSiffran()
{
	srand((int)time(0)); // seed random number
	while (true)
	{
		int r = (rand() % 100) + 1;
		cout << "Gissa ett tal mellan 1 och 100\n";
		int antal = 0;

		bool correct = false;
		while (!correct)
		{
			int sel;
			cin >> sel;
			antal++;
			if (sel == r)
			{
				cout << "Du gissade rätt på " << antal << " försök\n";
				break;
			}
			if (sel > r)
			{
				cout << "Du måste gissa lägre\n";
			}
			else
			{
				cout << "Du måste gissa högre\n";
			}
		}
	}
}
void lab7()
{
	vector<int> tal{12,234,53,65,243};

	sort(tal.begin(), tal.end());
	for (int t : tal)
		cout << t << endl;
}

void KmToMile()
{
	float km;
	cout << "Ange km>";
	cin >> km;
	float res = km * 1.609f;
	cout << "Det är i miles:" << res << endl;
}

void lab6()
{
	int selection = 0;
	while (selection != 9)
	{
		cout << "MENY\n1. Km to mile\n9. Avsluta" << endl;
		cin >> selection;
		switch (selection)
		{
		case 1:
			KmToMile();
			break;
		}
	}
}

void lab5()
{
	cout << "Ange filnamn1>";
	string filnamn;
	cin >> filnamn;
	cout << "Ange filnamn2>";
	string filnamn2;
	cin >> filnamn2;
	cout << "Ange filnamn nya filen>";
	string filnamnNy;
	cin >> filnamnNy;


	ofstream utfil(filnamnNy, ifstream::out | ifstream::app);
	
	ifstream infil(filnamn, ifstream::in);
	char row[255];
	while (infil.getline(row,sizeof(row)))
	{
		utfil << row << endl;
	}
	
	ifstream infil2(filnamn2, ifstream::in);
	while (infil2.getline(row, sizeof(row)))
	{
		utfil << row << endl;
	}

}


void lab4()
{
	int antal;
	cout << "Ange rader>";
	cin >> antal;
	cout << "Ange filnamn>";
	string filnamn;
	cin >> filnamn;

	ofstream utfil(filnamn, ifstream::out | ifstream::app);

	for (int i = 0; i < antal; i++)
	{
		string rad;
		cout << "Mata in rad " << i + 1 << ">";
		cin >> rad;

		utfil << rad << endl;
	}
	utfil.close();

}


float Summera(float t1, float t2)
{
	return t1 + t2;
}

float Summera(float t1, float t2, float f3)
{
	return t1 + t2 + f3;
}

float Summera(float t1, float t2, float f3, float f4)
{
	return t1 + t2 + f3 + f4;
}

float Summera(float t1, float t2, float f3, float f4, float f5)
{
	return t1 + t2 + f3 + f4 + f5;
}



int Summera(int t1, int t2)
{
	return t1 + t2;
}
int Summera(int t1, int t2, int t3)
{
	return t1 + t2 + t3;
}
int Summera(int t1, int t2, int t3, int t4)
{
	return t1 + t2 + t3 + t4;
}
int Summera(int t1, int t2, int t3, int t4, int t5)
{
	return t1 + t2 + t3 + t4 + t5;
}

void lab3()
{
	cout << Summera(1, 2) << endl
		<< Summera(1, 2, 3) << endl
		<< Summera(1, 2, 3, 4) << endl
		<< Summera(1, 2, 3, 4,5) << endl;

	cout << Summera(1.1f, 2.0f) << endl
		<< Summera(1.1f, 2.0f, 3.0f) << endl
		<< Summera(1.1f, 2.0f, 3.0f, 4.0f) << endl
		<< Summera(1.1f, 2.0f, 3.0f, 4.0f, 5.0f) << endl;

		//Två sätt att förbättra!
	//default parameter
	//template
}

void MinSuperPrint(int n)
{
	cout << "Printing int:" << n << endl;
}

void MinSuperPrint(float n)
{
	cout << "Printing float:" << n << endl;
}

void MinSuperPrint(const char *c)
{
	cout << "Printing character:" << c << endl;
}

void lab2()
{
	MinSuperPrint(1);
	MinSuperPrint(1.13f);
	MinSuperPrint("Hello");
}

int NetSalary(int arbetadeTimmar, int timLon=120, int skattesats=30)
{
	//return (int)(arbetadeTimmar * timLon * (skattesats / 100.0f));
	return static_cast<int>(arbetadeTimmar * timLon * (skattesats / 100.0f));
}
void lab1()
{
	cout << NetSalary(100, 130, 28) << endl;
	cout << NetSalary(5 ) << endl;
	cout << NetSalary(5,130) << endl;
}

int mai3312312n()
{

	ToLowerLab();
	ToLower2Lab();
	lab7();
	lab6();
	lab5();
	lab4();
	lab3();
	lab2();
	lab1();
	return 0;
}
