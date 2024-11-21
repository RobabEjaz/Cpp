#include<iostream>
using namespace std;
int main()
{
 int marks;

 cout<<"Enter your marks:";
 cin>>marks;

 if(marks>=90 && marks<=100)
 {
    cout<<"Your grade is A+ ";
 }
 else if (marks>=50 && marks<=80 ) 
 {
 cout<<"Your grade is B";
 }
 else if (marks>=0 && marks<=40)
{
 cout<<"You are Fail... "; 
}
else
{
   cout<<"Invalid Number...";
}
}