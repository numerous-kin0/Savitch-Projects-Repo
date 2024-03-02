//Author: Mabo Giqwa
//Created: 12-02-2023
//Programming project 3 in Chapter 10 Problem Solving in C++
#include <iostream>
using namespace std;

class BookInfo
{
    public:
       BookInfo(string author1, string book1);
       BookInfo();
       void setAuthor(string name);
       string getAuthor();
       void setBook(string b);
       string getBook();
       string concatenate();
       void output(ostream& outs);
    private:
       string author;
       string book;
};
int main()
{
   BookInfo book, book1("Mabo", "The Concept of AI"), book2;

   book.setBook("The art of mad genius");
   book.setAuthor("Dr. HuinsTower DufenShmirtz");

   cout << book1.concatenate() << endl << endl;
   cout << book.concatenate() << endl;

   return 0;
};
BookInfo::BookInfo(string author1, string book1)
{
   author = author1;
   book = book1;
};
BookInfo::BookInfo() : author("Unknown"), book("Unknown")
{
};
void BookInfo::setAuthor(string name)
{
   author = name;
}
string BookInfo::getAuthor()
{
   return author;
};
void BookInfo::setBook(string b)
{
   book = b;
};
string BookInfo::getBook()
{
   return book;
};
string BookInfo::concatenate()
{
    string concatString;
    concatString = author + ", " + book;
    return concatString;
};
void BookInfo::output(ostream& outs)
{
    cout << "Title of book: " << book << endl;
    cout << "The author of book: " << author << endl << endl;
};