#include<bits/stdc++.h>
using namespace std;

class Radius{
    public:

    int diameter(float x){
        float dia = 2*x;
        cout<<"Diameter Result "<<dia<<endl;
    }

    int circumference(float x){
        float circum = 2*3.1416*x;
        cout<<"Circumference Result ="<<circum<<endl;
    }

    int radi(float x){
        float result = 3.1416*x*x;
        cout<<"Radius Result = "<<result<<endl;
    }

};

int main(){
    Radius myObj;
    float r;
    cout<<"Enter a Radius \n";
    cin>>r;

    myObj.diameter(r);
    myObj.circumference(r);
    myObj.radi(r);

}
