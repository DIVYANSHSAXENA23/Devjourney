/*Create a class called ‘Room1’ with private data members such as length and
breadth. Use default constructor to get user input for length and breadth in
metre. Create another class called ‘Room2’ with private data members such as
length and breadth. Use parameterized constructor to assign user input to length
and breadth in feet. Create a friend function for the above two classes to
calculate the sum of areas of Room1 and Room2 and display the area in feet (1
m = 3.2808 ft). Write a C++ program to implement the above scenario.*/
#include<iostream>
using namespace std;
class Room2;
class Room1{
    private:
        int length;
        int breadth;
    public:
        Room1(){
            cout<<"enter length and breadth in meters: \n";
            cin>>length>>breadth;
        }
        friend int cal_Total_Area(Room1 ,Room2);

};
class Room2{
    private:
        int length;
        int breadth;
    public:
        Room2(int l,int b){
            length=l;
            breadth=b;
        }
        friend int cal_Total_Area(Room1 ,Room2);
};
int cal_Total_Area(Room1 r1,Room2 r2){
    int total;
    int Room1area=(r1.length*3.2808)*(r1.breadth*3.2808);
    int Room2area=(r2.length)*(r2.breadth);
    total=Room1area +Room2area;
    return total;
}
int main(){
    Room1 o1;
    int l_feet,b_feet;
    cout<<"enter length and breadth in feet : \n";
    cin>>l_feet>>b_feet;
    Room2 o2(l_feet,b_feet);
    int total_area=cal_Total_Area(o1,o2);
    cout<<"Total area of both the rooms in square feet is : "<<total_area<<" sq ft";
    return 0;
}