#include<iostream>
#include<string.h>
using namespace std;
class Exceptionhandling
{
 private:
 int age,vehicle;
 long double income;
 string city;
 
 public:
 void getdata()
 {
 cout<<"Enter the age :"<<endl;
 cin>>age;
 cout<<"Enter the vehicle :"<<endl;
 cin>>vehicle;
 cout<<"Enter the income :"<<endl;
 cin>>income;
 cout<<"Enter the city :"<<endl;
 cin>>city;

 }
 void checkcondition()
 {
 try
 {
   if(age<18||age>55)
   {
     throw"Age should be between 18 and 55";
   }
 }
 catch(const char* msg)
 {
 cerr<<msg<<endl;
 }
 try
 {
 if(income<50000||income>100000)
 {
 throw"Income should be between 50,000 and 1,00,000";
 }
 }
 catch(const char* msg)
 {
 cerr<<msg<<endl;
 }
 try
 {
 if(city=="Pune"||city=="pune"||city=="Mumbai"||city=="mumbai"||city=="chennai"
 ||city=="Chennai"||city=="delhi"||city=="Delhi")
 {
 }
 else
     {
       throw"City should be pune/mumbai/delhi/chennai";
     }
 }
 catch(const char* msg)
 {
 cerr<<msg<<endl;
 }
 try
 {
 if(vehicle!=4)
 {
 throw" User must have 4 wheeler";
 }
 }
 catch(const char* msg)
 {
 cerr<<msg<<endl;
 }
 }
};
int main()
{
 Exceptionhandling eh;
 eh.getdata();
 eh.checkcondition();
 return 0;
}

 
