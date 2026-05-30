#include<iostream>
using namespace std;
int DecToBinary(int DecNum){
    int ans = 0, pow = 1;
    while(DecNum > 0){
        int rem = DecNum%2;
        DecNum /= 2;
        ans += (rem * pow);
        pow *= 10; 
    }
    return ans;
}
int main(){
   int n;
   cout<<"Enter Decimal Number : ";
   cin>>n;
   cout<<"Binary form : "<<DecToBinary(n);
   return 0;
}