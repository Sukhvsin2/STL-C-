/**
 * @file priorityQueue.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Priority queue's first element will be the greatest.
 * @version 0.1
 * @date 2022-05-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include<queue>

using namespace std;

int main(){
    /**
     * @brief this creates the max heap in the memory
     */
    priority_queue<int> max;

    /**
     * @brief this creates the min heap in the memory
     */
    priority_queue<int, vector<int>, greater<int> > min;


    max.push(2);
    max.push(0);
    max.push(1);
    max.push(12);
    max.push(22);

    int size = max.size();
    cout<<"Example of max heap priority queue: ";
    while(size--){
        cout<<max.top()<<" ";
        max.pop();
    }
    cout<<endl;

    min.push(2);
    min.push(0);
    min.push(1);
    min.push(12);
    min.push(22);

    int s = min.size();

    cout<<"Example of min heap priority queue: ";
    while(s--){
        cout<<min.top()<<" ";
        min.pop();
    }
    cout<<endl;
    return 0;
}