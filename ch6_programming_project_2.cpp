//Author: Mabo Giqwa
//Date created: 02-01-2023
//Problem Solving with C++ Chapter 6 Programming Project 2
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
  char next, answer;
  int counter;

  fstream inputFile("project2in.dat", ios::in);
  if(!inputFile)
  {
    cout << "File failed to open" << endl;
    exit(1);
  }
  counter = 0;
  inputFile.get(next);
  while(!inputFile.eof())
  {
      if(next == '\n')
         counter++;
      if(counter == 2) {
         cout << "Do you want to see the rest of the file?: ";
         cin >> answer;
            if(answer == 'Y' || answer == 'y')
            {
                inputFile.get(next);
                cout << next;
            } else
                exit(1);
         counter = 6;
      };
      inputFile.get(next);
      cout << next;
}

  inputFile.close();

  return 0;
}