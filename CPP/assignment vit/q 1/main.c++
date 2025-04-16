/*You are working on a project to manage a library. You have a class called
‘Book’ that stores information about the book such as title, author and
publication date. Write a C++ code to overload “<=” and “>=” operators to
compare the books by their publication date. Also, overload “==” operator to
find the book requested by the user by checking the title of the book and display
all the details of that book.*/
#include<iostream>
using namespace std;
class Book{
    private:
    string title;
    string author;
    int pub_year;
    
    public:
    Book(string t,string a,int year){
        title=t;
        author=a;
        pub_year=year;
    }
    string gettitle(){
        return title;
    }
    bool operator <=(Book obj){
    if (pub_year<= obj.pub_year)
        return true;
    else
        return false;
}
    
    bool operator >=(Book obj){
    if (pub_year >= obj.pub_year)
        return true;
    else
        return false;
}
    bool operator ==(string s){
        if (title==s)
            return true;
        else
            return false;
    }
    void display(){
        cout<<"title is :"<<title<<"\n";
        cout<<"author is :"<<author<<"\n";
        cout<<"publication year is :"<<pub_year<<"\n";
    }
};
int main(){
    Book o1("The Great Indian Novel","Shashi Tharoor",1989);
    Book o2("Pride and Prejudice","Jane Austen",1813);
    Book o3("Lord of the Flies","William Golding",1954);
    if ( o3 <= o1)
        cout<<o3.gettitle()<<" was printed earlier or in the same year as "<<o1.gettitle()<<"\n"<<endl;
    if (o1 >= o2)
        cout<<o2.gettitle()<<" was printed earlier or in the same year as "<<o1.gettitle()<<"\n"<<endl;
    string s;
    cout<<"enter title :";
    getline(cin,s);
        if (o1 == s)
        o1.display();
         if (o2 == s)
        o2.display();
        if (o3 == s)
        o3.display();
}