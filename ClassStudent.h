#pragma once
#pragma once
#include <string>

using namespace std;

struct Date
{
	int year;
	int month;
	int day;
};

class Student
{
public:
	string lastName;
	string firstName;
	Date dateBirth;
	string faculty;
	string group;
	int stage;
	bool study;
	int ocenka[5];
	void SetAge(int age);
	int GetAge();
	double SredniyBall();

private:
	double srednyBall;
	int age;
	void SredBall();
	void UspivStudent();
};

void Student::SetAge(int age)
{
	if (age <= 10 || age > 80) {
		throw - 1;
	}
	else {
		this->age = age;
	}
}

int Student::GetAge()
{
	return age;
}

void Student::SredBall()
{
	double sum = 0;
	for (int i = 0; i < 5; ++i)
	{
		sum += ocenka[i];
	}
	srednyBall = sum / 5;
}

double Student::SredniyBall()
{
	UspivStudent();
	SredBall();
	return srednyBall;
}

void Student::UspivStudent() {
	int studentOcenka;

	for (int i = 0; i < sizeof(ocenka) / sizeof(int);)
	{
		cout << "Enter " << i + 1 << " student ocenka: "; cin >> studentOcenka;

		if (studentOcenka < 1 || studentOcenka>5)
		{
			cout << "Invalid ocenka." << endl;
		}

		else
		{
			ocenka[i] = studentOcenka;
			++i;
		}
	}
}
