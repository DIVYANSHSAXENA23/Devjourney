/*Write a C++ program to maintain the records of person with details (Name and
    Age) and find the youngest among them. The program must use STL vector and
    functions to return the result.*/
#include<iostream>
#include<vector>
using namespace std;
struct Person{
    string name;
    int age;
};
Person young(vector <Person> &b){
    Person min=b[0];
    for(const auto &Person:b){
        if (Person.age< min.age){
            min=Person;
            return min;
        }
    }
}
int main(){
    int p;
    cout<<"enter no of person";
    cin>>p;
    vector<Person> a;
    for (int i=0;i<p;i++){
        struct Person p1;
        cout<<"enter name ";
        cin>>p1.name;
        cout<<"enter age";
        cin>>p1.age;
        a.push_back(p1);
    }
    struct Person p2=young(a);
    cout<<"youngest person is"<<p2.name;
 

}