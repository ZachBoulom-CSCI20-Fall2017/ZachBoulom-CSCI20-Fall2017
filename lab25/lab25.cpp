/*
Zach Boulom
10/4/17
a “book” class that captures pieces of meta data about each book (title, author, copyright year).
After all of the data for all of the books is entered, it displays all the books
*/

#include <iostream>
#include <string>
using namespace std;

class BookInfo {
    public:
        //mutators
        void SetTitle(string title_to_set_);
        void SetAuthor(string author_to_set_);
        void SetCopyrightYear(int year_to_set_);
        
        //accessors
        string GetTitle() const;
        string GetAuthor() const;
        int GetCopyrightYear() const;
        
        void Print();
        
    private:
        string book_title_;
        string book_author_;
        int book_copyright_year_;
};

//mutators
void BookInfo::SetTitle(string title_to_set_) {
    book_title_ = title_to_set_;
    return;
}
void BookInfo::SetAuthor(string author_to_set_) {
    book_author_ = author_to_set_;
    return;
}
void BookInfo::SetCopyrightYear(int year_to_set_) {
    book_copyright_year_ = year_to_set_;
    return;
}

//accessors
string BookInfo::GetTitle() const {
    return book_title_;
}
string BookInfo::GetAuthor() const {
    return book_author_;
}
int BookInfo::GetCopyrightYear() const {
    return book_copyright_year_;
}

//print
void BookInfo::Print() {
    cout << endl << book_title_ << " " << book_author_ << " " << book_copyright_year_;
}


int main() {
    string title;
    string author;
    int copyright_year = 0;
    
    string title_two;
    string author_two;
    int copyright_year_two = 0;
    
    string title_three;
    string author_three;
    int copyright_year_three = 0;
    
    string title_four;
    string author_four;
    int copyright_year_four = 0;
    
    string title_five;
    string author_five;
    int copyright_year_five = 0;
    
    //user inputs book info
    cout << "Enter Title" << endl;
    cin >> title;
    cout << "Enter Author" << endl;
    cin >> author;
    cout << "Enter Copyright Year" << endl;
    cin >> copyright_year;
    
    cout << endl << "Enter Title" << endl;
    cin >> title_two;
    cout << "Enter Author" << endl;
    cin >> author_two;
    cout << "Enter Copyright Year" << endl;
    cin >> copyright_year_two;
    
    cout << endl << "Enter Title" << endl;
    cin >> title_three;
    cout << "Enter Author" << endl;
    cin >> author_three;
    cout << "Enter Copyright Year" << endl;
    cin >> copyright_year_three;
    
    cout << endl << "Enter Title" << endl;
    cin >> title_four;
    cout << "Enter Author" << endl;
    cin >> author_four;
    cout << "Enter Copyright Year" << endl;
    cin >> copyright_year_four;
    
    cout << endl << "Enter Title" << endl;
    cin >> title_five;
    cout << "Enter Author" << endl;
    cin >> author_five;
    cout << "Enter Copyright Year" << endl;
    cin >> copyright_year_five;
    
    //objects
    BookInfo BookOne;
    BookInfo BookTwo;
    BookInfo BookThree;
    BookInfo BookFour;
    BookInfo BookFive;
    
    //inputs userdata into class
    BookOne.SetTitle(title);
    BookOne.SetAuthor(author);
    BookOne.SetCopyrightYear(copyright_year);
    BookTwo.SetTitle(title_two);
    BookTwo.SetAuthor(author_two);
    BookTwo.SetCopyrightYear(copyright_year_two);
    BookThree.SetTitle(title_three);
    BookThree.SetAuthor(author_three);
    BookThree.SetCopyrightYear(copyright_year_three);
    BookFour.SetTitle(title_four);
    BookFour.SetAuthor(author_four);
    BookFour.SetCopyrightYear(copyright_year_four);
    BookFive.SetTitle(title_five);
    BookFive.SetAuthor(author_five);
    BookFive.SetCopyrightYear(copyright_year_five);
    
    //prints book info
    BookOne.Print();
    BookTwo.Print();
    BookThree.Print();
    BookFour.Print();
    BookFive.Print();
    
    return 0;
}