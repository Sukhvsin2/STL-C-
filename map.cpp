/**
 * @file map.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief It's a structure where everything is stored in key value pair.
 * Every Element is unique and can only point to one and only one key.
 * @version 0.1
 * @date 2022-05-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int, string> m;

    /**
     * @brief [key]  = value or {key, value}
     * it prints sorted
     */

    m[1] = "one";
    m[22] = "two";
    m[3] = "three";
    m[3] = "three1";


    // m.insert( {111, "one one one"}); some errors here!!
    for(auto i:m){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    cout<<endl;

    cout<<"finding count() of 3 -> "<<m.count(3)<<endl;
    return 0;
}