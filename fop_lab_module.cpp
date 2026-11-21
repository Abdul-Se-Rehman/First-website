#include<iostream>
using namespace std;
float grade_points(int x )
{
if(x>=90)
{
    return 4.00;
}
else if(x>=85&&x<=89)
{
    return 3.75;
}
else if(x>=80&&x<=84)
{
    return 3.50;
}
else if(x>=75&&x<=79)
{
    return 3.25;
}
else if(x>=70&&x<=74)
{
    return 3.00;
}
else if(x>=66&&x<=69)
{
    return 2.75;
}
else if(x>=63&&x<=65)
{
    return 2.50;
}
else if(x>=60&&x<=62)
{
    return 2.00;
}
else if(x>=55&&x<=59)
{
    return 1.50;
}
else
{
    return 0;
}
}
double foplab_gp()
{ int n;
    char ch;
  double marks,labtask_total=0,labtask_obtained=0,project_total=0,project_obtained=0;
  double mid_obtained=0,mid_total=0,final_obtained=0,final_total=0,percent,fop_gpa;
 cout<<"ENTER THE NUMBER OF LAB TASKS HELD :";
 cin>>n;
 while(n<0||n>6)
 {
    cout<<"INVALID INPUT! ENTER AGAIN :";
    cin>>n;
 }
 for(int i=1;i<=n;i++)
 {
    cout<<"ENTER YOUR MARKS IN "<<i<<" LABTASK :";
    cin>>marks;
    while(marks<0||marks>2.5)
    {
      cout<<"INAVLID MARKS ENTER FOR "<<i<<" LABTASK! ENTER AGAIN:";
      cin>>marks;
    }
    labtask_total+=2.5;
    labtask_obtained+=marks;
 }
  cout<<"ENTER THE NUMBER OF FOP PROJECTS HELD :";
 cin>>n;
 while(n<0||n>2)
 {
    cout<<"INVALID INPUT! ENTER AGAIN :";
    cin>>n;
 }
 for(int i=1;i<=n;i++)
 {
    cout<<"ENTER YOUR MARKS IN "<<i<<" FOP PROJECT :";
    cin>>marks;
    while(marks<0||marks>7.5)
    {
      cout<<"INAVLID MARKS ENTER FOR "<<i<<" PROJECT! ENTER AGAIN:";
      cin>>marks;
    }
    project_total+=7.5;
    project_obtained+=marks;
 }
 cout<<"IS YOUR FOP LAB MID TERM PAPER HELD?(Y/N) ";
 cin>>ch;
 if(ch=='y'||ch=='Y')
 {
   cout<<"ENTER YOUR MARKS IN FOP LAB MIDTERM PAPER:";
   cin>>marks;
   while(marks<0||marks>30)
   {
       cout<<"INVALID MARKS! ENTER AGAIN:";
       cin>>marks;
   }
   mid_obtained=marks;
   mid_total=30;
 }
 else
 {
    mid_obtained=0;
    mid_total=0;
 }
 cout<<"IS YOUR FOP LAB FINAL PAPER HELD?(Y/N) ";
 cin>>ch;
 if(ch=='y'||ch=='Y')
 {
   cout<<"ENTER YOUR MARKS IN FOP LAB FINAL PAPER:";
   cin>>marks;
   while(marks<0||marks>40)
   {
       cout<<"INVALID MARKS! ENTER AGAIN:";
       cin>>marks;
   }
   final_obtained=marks;
   final_total=40;
 }
 else
 {
    final_obtained=0;
    final_total=0;
}

percent=((labtask_obtained+project_obtained+mid_obtained+final_obtained)/(labtask_total+project_total+mid_total+final_total))*100;
cout<<percent<<"%";
fop_gpa=grade_points(percent)*1;
return fop_gpa;
}
int main()
{
 float r;
 r=foplab_gp();
 cout<<r;
}