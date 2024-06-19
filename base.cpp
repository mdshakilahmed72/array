#include<bits/stdc++.h>
using namespace std;
class fruit{
    public:
    string name;
    string color;

};

int main(){
    fruit apple;
    //pointer object Create
    fruit *orange = new fruit();

    apple.name = "Md Shakil Ahmed";
    apple.color = "Green";
    orange->name = "Hello World";
    orange->color = "Orange";

    cout<<apple.name<<" "<<apple.color<<endl;
    cout<<orange->name<<" "<<orange->color;
}