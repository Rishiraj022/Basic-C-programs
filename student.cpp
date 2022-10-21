#include<iostream>
using namespace std;

class Student{

    public:

    string studentName;
    int rollNo;
    int mathMarks;
    int scienceMarks;
    int englishMarks;

    void getGrade(){
        int totalMarks = scienceMarks + englishMarks + scienceMarks;
        int avgMarks = totalMarks/3;
        
        if ( avgMarks <= 40 )
        {
            cout<<studentName<<" -- Grade in this exam is c"<<endl;
        }
        else if (avgMarks > 40 && avgMarks <= 70)
        {
            cout<<studentName<<" -- Grade in this exam is B"<<endl;
        }
        else if (avgMarks >70 && avgMarks <= 100 )
        {
            cout<<studentName<<" -- Grade in this exam is A"<<endl;
        }
        else
        {
            cout<<"Please enter marks within the limit of 0 to 100 only"<<endl;
        }    
    }
};

int main(){

    int n;
    cout<<"How many students"<<endl;
    cin>>n;
    Student objectStudents[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter student name"<<endl;
        cin>>objectStudents[i].studentName;
        cout<<"Enter roll number"<<endl;
        cin>>objectStudents[i].rollNo;
        cout<<"Enter science marks"<<endl;
        cin>>objectStudents[i].scienceMarks;
        cout<<"Enter maths marks"<<endl;
        cin>>objectStudents[i].mathMarks;
        cout<<"Enter english marks"<<endl;
        cin>>objectStudents[i].englishMarks;
    }

    for (int i = 0; i < n; i++)
    {
        objectStudents[i].getGrade();
    }
    
    
    return 0;
}