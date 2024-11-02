#include <iostream>
#include<iomanip>
using namespace std;
class student{
    float cgpa; char name[50];
    public:
    void read(){
        cout<<"ENTER NAME --> ";
        cin>>name;
        cout<<"ENTER CGPA --> ";
        cin>>cgpa;
    }
    void display(){
        cout<<"\nName --> "<<name<<"  CGPA --> "<<fixed<<setprecision(3)<<cgpa;
    }
   // ~student(){cout<<"\n destr";}
};
int main()
{
    int n;
    cout<<"Enter the number of students --> ";cin>>n;
    student *p;
    p = new student[n];
    for(int i=0;i<n;i++){
        p[i].read();
    }
    for(int i=0;i<n;i++){
        p[i].display();
    }
    delete [] p;
    for(int i=0;i<n;i++){
        p[i].display();
    }
    return 0;
}

