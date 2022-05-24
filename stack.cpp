/**
 * @file stack.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Stack follows LIFO format : Last in First Out
 * @version 0.1
 * @date 2022-05-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> names;
    names.push("Name 1");
    names.push("Name 2");
    names.push("Name 3");

    cout<<"Top of the stack top(): "<<names.top()<<endl;

    names.pop();
    cout<<"Top of the stack after pop() top(): "<<names.top()<<endl;

    return 0;
}