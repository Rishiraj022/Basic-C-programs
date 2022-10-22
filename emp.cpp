#include<iostream>
using namespace std;

class Employee{

    //access specifier
    public:

    int empNo;
    string empName;
    int tax;
    float empNetSal;
    int bonus;

    void grossPay(){
        float grossPay =  empNetSal + bonus  - tax;
        cout<<" The gross salary of the employee is "<<grossPay<<endl;  
    }    
};

int main(){
    Employee objectEmployees[3];

    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter employee number: "<<endl;
        cin>>objectEmployees[i].empNo;
        cout<<"Enter employee name"<<endl;
        cin>>objectEmployees[i].empName;
        cout<<"Enter employee net salary"<<endl;
        cin>>objectEmployees[i].empNetSal;
        cout<<"Enter employee bonus"<<endl;
        cin>>objectEmployees[i].bonus;
        cout<<"Enter employee tax"<<endl;
        cin>>objectEmployees[i].tax;
    }
    
    for (int i = 0; i < 3 ; i++)
    {
        objectEmployees[i].grossPay();
    }
    
}