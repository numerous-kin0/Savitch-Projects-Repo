//Author: Mabo Giqwa
//Created: 12-02-2023
//Programming project 4 in Chapter 10 Problem Solving with C++
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

class UpdateBook : public BookInfo
{
    public:
       UpdateBook(string authorT, string titleT, int editionT);
       UpdateBook();
       int getEdition();
    private:
       int edition;
};
int main()
{
   //BookInfo book("Mabo", "Techniques of AI");

   //book.output(cout);

   UpdateBook book1("Mfundo","The Art Of Sleeping All Day", 7);

   book1.output(cout);

   return 0;
};
//Child class functions
UpdateBook::UpdateBook(string authorT, string titleT, int editionT)
{
    setAuthor(authorT);
    setBook(titleT);
    edition = editionT;
};
UpdateBook::UpdateBook() : edition(0)
{
};
int UpdateBook::getEdition()
{
    return edition;
};