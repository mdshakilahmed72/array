#include<bits/stdc++.h>

using namespace std;

class Subject{
    public:
    int phy,chem,math,biology,english,total;
    void input(){
            cout<<"Enter Your Subject Mark = ";
            cin>>phy>>chem>>math>>biology>>english;
    }

    void total(){
         total = phy+chem+math+biology+english;
        cout<<"Total Mark is a "<<total<<endl; 
    }

    void aver(){
        float aver = total/5;
        cout<<"Average result is a = "<<aver<<endl;
    }

};