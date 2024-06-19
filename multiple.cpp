#include<bits/stdc++.h>
using namespace std;

class Brand{
    public:
    string name;
    int manpower,num_of_car;
};

int main(){
    Brand ob1,ob2;
    ob1.name = "Toyota";
    ob1.manpower = 1000;
    ob1.num_of_car = 500;

    ob2.name = "Corola";
    ob2.manpower = 2000;
    ob2.num_of_car = 300;

    Brand *ob3 = new Brand();

    ob3->name = "Suzuki";
    ob3->manpower = 400;
    ob3->num_of_car = 250;

    cout<<"Object one Details"<<endl;
    cout<<ob1.name<<endl;
    cout<<ob1.num_of_car<<endl;
    cout<<ob1.manpower<<endl;

    cout<<"Object Two Details"<<endl;
    cout<<ob2.name<<endl;
    cout<<ob2.num_of_car<<endl;
    cout<<ob2.manpower<<endl;

    cout<<"Object Three Details"<<endl;
    cout<<ob3->name<<endl;
    cout<<ob3->num_of_car<<endl;
    cout<<ob3->manpower<<endl;

}