/**
 * @file dequeue.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    cout<<"After push_back(1) & push_front(2) : ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"After pop_back(): ";
    d.pop_back();   // same implementation for the pop_front but from the front of the queue
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<endl;
    
    d.push_front(3);
    d.push_front(22);
    d.push_front(4);
    cout<<"Element at(1): "<<d.at(1)<<endl;

    /**
     * @brief erase function deletes the element in range
     * arguments - (start, end)
     * 
     */
    cout<<"Dequeue size before erase(): "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"Dequeue size after erase(): "<<d.size()<<endl;


    cout<<endl;
    return 0;
}