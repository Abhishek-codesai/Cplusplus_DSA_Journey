#include<iostream>
using namespace std;
int BinaryToDec(int BinNum){
    int ans = 0, pow = 1;
    while(BinNum > 0){
        int rem = BinNum%10;
       BinNum /= 10;
        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}
int main(){
   int n;
   cout<<"Enter Binary form : ";
   cin>>n;
   cout<<"Decimal number : "<<BinaryToDec(n);
   return 0;
}