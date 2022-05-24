/**
 * @file list.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Doubly Linkedlist can be inserted from front, back and pop from both side.
 * @version 0.1
 * @date 2022-05-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include <list>


using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_back(23);
    l.push_front(90);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"after deleting end(): "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}