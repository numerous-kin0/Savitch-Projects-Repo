//Author: Mabo Giqwa
//Date created: 02-01-2023
//Problem Solving with C++ Chapter 6 programming
//project 3
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void input(int & lines);

int main()
{
  char next, answer;
  int counter, fileNum;

  fstream inputFile("pro3input.txt", ios::in);
  if(!inputFile)
  {
     cout << "File failed to open\n";
     exit(1);
  };

  input(fileNum);

  counter = 0;
  while(!inputFile.eof())
  {
     if(next == '\n')
        counter++;
     if(counter == fileNum) {
        cout << "Do you want to see the rest of the file?: ";
        cin >> answer;
            if(answer == 'Y' || answer == 'y')
            {
                inputFile.get(next);
                cout << next;
            } else
                exit(1);
        counter = 100;
     };
     inputFile.get(next);
     cout << next;
  };

   inputFile.close();

   return 0;
}
void input(int & lines)
{
  cout << "Enter the number of lines";
  cout << " you want to see: ";
  cin >> lines;
}
        