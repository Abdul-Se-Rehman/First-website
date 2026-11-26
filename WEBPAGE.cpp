#include<iostream>
using namespace std;
double grade_points(float x )
{
if(x>=90)
{
    return 4.00;
}
else if(x>=85)
{
    return 3.75;
}
else if(x>=80)
{
    return 3.50;
}
else if(x>=75)
{
    return 3.25;
}
else if(x>=70)
{
    return 3.00;
}
else if(x>=66)
{
    return 2.75;
}
else if(x>=63)
{
    return 2.50;
}
else if(x>=60)
{
    return 2.00;
}
else if(x>=55)
{
    return 1.50;
}
else
{
    return 0;
}
}
double calculus_gp()
{   
    int n;
    double quiz_total=0,quiz_obtained=0,marks,assign_total=0,assign_obtained=0;
    double mid_total=0,mid_obtained=0,final_total=0,final_obtained=0,percent,calculus_gpa;
    char ch;
    cout<<"=====================CALCULUS======================\n";
    cout<<"ENTER THE NUMBER OF CALCULUS QUIZZES HELD :";//FOR QUIZ
    cin>>n;
    cin.ignore(1000,'\n');
    while(n<0||n>4)
    {
        cout<<"INAVILD INPUT! ENTER AGAIN :";
        cin>>n;
        cin.ignore(1000,'\n');
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"ENTER MARKS FOR "<<i<<" CALCULUS QUIZ:";
        cin>>marks;
        while(marks<0||marks>4.5)
        {
            cout<<"Invalid Marks Of "<<i<<" Calculus Quiz! ENTER AGAIN :";
            cin>>marks;
        }
        quiz_total+=4.5;
        quiz_obtained+=marks;
    }
    cout<<"\n\nENTER THE NUMBER OF CALCULUS ASSIGNMENTS HELD :";// for assignment
    cin>>n;
    cin.ignore(1000,'\n');
     while(n<0||n>4)
    {
        cout<<"INAVILD INPUT! ENTER AGAIN :";
        cin>>n;
        cin.ignore(1000,'\n');
    }
      for(int i=1;i<=n;i++)
    {
        cout<<"ENTER MARKS FOR "<<i<<" CALCULUS ASSIGNMENT:";
        cin>>marks;
        while(marks<0||marks>3)
        {
            cout<<"Invalid Marks Of "<<i<<" Calculus Assignment! ENTER AGAIN :";
            cin>>marks;
        }
        assign_total+=3;
        assign_obtained+=marks;
    }
    cout<<"\n\nIS YOUR MID-TERM CALCULUS PAPER HELD(Y/N):";
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        cout<<"\n\nENTER YOUR MID-TERM CALCULUS PAPER MARKS:";
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
       cout<<"\n\nIS YOUR FINAL CALCULUS PAPER HELD(Y/N):";
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        cout<<"ENTER YOUR FINAL CALCULUS PAPER MARKS:";
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
   calculus_gpa=grade_points(percent)*3;


return calculus_gpa;
}
double fop_gp()
{   
    int n;
    double quiz_total=0,quiz_obtained=0,marks,assign_total=0,assign_obtained=0;
    double mid_total=0,mid_obtained=0,final_total=0,final_obtained=0,percent,fop_gpa;
    char ch;
    cout<<"=======================FOP THEORY======================";
    cout<<"\nENTER THE NUMBER OF FOP QUIZZES HELD :";//FOR QUIZ
    cin>>n;
    cin.ignore(1000,'\n');
    while(n<0||n>4)
    {
        cout<<"INAVILD INPUT! ENTER AGAIN :";
        cin>>n;
        cin.ignore(1000,'\n');
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"ENTER MARKS FOR "<<i<<" FOP QUIZ:";
        cin>>marks;
        while(marks<0||marks>4.5)
        {
            cout<<"Invalid Marks Of "<<i<<" FOP Quiz! ENTER AGAIN :";
            cin>>marks;
        }
        quiz_total+=4.5;
        quiz_obtained+=marks;
    }
    cout<<"\n\nENTER THE NUMBER OF FOP ASSIGNMENTS HELD :";// for assignment
    cin>>n;
     while(n<0||n>4)
    {
        cout<<"INAVILD INPUT! ENTER AGAIN :";
        cin>>n;
    }
      for(int i=1;i<=n;i++)
    {
        cout<<"ENTER MARKS FOR "<<i<<" FOP ASSIGNMENT:";
        cin>>marks;
        while(marks<0||marks>3)
        {
            cout<<"Invalid Marks Of "<<i<<" FOP Assignment! ENTER AGAIN :";
            cin>>marks;
        }
        assign_total+=3;
        assign_obtained+=marks;
    }
    cout<<"\n\nIS YOUR MID-TERM FOP PAPER HELD(Y/N):";
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
       cout<<"\n\nIS YOUR FINAL FOP PAPER HELD(Y/N):";
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
double foplab_gp()
{ int n;
    char ch;
  double marks,labtask_total=0,labtask_obtained=0,project_total=0,project_obtained=0;
  double mid_obtained=0,mid_total=0,final_obtained=0,final_total=0,percent,fop_gpa;
  cout<<"=========================FOP LAB========================";
 cout<<"\nENTER THE NUMBER OF FOPLAB LABTASKS HELD :";
 cin>>n;
 cin.ignore(1000,'\n');
 while(n<0||n>6)
 {
    cout<<"INVALID INPUT! ENTER AGAIN :";
    cin>>n;
    cin.ignore(1000,'\n');
 }
 for(int i=1;i<=n;i++)
 {
    cout<<"ENTER YOUR MARKS IN "<<i<<" FOPLAB LABTASK :";
    cin>>marks;
    while(marks<0||marks>2.5)
    {
      cout<<"INAVLID MARKS ENTER FOR "<<i<<" FOPLAB LABTASK! ENTER AGAIN:";
      cin>>marks;
    }
    labtask_total+=2.5;
    labtask_obtained+=marks;
 }
  cout<<"\n\nENTER THE NUMBER OF FOPLAB PROJECTS HELD :";
 cin>>n;
 while(n<0||n>2)
 {
    cout<<"INVALID INPUT! ENTER AGAIN :";
    cin>>n;
 }
 for(int i=1;i<=n;i++)
 {
    cout<<"ENTER YOUR MARKS IN "<<i<<" FOPLAB PROJECT :";
    cin>>marks;
    while(marks<0||marks>7.5)
    {
      cout<<"INAVLID MARKS ENTER FOR "<<i<<" FOPLAB PROJECT! ENTER AGAIN:";
      cin>>marks;
    }
    project_total+=7.5;
    project_obtained+=marks;
 }
 cout<<"\n\nIS YOUR FOPLAB MID TERM PAPER HELD?(Y/N) ";
 cin>>ch;
 if(ch=='y'||ch=='Y')
 {
   cout<<"ENTER YOUR MARKS IN FOPLAB MIDTERM PAPER:";
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
 cout<<"\n\nIS YOUR FOP LABFINAL PAPER HELD?(Y/N) ";
 cin>>ch;
 if(ch=='y'||ch=='Y')
 {
   cout<<"ENTER YOUR MARKS IN FOPLAB FINAL PAPER:";
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
double english_gp()
{   
    int n;
    double quiz_total=0,quiz_obtained=0,marks,assign_total=0,assign_obtained=0;
    double mid_total=0,mid_obtained=0,final_total=0,final_obtained=0,percent,english_gpa;
    char ch;
    cout<<"=========================ENGLISH=========================";
    cout<<"\nENTER THE NUMBER OF ENGLISH QUIZZES HELD :";//FOR QUIZ
    cin>>n;
    cin.ignore(1000,'\n');
    while(n<0||n>4)
    {
        cout<<"INAVILD INPUT! ENTER AGAIN :";
        cin>>n;
        cin.ignore(1000,'\n');
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"ENTER MARKS FOR "<<i<<" ENGLISH QUIZ:";
        cin>>marks;
        while(marks<0||marks>4.5)
        {
            cout<<"Invalid Marks Of "<<i<<" English Quiz! ENTER AGAIN :";
            cin>>marks;
        }
        quiz_total+=4.5;
        quiz_obtained+=marks;
    }
    cout<<"\n\nENTER THE NUMBER OF ENGLISH ASSIGNMENTS HELD :";// for assignment
    cin>>n;
     while(n<0||n>4)
    {
        cout<<"INAVILD INPUT! ENTER AGAIN :";
        cin>>n;
    }
      for(int i=1;i<=n;i++)
    {
        cout<<"ENTER MARKS FOR "<<i<<" ENGLISH ASSIGNMENT:";
        cin>>marks;
        while(marks<0||marks>3)
        {
            cout<<"Invalid Marks Of "<<i<<" English Assignment! ENTER AGAIN :";
            cin>>marks;
        }
        assign_total+=3;
        assign_obtained+=marks;
    }
    cout<<"\n\nIS YOUR MID-TERM ENGLISH PAPER HELD(Y/N):";
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        cout<<"ENTER YOUR MID-TERM ENGLISH PAPER MARKS:";
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
       cout<<"\n\nIS YOUR FINAL ENGLISH PAPER HELD(Y/N):";
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        cout<<"ENTER YOUR FINAL ENGLISH PAPER MARKS:";
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
   english_gpa=grade_points(percent)*3;


return english_gpa;
}
double itc_gp()
{   
    int n;
    double quiz_total=0,quiz_obtained=0,marks,assign_total=0,assign_obtained=0;
    double mid_total=0,mid_obtained=0,final_total=0,final_obtained=0,percent,itc_gpa;
    char ch;
    cout<<"=========================ITC THEORY=======================";
    cout<<"\nENTER THE NUMBER OF ITC QUIZZES HELD :";//FOR QUIZ
    cin>>n;
    cin.ignore(1000,'\n');
    while(n<0||n>3)
    {
        cout<<"INAVILD INPUT! ENTER AGAIN :";
        cin>>n;
        cin.ignore(1000,'\n');
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"ENTER MARKS FOR "<<i<<" ITC QUIZ:";
        cin>>marks;
        while(marks<0||marks>6)
        {
            cout<<"Invalid Marks Of "<<i<<" Itc Quiz! ENTER AGAIN :";
            cin>>marks;
        }
        quiz_total+=6;
        quiz_obtained+=marks;
    }
    cout<<"\n\nENTER THE NUMBER OF ITC ASSIGNMENTS HELD :";// for assignment
    cin>>n;
     while(n<0||n>3)
    {
        cout<<"INAVILD INPUT! ENTER AGAIN :";
        cin>>n;
    }
      for(int i=1;i<=n;i++)
    {
        cout<<"ENTER MARKS FOR "<<i<<" ITC ASSIGNMENT:";
        cin>>marks;
        while(marks<0||marks>4)
        {
            cout<<"Invalid Marks Of "<<i<<" Itc Assignment! ENTER AGAIN :";
            cin>>marks;
        }
        assign_total+=4;
        assign_obtained+=marks;
    }
    cout<<"\n\nIS YOUR MID-TERM ITC PAPER HELD(Y/N):";
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        cout<<"ENTER YOUR MID-TERM ITC PAPER MARKS:";
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
       cout<<"\n\nIS YOUR FINAL ITC PAPER HELD(Y/N):";
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        cout<<"ENTER YOUR FINAL ITC PAPER MARKS:";
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
   itc_gpa=grade_points(percent)*2;


return itc_gpa;
}
double itclab_gp()
{ 
    int n;
    char ch;
  double marks,labtask_total=0,labtask_obtained=0,project_total=0,project_obtained=0;
  double mid_obtained=0,mid_total=0,final_obtained=0,final_total=0,percent,itclab_gpa;
  cout<<"===========================ITC LAB==========================";
 cout<<"\nENTER THE NUMBER OF ITCLAB LABTASKS HELD :";
 cin>>n;
 cin.ignore(1000,'\n');
 while(n<0||n>6)
 {
    cout<<"INVALID INPUT! ENTER AGAIN :";
    cin>>n;
    cin.ignore(1000,'\n'); 
 }
 for(int i=1;i<=n;i++)
 {
    cout<<"ENTER YOUR MARKS IN "<<i<<" ITCLAB LABTASK :";
    cin>>marks;
    while(marks<0||marks>2.5)
    {
      cout<<"INAVLID MARKS ENTER FOR "<<i<<" ITCLAB LABTASK! ENTER AGAIN:";
      cin>>marks;
    }
    labtask_total+=2.5;
    labtask_obtained+=marks;
 }
  cout<<"\n\nENTER THE NUMBER OF ITCLAB PROJECTS HELD :";
 cin>>n;
 while(n<0||n>2)
 {
    cout<<"INVALID INPUT! ENTER AGAIN :";
    cin>>n;
 }
 for(int i=1;i<=n;i++)
 {
    cout<<"ENTER YOUR MARKS IN "<<i<<" ITCLAB PROJECT :";
    cin>>marks;
    while(marks<0||marks>7.5)
    {
      cout<<"INAVLID MARKS ENTER FOR "<<i<<" ITCLAB PROJECT! ENTER AGAIN:";
      cin>>marks;
    }
    project_total+=7.5;
    project_obtained+=marks;
 }
 cout<<"\n\nIS YOUR ITCLAB MID TERM PAPER HELD?(Y/N) ";
 cin>>ch;
 if(ch=='y'||ch=='Y')
 {
   cout<<"ENTER YOUR MARKS IN ITCLAB MIDTERM PAPER:";
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
 cout<<"\n\nIS YOUR ITCLAB FINAL PAPER HELD?(Y/N) ";
 cin>>ch;
 if(ch=='y'||ch=='Y')
 {
   cout<<"ENTER YOUR MARKS IN ITCLAB FINAL PAPER:";
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
itclab_gpa=grade_points(percent)*1;
return itclab_gpa;
}
double physics_gp()
{   
    int n;
    double quiz_total=0,quiz_obtained=0,marks,assign_total=0,assign_obtained=0;
    double mid_total=0,mid_obtained=0,final_total=0,final_obtained=0,percent,physics_gpa;
    char ch;
    cout<<"==========================APPLIED PHYSICS=========================";
    cout<<"\nENTER THE NUMBER OF APPLIED PHYSICS QUIZZES HELD :";//FOR QUIZ
    cin>>n;
    cin.ignore(1000,'\n');
    while(n<0||n>4)
    {
        cout<<"INAVILD INPUT! ENTER AGAIN :";
        cin>>n;
        cin.ignore(1000,'\n');
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"ENTER MARKS FOR "<<i<<" APPLIED PHYSICS QUIZ:";
        cin>>marks;
        while(marks<0||marks>3.5)
        {
            cout<<"Invalid Marks Of "<<i<<" Applied Physics Quiz! ENTER AGAIN :";
            cin>>marks;
        }
        quiz_total+=3.5;
        quiz_obtained+=marks;
    }
    cout<<"\n\nENTER THE NUMBER OF APPLIED PHSYICS ASSIGNMENTS HELD :";// for assignment
    cin>>n;
     while(n<0||n>4)
    {
        cout<<"INAVILD INPUT! ENTER AGAIN :";
        cin>>n;
    }
      for(int i=1;i<=n;i++)
    {
        cout<<"ENTER MARKS FOR "<<i<<" APPLIED PHYSICS ASSIGNMENT:";
        cin>>marks;
        while(marks<0||marks>4)
        {
            cout<<"Invalid Marks Of "<<i<<" Applied Physics Assignment! ENTER AGAIN :";
            cin>>marks;
        }
        assign_total+=4;
        assign_obtained+=marks;
    }
    cout<<"\n\nIS YOUR MID-TERM APPLIED PHYSICS PAPER HELD(Y/N):";
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        cout<<"ENTER YOUR MID-TERM APPLIED PHYSICS PAPER MARKS:";
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
       cout<<"\n\nIS YOUR FINAL APPLIED PHYSICS PAPER HELD(Y/N):";
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        cout<<"ENTER YOUR FINAL APPLIED PHYSICS PAPER MARKS:";
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
   physics_gpa=grade_points(percent)*2;


return physics_gpa;
}
double phylab_gp()
{ 
    int n;
    char ch;
  double marks,labpractical_total=0,labpractical_obtained=0,project_total=0,project_obtained=0;
  double mid_obtained=0,mid_total=0,final_obtained=0,final_total=0,percent,phylab_gpa;
  cout<<"==========================APPLIED PHYSISC LAB======================";
 cout<<"\nENTER THE NUMBER OF APPLIED PHYSICS LAB PRACTICALS HELD :";
 cin>>n;
 cin.ignore(1000,'\n');
 while(n<0||n>2)
 {
    cout<<"INVALID INPUT! ENTER AGAIN :";
    cin>>n;
    cin.ignore(1000,'\n');
 }
 for(int i=1;i<=n;i++)
 {
    cout<<"ENTER YOUR MARKS IN "<<i<<"  APPLIED PHYSICS LAB PRACTICAL:";
    cin>>marks;
    while(marks<0||marks>7.5)
    {
      cout<<"INAVLID MARKS ENTER FOR "<<i<<" APPLIED PHYSICS LAB PRACTICAL! ENTER AGAIN:";
      cin>>marks;
    }
    labpractical_total+=7.5;
    labpractical_obtained+=marks;
 }
  cout<<"\n\nENTER THE NUMBER OF APPLIED PHYSICS LAB  PROJECTS HELD :";
 cin>>n;
 while(n<0||n>2)
 {
    cout<<"INVALID INPUT! ENTER AGAIN :";
    cin>>n;
 }
 for(int i=1;i<=n;i++)
 {
    cout<<"\n\nENTER YOUR MARKS IN "<<i<<" APPLIED PHYSICS LAB  PROJECT :";
    cin>>marks;
    while(marks<0||marks>7.5)
    {
      cout<<"INAVLID MARKS ENTER FOR "<<i<<" APPLIED PHYSICS LAB  PROJECT! ENTER AGAIN:";
      cin>>marks;
    }
    project_total+=7.5;
    project_obtained+=marks;
 }
 cout<<"\n\nIS YOUR APPLIED PHYSICS LAB  MID TERM PAPER HELD?(Y/N) ";
 cin>>ch;
 if(ch=='y'||ch=='Y')
 {
   cout<<"ENTER YOUR MARKS IN APPLIED PHYSICS LAB  MIDTERM PAPER:";
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
 cout<<"\n\nIS YOUR APPLIED PHYSICS LAB FINAL PAPER HELD?(Y/N) ";
 cin>>ch;
 if(ch=='y'||ch=='Y')
 {
   cout<<"ENTER YOUR MARKS IN APPLIED PHYSICS LAB FINAL PAPER:";
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

percent=((labpractical_obtained+project_obtained+mid_obtained+final_obtained)/(labpractical_total+project_total+mid_total+final_total))*100;
cout<<percent<<"%";
phylab_gpa=grade_points(percent)*1;
return phylab_gpa;
}
double gpa_calculator()
{
    double c,f,fl,e,i,il,ap,apl,gpa;
    c=calculus_gp();
    f=fop_gp();
    fl=foplab_gp();
    e=english_gp();
    i=itc_gp();
    il=itclab_gp();
    ap=physics_gp();
    apl=phylab_gp();
    gpa=(c+f+fl+e+i+il+ap+apl)/16;
  return gpa;
}
int main()
{ double gpa;
    gpa=gpa_calculator();
cout<<endl<<"YOUR GPA IS :"<<gpa;

}
