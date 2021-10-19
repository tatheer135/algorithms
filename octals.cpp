#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int sum=0, carry=0, d=0, m = 1;
    while(a || b || carry) {
        d=0;
        d=carry+(a%10)+(b%10);
        a/=10;b/=10;
        if(d>7) {
            carry=1;
            d=d%8;
        } else {
            carry = 0;
        }
        sum += d*m;
        m *= 10;
    }
   cout<<sum;

}