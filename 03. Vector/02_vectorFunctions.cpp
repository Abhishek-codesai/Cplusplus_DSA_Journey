#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec = {1,2,3};
    cout<<"Size = "<<vec.size()<<endl;
    vec.push_back(12);
    cout<<"Size after push back = "<<vec.size()<<endl;
    vec.pop_back(); //Last value gets deleted
    cout<<"Size after pop back = "<<vec.size()<<endl;
    cout<<"Front value = "<<vec.front()<<endl;
    cout<<"Last value = "<<vec.back()<<endl;
    cout<<"Value at index 2 : "<<vec.at(2)<<endl;
    return 0;
}