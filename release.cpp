#include "Header.h";

Human::Human(string name, string surname, string midname, int age)
{
	this->age = age;
	this->name = name;
	this->surname = surname;
	this->midname = midname;
}

string Human::GetName()
{
	return name;
}

string Human::GetSurname()
{
	return surname;
}

string Human::GetMidname()
{
	return midname;
}

int Human::GetAge()
{
	return age;
}

Student::Student() {}

Student::Student(string name, string surname, string midname, int age, bool on_lessons) : Human(name, surname, midname, age)
{
	this->on_lesson = on_lessons;
}

Boss::Boss() {}

Boss::Boss(string name, string surname, string midname, int age, int count_workers) : Human(name, surname, midname, age)
{
	this->number_of_workers = count_workers;
}

void Student::print()
{
	cout << "On lessons : " << on_lesson << endl;
	cout << "Name : " << GetName() << endl;
	cout << "Surname : " << GetSurname() << endl;
	cout << "Midname : " << GetMidname() << endl;
	cout << "Age : " << GetAge() << endl;
}

void Boss::print()
{
	cout << " Count of workers : " << endl;
	cout << "Name : " << GetName() << endl;
	cout << "Surname : " << GetSurname() << endl;
	cout << "Midname : " << GetMidname() << endl;
	cout << "Age : " << GetAge() << endl;
}