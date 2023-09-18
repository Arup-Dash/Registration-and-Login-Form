#include<iostream>
#include<fstream>
using namespace std;

class temp{
    string userName,Email,password;
    fstream file;
    public:
    void login();
    void signUP();
    void forgot();
}obj;
int main(){
    char choice;
    cout<<"\n1- Login";
    cout<<"\n2- Sign-up";
    cout<<"\n3- Forgot-Password";
    cout<<"\n4- Exit";

    cout<<"\nEnter Your choice :: ";
    cin>>choice;

    switch (choice)
    {
    case '1':
        
    break;
    case '2':
        
    break;
    case '3':
        
    break;
    case '4':
        
    break;
    
    default:
        cout<<"Invalid Selection...!";
        break;
    }
    return 0;
}