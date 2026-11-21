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
double fop_gp()
{   
    int n;
    double quiz_total=0,quiz_obtained=0,marks,assign_total=0,assign_obtained=0;
    double mid_total=0,mid_obtained=0,final_total=0,final_obtained=0,percent,fop_gpa;
    char ch;
    
    cout<<"ENTER THE NUMBER OF QUIZZES HELD :";//FOR QUIZ
    cin>>n;
    while(n<0||n>4)
    {
        cout<<"INAVILD INPUT! ENTER AGAIN :";
        cin>>n;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"ENTER MARKS FOR "<<i<<" QUIZ:";
        cin>>marks;
        while(marks<0||marks>4.5)
        {
            cout<<"Invalid Marks Of "<<i<<" Quiz! ENTER AGAIN :";
            cin>>marks;
        }
        quiz_total+=4.5;
        quiz_obtained+=marks;
    }
    cout<<"ENTER THE NUMBER OF ASSIGNMENTS HELD :";// for assignment
    cin>>n;
     while(n<0||n>4)
    {
        cout<<"INAVILD INPUT! ENTER AGAIN :";
        cin>>n;
    }
      for(int i=1;i<=n;i++)
    {
        cout<<"ENTER MARKS FOR "<<i<<" ASSIGNMENT:";
        cin>>marks;
        while(marks<0||marks>3)
        {
            cout<<"Invalid Marks Of "<<i<<" Assignment! ENTER AGAIN :";
            cin>>marks;
        }
        assign_total+=3;
        assign_obtained+=marks;
    }
    cout<<"IS YOUR MID-TERM FOP PAPER HELD(Y/N):";
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        cout<<"ENTER YOUR MID-TERM FOP PAPER MARKS:";
        cin>>marks;
        while(marks<0||marks>30)
        {
            cout<<"Invalid Marks! Enter Again :";
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
       cout<<"IS YOUR FINAL FOP PAPER HELD(Y/N):";
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        cout<<"ENTER YOUR FINAL FOP PAPER MARKS:";
        cin>>marks;
        while(marks<0||marks>40)
        {
            cout<<"Invalid Marks! Enter Again :";
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
    percent=((quiz_obtained+assign_obtained+mid_obtained+final_obtained)/(quiz_total+assign_total+mid_total+final_total)*100);
    cout<<percent<<"%";
   fop_gpa=grade_points(percent)*3;


return fop_gpa;
}

int main()
{int r;
 r=fop_gp();
 cout<<r;
}