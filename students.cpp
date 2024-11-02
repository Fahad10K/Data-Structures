#include <iostream>
using namespace std;
using std:: string;

class Student{
private:
    string name;
    int marks, rollNo;

public:


    // Name getter
    string getName(){
        if(!name.empty())//Checking if name is Null
        return name;
        else{
            cout << "No name given" << endl;
        }
    }
    void setName(string name1){
        name = name1; 
    }


    // Marks getter
    int getMarks(){
        // if(marks != NULL)//Checking if name is Null
        return marks;
        // else{
        //     cout << "No marks given" << endl;
        // }
    }
    void setMarks(int marks1){
        marks = marks1; 
    }


    // Roll no getter
    int getRoll(){
        // if(rollNo != NULL)//Checking if name is Null
        return rollNo;
        // else{
        //     cout << "No rollNo given" << endl;
        // }
    }
    // Roll No Getter
    void setRoll(int roll1){
        rollNo = roll1; 
    }


    //Constructor receives the details and initialises the attributes.
    Student(string name1, int roll1, int marks1){
        name = name1;
        marks = marks1;
        rollNo = roll1;
    }

    void display(){
        cout << "Name: " << name << " Marks: "<< marks << " Roll No: " << rollNo << endl;
    }
};

class Node{
    public:
    // Student s;
    Student* s;
    Node* next;
};
Node** head = NULL;

void insertAtBeg(Student s1){

    Node *node = new Node();
    node->s = &s1;
    cout << "\nNext INseted ";
    node->next = *head;
    cout << "\nNext INseted1 ";
    //Working till here
    *head = node; 
    // node->s = s1;
    cout << "Node Inserted3";
}

void traverse(){
    Node* p = *head;
    while(p!=NULL){
        p->s->display();
        p=p->next;
    }
}

int main(){
    int c=1, n;
    while(c){
        cout << "Press '1' to add students: \nPress '2' to get details: \nPress '3' to get exit\n";
        cin >> n;
        if(n==3){
            c=0;
        }
        
        else if(n==2){
            traverse();
        }
        
        else if(n==1){
            string name = "Asim";
            int marks, roll;
            cout << "Enter Name, marks and roll no:\n";
            // getline(cin, name);
            cin >> marks;
            cin >> roll;
            Student s = Student(name, roll, marks);
            cout << "Hello1";
            insertAtBeg(s);
            cout << "Hello2";
        }
        // switch(n){
        //     case 3: c=0;
        //     break;
        //     case 2: 
        //     traverse();
        //     break;
        //     case 1: {
        //     string name;
        //     int marks, roll;
        //     cout << "Enter Name, marks and roll no:\n";
        //     getline(cin, name);
        //     cin >> marks;
        //     cin >> roll;
        //     cout << 1;
        //     // Student s = Student(name, roll, marks);
        //     // cout << "Hello1";
        //     // insertAtBeg(s);
        //     // cout << "Hello2";
        //     break;
        //     }
        // }
    }
    return 0;
}