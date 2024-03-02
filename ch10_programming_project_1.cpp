//Author: Mabo Giqwa
//Created: 15-03-2023
//Programming project 1 in Chapter 10 Problem Solving with C++
#include <iostream>
using namespace std;

struct Grade
{
   int quizz1;
   int quizz2;
   int midTerm;
   int finalExam;
   int finalYearAverage;
   char gradeLetter;
};
double convertToPercent(Grade& temp);

double convertToPercent1(Grade& temp);

double convertToPercent2(Grade& temp);

double setYearAverage(Grade& temp, double m1, double m2, double m3);

void getGrade(Grade& temp);

void output(Grade& temp, ostream& outs);

int main()
{
   Grade student1 = {9,9,89,95,0};
   double quizzPercent, midTermPercent, finalExamPercent;

   quizzPercent = convertToPercent(student1);
   midTermPercent = convertToPercent1(student1);
   finalExamPercent = convertToPercent2(student1);
   setYearAverage(student1, quizzPercent, midTermPercent, finalExamPercent);
   getGrade(student1);
   output(student1, cout);

   return 0;
};
double convertToPercent(Grade& temp)
{
   double percentage;
   percentage = static_cast<double>(temp.quizz1 + temp.quizz2)/20;
   percentage = percentage * 100;
   return percentage;
};
double convertToPercent1(Grade& temp)
{
   double percentage;
   percentage = static_cast<double>(temp.midTerm)/100;
   percentage = percentage * 100;
   return percentage;
};
double convertToPercent2(Grade& temp)
{
   double percentage;
   percentage = static_cast<double>(temp.finalExam)/100;
   percentage = percentage * 100;
   return percentage;
};
double setYearAverage(Grade& temp, double m1, double m2, double m3)
{
   double yearAverage;
   yearAverage = (m1 * 0.25) + (m2 * 0.25) + (m3 * 0.5);
   temp.finalYearAverage = yearAverage;
};
void getGrade(Grade& temp)
{
    char gradeLetter;
    if((temp.finalYearAverage >= 90) && (temp.finalYearAverage <= 100))
          temp.gradeLetter = 'A';
    else if((temp.finalYearAverage >= 80) && (temp.finalYearAverage < 90))
          temp.gradeLetter = 'B';
    else if((temp.finalYearAverage >= 70) && (temp.finalYearAverage < 80))
          temp.gradeLetter = 'C';
    else if((temp.finalYearAverage >= 60) && (temp.finalYearAverage < 70))
          temp.gradeLetter = 'D';
    else if(temp.finalYearAverage < 60)
          temp.gradeLetter = 'F';
};
void output(Grade& temp, ostream& outs)
{
    cout << "Student Report: " << endl;
    cout << "*************************************************" << endl;
    cout << "The score for the first quizz is " << temp.quizz1 << " out of 10." << endl;
    cout << "The score for the second quizz is " << temp.quizz2 << " out of 10." << endl;
    cout << "The score for the mid-term is " << temp.midTerm << " out of 100." << endl;
    cout << "The score for the final exam is " << temp.finalExam << " out of 100." << endl << endl;
    cout << "The students average for the year is " << temp.finalYearAverage << "%." << endl;
    cout << "Their final grade for the year is " << temp.gradeLetter << "." << endl;
    cout << "*************************************************" << endl;
};

