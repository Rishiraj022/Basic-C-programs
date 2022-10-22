#include<iostream>
using namespace std;

class BankAccount{

    //access specifier
    public:

    //data members
    string accountHolder,typeOfAccount;         
    int accountNumber;
    float balance;

    //member function
    void minBalance(){
        (balance <= 999) ? cout<<accountHolder <<"'s account has less than 1000 rupees\n"<<endl : cout<<accountHolder<<"'s account has more than 1000 rupees\n"<<endl; 
    }
};

int main(){
    //3 instance of class 'BankAccount' are created
    BankAccount accounts[3];

    for(int i =0;i<3;i++){                              //initializing value to data members
    cout<<"\nEnter details of bank account"<<endl;

    cout<<"Enter name of account holder"<<endl;
    cin>>accounts[i].accountHolder;
    cout<<"Enter account number"<<endl;
    cin>>accounts[i].accountNumber;
    cout<<"Enter type of account"<<endl;
    cin>>accounts[i].typeOfAccount;
    cout<<"Enter balance"<<endl;
    cin>>accounts[i].balance;
    }

    for (int i = 0; i < 3; i++)
    {
        accounts[i].minBalance();
    }
    
    
    return 0;
}