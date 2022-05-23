/**
 * @file vector.cpp
 * @author Sukhvinder Singh (sukhvsingh.me)
 * @brief Vector is a dynamic array which double it's size 
 * when the size is at max and insert your data.
 * How it works?
 * It creates a new array of the double size when the old array is full
 * and copies the data into the new one and deletes the old array.
 * @version 0.1
 * @date 2022-05-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v; // vector with 0 elements

    /**
     * vector<type> name<size, initalizeWith>
     * vector<int> a<5,0>;
      
     */

    /**
     * @brief this is copy function in vector 
     * elements of v will be copy in the vector another
     * 
     * @return ** vector<int> 
     */

    vector<int> another(v);
    
    //--------------------//

    cout<<"STL size(): "<<v.size()<<endl;
    cout<<"STL Capacity(): "<<v.capacity()<<endl<<endl;

    v.push_back(2);
    cout<<"STL size(): "<<v.size()<<endl;
    cout<<"After STL push_back(1) STL Capacity(): "<<v.capacity()<<endl<<endl;
    
    v.push_back(22);
    v.push_back(3);
    cout<<"STL size(): "<<v.size()<<endl;
    cout<<"After STL 2*push_back(1) STL Capacity(): "<<v.capacity()<<endl<<endl;
    
    cout<<"STL front(): "<<v.front()<<endl;
    cout<<"STL back(): "<<v.back()<<endl;
    cout<<endl;
    cout<<"Vector before pop_back(): ";
    int size = v.size();
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    
    cout<<"Vector after pop_back(): ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    /**
     * @brief clear() affects size() and makes it 0
     * 
     */
    cout<<"Vector size() before clear(): "<<v.size()<<endl;
    v.clear();
    cout<<"Vector size() after clear(): "<<v.size()<<endl;

    cout<<endl;

    /**
     * @brief capacity doesn't get affected by the clear()
     * 
     */

    cout<<"Vector capacity() before clear(): "<<v.capacity()<<endl;
    v.clear();
    cout<<"Vector capacity() after clear(): "<<v.capacity()<<endl;
    return 0;
}