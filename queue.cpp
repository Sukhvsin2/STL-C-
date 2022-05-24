/**
 * @file queue.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Queue follows FIFO - First in first out 
 * @version 0.1
 * @date 2022-05-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;
    q.push("Name 1");
    q.push("Name 2");
    q.push("Name 3");
    q.push("Name 4");

    cout<<"Front elem in Queue front(): "<<q.front()<<endl;
    cout<<"Last elem in the queue back(): "<<q.back()<<endl;
    cout<<"Size of the queue size(): "<<q.size()<<endl;

    return 0;
}