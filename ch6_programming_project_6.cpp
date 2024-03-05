
//Author: Mabo Giqwa
//Date created: 08-01-2023
//Description: Write a program that allows the user to type in any one-line question and 
//then answers that question.
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
   string question;
   char next, answer;
   int number = 18;

   fstream ins("pro6input.txt", ios::in);
   if(!ins)
   {
        cout << "File failed to open\n";
        exit(1);
   };

   do
   {
         cout << "Enter a question you want to ask: \n";
         getline(cin, question, '\n');

         ins.get(next);
         while(next != '\n')
         {
            cout << next;
                 if(next == ' ') {
                       if(ins.peek() == '#') {
                             ins.ignore();
                              if(ins.peek() == 'N')
                                   ins.ignore();
                             cout << number;
                             number--;
                       };
                 };

            ins.get(next);
         };
         cout << endl << endl;

         if(number == 0)
              number = 18;

         cout << "Do you want to ask another question?\n";
         cout << "Enter y for Yes or n for No:\n";
         cin >> answer;

         cin.get();

   } while((answer == 'Y') || (answer == 'y'));

   ins.close();

   return 0;
}




