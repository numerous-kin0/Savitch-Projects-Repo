//Program that represents polynomials using linked lists
//Created 27-07-2023
//By Mabo Giqwa
//Chapter 13 Programming Project 3 in Problem
//Solving With C++
//Unfinished solution
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct Node
{
   int coefficient;
   int power;
   Node*link;
};
typedef Node* NodePtr;

class Polynomial
{
public:
    Polynomial();
    //Default constructor
    //Sets the head pointer to nullptr
    Polynomial(int);
    //Constructor accepts value of type int
    //Sets the value to a constant term of a polynomial
    Polynomial(int,int);
    //Constructor which accepts a coefficient
    void addNode(int, int);
    //Adds a node to a linked list
    void printPolynomial();
    //Precondition: Must be called by a 'Polynomial' object.
    //Postcondition: Prints the polynomial contained in the linked
    //list
    void getPolynomialFromUser();
    //Precondition: Gets input from the user
    //Postcondition: Returns the polynomial
private:
    NodePtr head;
};

int main()
{
    Polynomial poly1(5,0);

    poly1.addNode(4,2);

    poly1.addNode(-5, 3);

    poly1.printPolynomial();

    return 0;
}
Polynomial::Polynomial()
{
    head = nullptr;
}
Polynomial::Polynomial(int constantVal)
{
    head = new Node;
    head->coefficient = constantVal;
    head->power = 0;
    head->link = nullptr;
}
Polynomial::Polynomial(int coefficientVal,int powerVal)
{
    head = new Node;
    head->coefficient = coefficientVal;
    head->power = powerVal;
    head->link = nullptr;
}
void Polynomial::addNode(int coefficientVal,int powerVal)
{
    NodePtr tempPtr = new Node;
    tempPtr->coefficient = coefficientVal;
    tempPtr->power = powerVal;
    tempPtr->link = head;
    head = tempPtr;
}
void Polynomial::getPolynomialFromUser()
{
    char polynomial[25];

    cout << "Enter the polynomial:";
    cin.getline(polynomial,25);

    for(int i = 0; i <= strlen(polynomial);i++)
    {
        cout << polynomial[i];
    }
    cout << endl;
}
void Polynomial::printPolynomial()
{
    NodePtr iter;

    string reverse_polynomial;
    int length;

    for(iter = head; iter != nullptr; iter = iter->link)
    {
        if (iter->power == 0)
        {
            cout << iter->coefficient;
        } else {
            cout << iter->coefficient << "x^" << iter->power;
            if(iter->link != nullptr)
                cout << " + ";
        }
    }
}
