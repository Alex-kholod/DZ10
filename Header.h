#ifndef RELEASE_H
#define RELEASE_H

#include <iostream>;
using namespace std;

class Human
{
	string name, surname, midname;
	int age = 0;
public:
	Human() {}
	Human(string, string, string, int);
	string GetName();
	string GetSurname();
	string GetMidname();
	int GetAge();
	virtual void print() = 0;
	~Human() {}
};

class Student : public Human
{
	bool on_lesson = 0;
public:
	Student();
	Student(string, string, string, int, bool);
	void print() override;
};

class Boss : public Human
{
	int number_of_workers = 0;
public:
	Boss();
	Boss(string, string, string, int, int);
	void print() override;
};

#endif