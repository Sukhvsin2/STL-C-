#include<iostream>
#include<array>     //  STL library

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};    // basic predefined array 

    array<int, 5> a = {1,2,3,4,5};  // STL based array
    int size = a.size();
    cout<<"STL Size(): ";
    while(size--){
        cout<<a[size]<<" ";
    }
    cout<<endl;

    cout<<"Element STL at(2): "<<a.at(2)<<endl;
    cout<<"STL empty(): "<<a.empty()<<endl;

    cout<<"Front() STL: "<<a.front()<<endl;
    cout<<"Back() STL: "<<a.back()<<endl;

    return 0;
}