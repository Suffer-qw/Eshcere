// Sotrudniki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Employee
{
public:
    Employee(string n, int s)
    {
        this->name = n;
        this->salary = s; 
    }
    virtual void calculateBonus() 
    {
        std::cout << "this emp is not Bonus " << name << std::endl;
    }
    int getSel()
    {
        return salary;
    }
private:
    string name;
    int salary;
    
};
class Manager : Employee
{
public:
    Manager(string n, int s, int num): Employee(n , s)
    {
        this->numberOfSubordinates = num;
    }
    virtual void calculateBonus() 
    {
        double gg = 1.1;
        int z = getSel() / 4;
        for (int i = 0; i < numberOfSubordinates; i++)
        {
            gg += 0.1;
        }
        std::cout << "Bonus  Man " << gg * z << std::endl;
    }
private:
    int numberOfSubordinates;
};

class Developer : Employee
{
public:
    Developer(string n, int s, int prod) : Employee(n, s)
    {
        this->numberOfProjects = prod;
    }
    virtual void calculateBonus()
    {
        double gg = 1.1;
        int z = getSel() / 4;
        for (int i = 0; i < numberOfProjects; i++)
        {
            gg += 0.5;
        }
        std::cout << "Bonus  Developer " << gg * z << std::endl;
    }
private:
    int numberOfProjects;
};

class Intern : Employee
{
public:
    Intern (string n, int s, int intern) : Employee(n, s)
    {
        this->internshipDuration = intern;
    }
    virtual void calculateBonus()
    {
        if (internshipDuration > 3)
        {
            double gg = 1.1;
            int z = getSel() / 10;
            for (int i = 0; i < internshipDuration; i++)
            {
                gg += 0.1;
            }
            std::cout << "Bonus  Intern " << gg * z << std::endl;
        }
        else
            std::cout << "low work" << std::endl;

    }
private:
    int internshipDuration;
};

int main()
{
    Manager mg("Irog", 40000, 2);
    Developer dev("Debil", 80000, 4);
    Intern Int("Zevs", 10000, 5);
    mg.calculateBonus();
    dev.calculateBonus();
    Int.calculateBonus();
}

