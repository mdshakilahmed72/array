#include<bits/stdc++.h>
using namespace std;
class Sum{
    public:
    int num1,num2;
    void jog(){
        int res = num1 +num2;
        cout<<res;
    }

};
int main(){
    Sum obj;

    obj.num1 = 20;
    obj.num2 = 30;

    obj.jog();
}