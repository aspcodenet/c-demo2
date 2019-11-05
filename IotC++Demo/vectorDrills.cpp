#include <iostream>
#include <vector>
#include <algorithm> 
#include <map>

using namespace std;

void vector5()
{
	vector<int> v{ 31312,312231,312,43,23,45,565465,31 };
	sort(v.begin(), v.end());

	cout << v[0] << endl << v[1] << endl;

}

void vector7()
{
	vector<int> v{ 31312,312231,312,43,23,312,45,23,565465,23,31 };
	std::map<int, int> counters;
	for (auto i : v)
	{
		counters[i] = counters[i] + 1;
	}
	int maxValue = 0;
	int maxValueCount = 0;
	for (auto i : counters)
	{
		if (i.second > maxValueCount)
		{
			maxValueCount = i.second;
			maxValue = i.first;
		}
	}

	cout << maxValue << " finns " << maxValueCount << " ggr\n";
}

void vector6()
{
	vector<int> v{ 31312,312231,312,43,23,45,565465,31 };
	sort(v.begin(), v.end());

	for(int i = 0; i < v.size()-2;i++)
		cout << v[i] << endl;

}



void vector1()
{
	vector<int> v{31312,312231,312,43,23,45,565465,31};

	int largest = v[0];
	for (int i : v)
	{
		if (i > largest)
			largest = i;
	}
	cout << largest << endl;

}

void vector1_new()
{
	vector<int> v{ 31312,312231,312,43,23,45,565465,31 };

	cout << *max_element(v.begin(), v.end()) << endl;
}

void vector2()
{
	vector<int> v{ 31312,312231,312,43,23,45,565465,31 };
	sort(v.begin(), v.end(), greater <>());
	int cnt = 0;
	for (int i : v)
	{
		cout << i << endl;
		cnt++;
		if (cnt >= 3)
			break;
	}
}

void vector3()
{
	vector<int> v{ 31312,312231,312,43,23,45,565465,31 };

	sort(v.begin(), v.end(), greater <>());
	cout << v[1] << endl;

}


void vector4()
{
	vector<int> v{ 31312,312231,312,43,23,45,565465,31 };
	sort(v.begin(), v.end(), greater <>());

	cout << "Hur många?";
	int cnt = 0;
	cin >> cnt;

	for (int i : v)
	{
		cout << i << endl;
		cnt--;
		if (cnt == 0)
			break;
	}
}



int main()
{
	vector7();
	vector6();
	vector5();
	vector4();
	vector3();
	vector2();
	vector1();
	vector1_new();
	return 0;
}
