#include <iostream>
#include <vector>
#include <fstream> 
#include <iomanip>

using namespace std;

float CalculateVat(float varde, float vatRate = 0.25f)
{
	return varde * vatRate;
}

int Summera(int tal1, int tal2)
{
	return tal1 + tal2;
}

int Summera(int tal1, int tal2, std::string message)
{
	cout << message;
	return tal1 + tal2;
}


float Summera(float f1, float f2)
{
	return f1 + f2;
}

void change(int &a)
{
	a = 123;
}

typedef struct c
{
	string number;
	bool access;
}CARD;


int main()
{
	string s = "sdasda";
	if (s == "Stefan")
	{

	}
	//int a2 = 312312;
	//float f = 23.31234234f;
	////printf("%.3f",f);
	//cout << f << "\n";
	//cout << "Hej" << a2 <<  setprecision(3)  << f << "\n";
	//cout <<  f << "\n";



	//char name[100];
	//cout << "Enter your name: ";
	//cin.getline(name, 100);

	//int age;
	//cout << "Enter your age: ";
	//cin >> age;
	//////"%f.3f"
	////float f = 123.24554f;



	//
	ofstream filen;
	//ofs.open("c:\\kurser\\test.txt", std::ofstream::out | std::ofstream::app);
	filen.open("c:\\kurser\\test.txt", ofstream::out | ofstream::app);
	filen << "nästa rad" << endl;
	filen.close();

	ifstream readfile;
	readfile.open("c:\\kurser\\test.txt", ifstream::in);
	char buf[255];
	while (!readfile.eof())
	{
		readfile.getline(buf, 255);
		cout << buf << endl;
	}
	readfile.close();



	//CARD* p = new CARD;
	//delete p;
	//CARD* p = malloc(sizeof(CARD) * 10);
	//p[0].number = "31212331";
	//p[4].number = "31231";
	//p[1233].number = "231231231";

	//vector<CARD> v;
	//CARD c; c.number = "31231";
	//v.push_back(c);
	//CARD c2; c2.number = "312311233";
	//v.push_back(c2);
	//v[1].number = "231231231";
	//v[3331231].number = "231123";
	//vector<float> floatVector = {12.3f,111.231f, 43234.3f};
	//vector<string>
	
	//map<CARD>
	//floatVector[0] = 13.31231f;

	//for (float varde : floatVector)
	//{
	//	cout << varde;
	//}
	//for (float &varde : floatVector)
	//{
	//	varde = 231231.1313f;
	//}
	//for (int i = 0; i < floatVector.size(); i++)
	//{
	//	floatVector[i] = 231231.1313f;
	//}





	int a = 99;
	int b = 100;

	if (a == 99 && a == 23)
	{

	}


	change(a);
	printf("%d", a);

	int n = Summera(12, 25);
	float n2 = Summera(12.0f, 25.0f);
	float m = CalculateVat(100);
	float m2 = CalculateVat(200, 0.06f);


    std::cout << "Hello World!\n";
}

