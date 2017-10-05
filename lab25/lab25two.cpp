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
        void SetTitle(string title_to_set_);
        void SetAuthor(string author_to_set_);
        void SetCopyrightYear(int year_to_set_);
        
        string GetTitle() const;
        string GetAuthor() const;
        int GetCopyrightYear() const;
        
        void Print() const;
        
    private:
        string book_title_;
        string book_author_;
        int book_copyright_year_;
};

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

string BookInfo::GetTitle() const {
    return book_title_;
}
string BookInfo::GetAuthor() const {
    return book_author_;
}
int BookInfo::GetCopyrightYear() const {
    return book_copyright_year_;
}

void BookInfo::Print() const {
    cout << endl << book_title_ << " " << book_author_ << " " << book_copyright_year_ << endl;
}


int main() {
    string title;
    string author;
    int copyright_year = 0;
    
    cout << "Enter Title" << endl;
    cin >> title;
    cout << "Enter Author" << endl;
    cin >> author;
    cout << "Enter Copyright Year" << endl;
    cin >> copyright_year;
    
    BookInfo BookOne;
    
    BookOne.SetTitle(title);
    BookOne.SetAuthor(author);
    BookOne.SetCopyrightYear(copyright_year);

    BookOne.Print();

    return 0;
}