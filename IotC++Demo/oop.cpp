#include <iostream>
#include <vector>
#include <fstream> 
#include <string> 
#include <time.h>

using namespace std;

//constructor
//destructor


//Card - number, accountname ("Stefan"), created
//        ScanCard
//CardUsageLog - Card, timestamp, ok ej ok/created/granted/revoked
//System (lista med kort) - ex SL, Gym

typedef struct 
{
	string cardNumber;
	bool access;
	string accountName;
	time_t created;
}CARD_STRUCT;



class Card
{
private:
	string cardNumber;
	bool access;
	string accountName;
	time_t created;

public:
	Card(string cardno, bool access)
	{
		cardNumber = cardno;
		this->access = access;
		created = time(NULL);
	}
	~Card()
	{
		cout << "Nu tas kort " << cardNumber << "bort" << endl;
	}
	void SetAccountName(string newAccountName)
	{
		if (newAccountName.length() > 100)
		{
			return;
		}
		accountName = newAccountName;
	}
	string GetAccountName()
	{
		return accountName;
	}

	bool IsValid(string scannedCardNo)
	{
		return scannedCardNo == cardNumber 
			&& access;
	}
};


void test()
{
	Card c("1234", false);
	Card d("213321312", true);
	cout << "Hello";
}

void hej(int a)
{
	a = 12;
}



class Person
{
	int age;
	string first_name;
	string last_name;
	int birthmonth;
	
	string streetAddress;
	int postalCode;
	string City;

public:
	void ChangeAddress(string StreetAddress, int postalCode, string city)
	{
		streetAddress = StreetAddress;
		this->postalCode = postalCode;
		City = city;
	}


	Person(string firstName, string lastName)
	{
		first_name = firstName;
		last_name = lastName;
	}
	void SetAge(int newAge)
	{
		if (newAge < 0)
		{
			return;
		}
		age = newAge;
	}
	void SetBirthMonth(int newMonth)
	{
		if (newMonth < 1 or newMonth > 12)
			return;
		birthmonth = newMonth;
	}
};

int main()
{
	Person person("Fanny", "Holmberg");
	person.SetAge(19);
	person.SetBirthMonth(1);
	person.City = "Saltsjö-Boo";
	person.postalCode  = 13245;
	person.streetAddress = "dsdadsa 2341";



	person.City = "Stockholm";
	person.postalCode = 11111;


	int a = 13;
	hej(a);

	test();
	string cardNo;

	vector<Card> allaKort;

	Card c("1234",false);
	Card d("213321312", true);
	allaKort.push_back(c);
	allaKort.push_back(d);
	cout << allaKort.size() << endl;

	int i = 12;





	vector<Card*> allaKortPekare;
	cout << "Hur många kort vill du lägga in?";
	int antalKort;
	cin >> antalKort;
	for (int i = 0; i < antalKort; i++)
	{
		string cardno;
		cin >> cardno;
		Card* myCard = new Card(cardno, false);
		allaKortPekare.push_back(myCard);
	}
	for (auto p : allaKortPekare)
	{
		cout << p->GetAccountName();
	}

	c.SetAccountName("Stefan");
	

	cin >> cardNo;
	if (c.IsValid(cardNo))
	{
		cout << "Den som loggade in var:" << c.GetAccountName() << endl;

		cout << "Green lamp";
	}

	return 0;
}