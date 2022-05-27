/**
 * @file set.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Set only contains unique elements in a sorted order but can't be modified
 * afterwards.
 * @version 0.1
 * @date 2022-05-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;

    s.insert(10);
    s.insert(2);
    s.insert(10);
    s.insert(11);
    s.insert(0);
    s.insert(-10);

    cout<<"Printing set: ";
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    s.erase(10);
    cout<<"Printing set after erasing 10 from the set: ";
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout<<"Printing set after erasing 2nd element from the set: ";
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"count(-10) returns bool value if it's in set or not: "<<s.count(-10)<<endl;

    /**
     * @brief returns back the iterator
     * iterator will have refrence of that element
     */
    set<int>::iterator it2 = s.find(-10);
    cout<<"find(-10) returns iterator value if it's in set or not: "<<*it2<<endl;

    return 0;
}