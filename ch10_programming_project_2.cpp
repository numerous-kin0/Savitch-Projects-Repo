//Author: Mabo Giqwa
//Created: 12-02-2023
//Programming project 2 in Chapter 10 Problem Solving with C++
#include <iostream>
using namespace std;

class Grade
{
   public:
       Grade(int q1, int q2, int mT, int fE, int fA, char gl);
       Grade();
       void setQuiz1(int q1);
       int getQuiz1();
       void setQuiz2(int q2);
       int getQuiz2();
       void setMidTerm(int mt);
       int getMidTerm();
       void setFinalExam(int fe);
       int getFinalExam();
       void setYearAverage(double q1, double q2, double q3);
       int getYearAverage();
       void setGrade();
       char getGrade();
       double qstop(); //converts the two quizzes to a percentage, read 'Quizzes to percentage'.
       double mtop(); //converts the midterm to a percentage, read 'Midterm to percentage'.
       double ftop(); //converts the final to a percentage, read 'Final to percentage'.
       void output(ostream& outs);
   private:
       int quizz1;
       int quizz2;
       int midTerm;
       int finalExam;
       int finalYearAverage;
       char gradeLetter;
};
int main()
{
   Grade student;

   student.setQuiz1(2);
   student.setQuiz2(2);
   student.setMidTerm(31);
   student.setFinalExam(91);
   student.setYearAverage(student.qstop(), student.mtop(), student.ftop());
   student.setGrade();
   student.output(cout);

   return 0;
};
Grade::Grade(int q1, int q2, int mT, int fE, int fA, char gl)
{
   quizz1 = q1;
   quizz2 = q2;
   midTerm = mT;
   finalExam = fE;
   finalYearAverage = fA;
   gradeLetter = gl;
};
Grade::Grade() : quizz1(0), quizz2(0), midTerm(0), finalExam(0), finalYearAverage(0),
                 gradeLetter('Z')
{
};
void Grade::setQuiz1(int q1)
{
   quizz1 = q1;
};
int Grade::getQuiz1()
{
   return quizz1;
};
void Grade::setQuiz2(int q2)
{
   quizz2 = q2;
};
int Grade::getQuiz2()
{
   return quizz2;
};
void Grade::setMidTerm(int mt)
{
   midTerm = mt;
};
int Grade::getMidTerm()
{
   return midTerm;
};
void Grade::setFinalExam(int fe)
{
   finalExam = fe;
};
int Grade::getFinalExam()
{
   return finalExam;
};
void Grade::setYearAverage(double q1, double q2, double q3)
{
   finalYearAverage = (q1 * 0.25) + (q2 * 0.25) + (q3 * 0.5);
};
int Grade::getYearAverage()
{
   return finalYearAverage;
}
void Grade::setGrade()
{
    if((finalYearAverage >= 90) && (finalYearAverage <= 100))
          gradeLetter = 'A';
    else if((finalYearAverage >= 80) && (finalYearAverage < 90))
          gradeLetter = 'B';
    else if((finalYearAverage >= 70) && (finalYearAverage < 80))
          gradeLetter = 'C';
    else if((finalYearAverage >= 60) && (finalYearAverage < 70))
          gradeLetter = 'D';
    else if(finalYearAverage < 60)
          gradeLetter = 'F';
};
double Grade::qstop()
{
   double percent;
   percent = static_cast<double>(quizz1 + quizz2)/20;
   percent = percent * 100;
   return percent;
};
double Grade::mtop()
{
   double percent;
   percent = static_cast<double>(midTerm)/100;
   percent = percent * 100;
   return percent;
};
double Grade::ftop()
{
   double percent;
   percent = static_cast<double>(finalExam)/100;
   percent = percent * 100;
   return percent;
};
char Grade::getGrade()
{
   return gradeLetter;
};
void Grade::output(ostream& outs)
{
   cout << "Student Report: " << endl;
   cout << "*************************************************" << endl;
   cout << "The score for the first quizz is " << quizz1 << " out of 10." << endl;
   cout << "The score for the second quizz is " << quizz2 << " out of 10." << endl;
   cout << "The score for the mid-term is " << midTerm << " out of 100." << endl;
   cout << "The score for the final exam is " << finalExam << " out of 100." << endl << endl;
   cout << "The students average for the year is " << finalYearAverage << "%." << endl;
   cout << "Their final grade for the year is " << gradeLetter << "." << endl;
   cout << "*************************************************" << endl;
};