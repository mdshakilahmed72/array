#include<bits/stdc++.h>
using namespace std;

class claculate{
    public:
    int choose,num1,num2,result;

    void option(){
        cout<<"Please Choose an Option --";
        cout<<endl<<"Enter 1 for addition : ";
        cout<<endl<<"Enter 2 for Subtraction : ";
        cout<<endl<<"Enter 3 for Multiplication : ";
        cout<<endl<<"Enter 4 for Division : ";
        cout<<endl<<"Enter 0 for Exit : ";
        cout<<endl<<"Please enter your Option :";
        cin>>choose;
    }
    void input(){
        cout<<endl<<"Enter Your Two Number :";
        cin>>num1>>num2;
    }
    void calcu(){
        switch (choose)
        {
        case 1:
             result = num1 +num2;
            cout<<"Addition of "<<num1<<" and "<<num2<<" is -- "<<result<<endl;
            break;
        case 2:
            if(num1>num2){
            result = num1 - num2;
            cout<<"Subtraction of "<<num1<<"and"<<num2<<"is -- "<<result<<endl;
            break;
            }else{
             result = num2 - num1;
            cout<<"Subtraction of "<<num1<<"and"<<num2<<"is -- "<<result<<endl;
            break; 
            }  
            case 3:
             result = num1*num2;
            cout<<"Multiplication of "<<num1<<"and"<<num2<<"is -- "<<result<<endl;
            break;  
            case 4:
             result = num1/num2;
            cout<<"Division of "<<num1<<"and"<<num2<<"is -- "<<result<<endl;
            break;     
        default:
            break;
        }
    }


};

int main(){
    claculate myObj;
    myObj.option();
    myObj.input();
    myObj.calcu();


}