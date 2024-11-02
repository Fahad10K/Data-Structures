#include <iostream>
using namespace std;
class staff{
    int code;
    char name[60];
    public:
    void in(){
        cout <<"\nEnter code --> ";cin>>code;getchar();
        cout <<"Enter name --> ";fgets(name,sizeof(name),stdin);
    }
    void dis0(){
        cout <<"\nCode --> "<<code<<endl;
        cout<<"Name --> "<<name<<endl;
    }
};
class teacher:public staff{
    char  sub[60],pub[60];
    public:
    void in1(){
        in();
        cout<<"Enter Subject --> ";fgets(sub,sizeof(sub),stdin);
        cout<<"Enter Publication --> ";fgets(pub,sizeof(pub),stdin);
    }
    void dis1(){dis0();
    cout<<"\nSubject --> "<<sub<<endl;
    cout<<"\nPublication --> "<<pub<<endl;
    }
};
class officer:public staff{
    int grade;
    public:
    void in2(){
        in();
        cout<<"Enter Grade --> ";cin>>grade;
    }
    void dis2(){dis0();
    cout<<"\nGrade --> "<<grade<<endl;
    }
};
class typist:public staff{
    int speed;
    public:
    void in3(){
        in();
        cout<<"Enter Speed --> ";cin>>speed;
    }
    void dis3(){dis0();
    cout<<"\nSpeed --> "<<speed<<endl;
    }
};
class wages:public typist{
    int wages;
    public:
    void in4(){in3();cout<<"Enter Daily wages --> ";cin>>wages;
    }
    void dis4(){dis3();
    cout<<"\nDaily wages --> "<<wages;
    }
};
void choose(){
       cout<<"\nChoose your choice\n1) Create\n2) Display\n3) Jump to Main Menu\n";
       cout<<"Enter choice --> "<<endl;
}
int main()
{
   teacher o1[10];officer o2[10];wages o3[10];
    int choice;char cont;
    while(1){int count;begin:
      cout<<"\t\t\t\t<X----INSTITUTE STAFF INFROMATION----X>\n\n";
      cout<<"\t\t\tChoose Category of Information\n";
      cout<<"\t\t\t1)  Teachers\n";
      cout<<"\t\t\t2)  Officer\n";
      cout<<"\t\t\t3)  Typist\n";
      cout<<"\t\t\t4)  Exit\n";
      cout<<"\t\t\tEnter your choice:-"; cin>>choice;
      switch(choice)
      {
          case 1:while(1){again1:
                  cout<<"\n<-- Teacher Database -->\n";choose();
                  cin>>choice;
                  switch(choice){
                      case 1:for(int i=0,count=0;i<10;i++){
                          o1[i].in1();
                          count++;
                          cout<<"Do you want to continue? Y/N --> ";cin>>cont;
                          if(cont=='y'||cont=='Y'){continue;}
                          else{break;}
                          }break;
                      case 2:if(count==0){cout<<"\nDatabase is empty..please enter data...";goto again1;}
                      for(int i=0;i<count;i++){o1[i].dis1();}break;
                      case 3: goto begin;
                      default: cout<<"\nInvalid choice.....";
              }
          }break;
          case 2:while(1)
          {again2:
                  cout<<"\n<-- Officer Database -->\n";choose();
                  cin>>choice;
                  switch(choice){
                      case 1:for(int i=0,count=0;i<10;i++){
                          o2[i].in2();
                          count++;
                          cout<<"Do you want to continue? Y/N --> ";cin>>cont;
                          if(cont=='y'||cont=='Y'){continue;}
                          else{break;}
                          }break;
                      case 2:if(count==0){cout<<"\nDatabase is empty..please enter data...";goto again2;}
                      for(int i=0;i<count;i++){o2[i].dis2();}break;
                      case 3: goto begin;
                      default: cout<<"\nInvalid choice.....";
      }}break;
      case 3:while(1)
          {again3:
                  cout<<"\n<-- Teacher Database -->\n";choose();
                  cin>>choice;
                  switch(choice){
                      case 1:for(int i=0,count=0;i<10;i++){
                          o3[i].in4();
                          count++;
                          cout<<"Do you want to continue? Y/N --> ";cin>>cont;
                          if(cont=='y'||cont=='Y'){continue;}
                          else{break;}
                          }break;
                      case 2:if(count==0){cout<<"\nDatabase is empty..please enter data...";goto again3;}
                      for(int i=0;i<count;i++){o3[i].dis4();}break;
                      case 3: goto begin;
                      default: cout<<"\nInvalid choice.....";
         }}break;
      case 4:goto end;break;
      default:cout<<"Invalid choice......";break;
    }}
      end:
    return 0;
}

