//Program for a Menu-driven Calculator (C++ Project)
#include <iostream>

using namespace std;

int main() {
    cout<<"=================Menu-driven Calculator================="<<endl;
    cout<<endl;
    long long a,b;
    int operation;
    int Continue;
    while(Continue!=0) {
        cout<<"Enter two numbers : ";
        cin>>a>>b;
        cout<<"Enter the following : "<<endl;
        cout<<"(Enter 1 for Add, 2 for Sub, 3 for Mul, 4 for Div) : ";
        cin>>operation;

        switch(operation) {
            case 1 : cout<<"Result is : "<<a+b<<endl;
                    break;
            case 2 : cout<<"Result is : "<<a-b<<endl;
                    break;
            case 3 : cout<<"Result is : "<<a*b<<endl;
                    break;
            case 4 : cout<<"Result is : "<<(float)a/b<<endl;
                    break;
        }
        cout<<"Want to continue (1/0) : ";
        cin>>Continue;
    }
    cout<<"Calculator Terminated !"<<endl;
    cout<<"Thank You"<<endl;

    return 0;
}