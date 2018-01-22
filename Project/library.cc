/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
#include <iostream>
using namespace std;
class Book {
    public:
    string Author;
    string Title;
    int PubYear;
};
class Library {
    private:
    int maxAmountOfBooks = 2000;
    int currentAmountOfBooks;
    public:
    Library(int maxAmountOfBooks){ //Parametrized constructor
        this -> books = new Book[maxAmountOfBooks];
    }
    Book *books; //Pointer to objects
    int i = 0;
    int j = 0;
    void addBook(Book book){
        ++i;
        books[i];
        if (sizeof(books) > maxAmountOfBooks){
            cout << "Max amount of books has been reached" << endl;
        }
        else{
        cout << "New book has been added" << endl;
        }
    }
    void getBook(){
        ++j;
        books[j];
        if (j > maxAmountOfBooks){
            cout << "Index is larger than max Amount of Books" << endl;
        }
        else{
        cout << "Book index requested is: " << j << endl;
        }
    }
    ~Library(){ //Destructor
        delete[] books;
    }
   
};
int main()
{
Book bookObj1;
bookObj1.Author = "Gustavo1";
bookObj1.Title = "C++ Training1";
bookObj1.PubYear = 2018;
Book bookObj2;
bookObj2.Author = "Gustavo2";
bookObj2.Title = "C++ Training2";
bookObj2.PubYear = 2018;
Library libObj(5);
libObj.addBook(bookObj1);
libObj.addBook(bookObj2);
libObj.getBook();

    return 0;
}

