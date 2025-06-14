#include <iostream>

using namespace std;

class Book {

    private:
        string title;
        string author;
        int yearPub;
    public:
        Book(string title, string author, int yearPub)
        {
            this->title = title;
            this->author = author;
            this->yearPub = yearPub;
        }

        void printDetails()
        {
            cout << "Title: " << getTitle() << endl;
            cout << "Author: " << getAuthor() << endl;
            cout << "Year published: " << getYearPub() << endl;
        }

        string getTitle()
        {
            return title;
        }

        string getAuthor()
        {
            return author;
        }
    
        int getYearPub()
        {
            return yearPub;
    
        }
};

int main()
{
    Book myBook("1984", "Donald Trump", 1949);
    myBook.printDetails();
}
