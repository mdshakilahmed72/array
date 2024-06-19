#include<bits/stdc++.h>

using namespace std;

class even_odd{
    public:
    int num1,num2,total,avg;
    void input(){
        cout<<"Enter a two Number = "<<endl;
        cin>>num1>>num2;
    }
    void calculation(){
        total = num1+num2;
        avg = total/2;
        cout<<avg<<endl;
        if(total%2==0){
            cout<<"even"<<endl;
        }else{
            cout<<"Odd"<<endl;
        }

    }

};

int main(){
    even_odd myObj;
    myObj.input();
    myObj.calculation();

}