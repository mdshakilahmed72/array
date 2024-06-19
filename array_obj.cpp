#include<bits/stdc++.h>

using namespace std;

class name{
    public:
    void mYname(int i){
        cout<<i<<"- Md Shakil Ahmed"<<endl;
    }
};

int main(){

    name hello[50];
    for(int i=0; i<50; i++){
        hello[i].mYname(i);
    }

}