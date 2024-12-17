#include<iostream>
using namespace std;

class student
{
  string name,year;
  string address;
  int rollno,div,mobile;
  int license;
  float dob;
  char bldgrp;

public:
  void getdata()
  {
   cout<<"\nEnter Name: ";
   cin>>name;
   
   cout<<"\nEnter Year: ";
   cin>>year;

   cout<<"\nEnter Division: ";
   cin>>div;
   
   cout<<"\nEnter RollNo: ";
   cin>>rollno;
 
   cout<<"\nEnter MobileNo: ";
   cin>>mobile;

   cout<<"\nEnter Date of Birth: ";
   cin>>dob;

   cout<<"\nEnter Blood Group: ";
   cin>>bldgrp;

   cout<<"\nEnter Address: ";
   cin>>address;   

   cout<<"\nEnter Licence No: ";
   cin>>license;
  }
  
  student()
  {
   name="ABC";
   year="SE";
   div=5;
   rollno=19;
   mobile=123;
   dob=19.02;
   bldgrp='B';
   address="XYZ";
   license=987;
  
   cout<<"\nIn Default Constructor";
  }
  
  student(string n,string y,int d,int r,int m,float o,char b,string a,int l)
  {
   name=n;                                               
   year=y;
   div=d;
   rollno=r;
   mobile=m;
   dob=o;
   bldgrp=b;
   address=a;
   license=l; 
   
   cout<<"\nIn Parametrized Constructor";
  }

  student(student &s)
  {
   name=s.name;
   year=s.year;
   div=s.div;
   rollno=s.rollno;
   mobile=s.mobile;
   dob=s.dob;
   bldgrp=s.bldgrp;
   address=s.address;
   license=s.license;   
 
   cout<<"\nIn Copy Constructor";
  }
  
  void display()
  {
   cout<<name<<"\t"<<year<<"\t"<<div<<"\t"<<rollno<<"\t"<<mobile<<"\t"<<dob<<"\t"<<bldgrp<<"\t"<<address
<<"\t"<<license<<endl;
  }

  static inline void display_header()
  {
   cout<<"\nNAME\tYEAR\tDIV\tROLL\tMOB\tDOB\tBLDGRP\tADD\tLIC\n";
  }
  
  
};
 
int main()
{ 
/*
  student s1, s2("PQR","SE",5,20,123,20.3,'A',"UVW",789),s3(s1);
  
  
  s1.display_header();
  s1.display();
  s2.display();
  s3.display();
*/
  student s[10];
  int n;
  cout<<"\nEnter No. of Students:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
	s[i].getdata();
  }

  student::display_header();
  for(int i=0;i<n;i++)
  {	
	s[i].display();
  }
  	
  return 0;
}




















