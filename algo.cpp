#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
  vector<int> v;
  v.push_back(-100);
  
  v.push_back(0);
  v.push_back(1);
  v.push_back(10);

  v.push_back(90);
  v.push_back(111);
  cout<<"list: ";
  for(int i:v){
	cout<<i<<" ";
  }
  cout<<endl;
  cout<<"Using binary_search(start, end, key) for 90: "<<binary_search(v.begin(), v.end(), 90)<<endl;
  
  cout<<endl;
  cout<<"Lower Bound: "<<lower_bound(v.begin(), v.end(), 10)-v.begin()<<endl;

  cout<<"Upper Bound: "<<upper_bound(v.begin(), v.end(), 10)-v.begin()<<endl;

  cout<<endl;
  cout<<"Max(l, u): "<<lower_bound(v.begin(), v.end(), 10)-v.begin()<<endl;

  string name = "Sukhvinder Singh";
  cout<<"String: "<<name<<endl;
  reverse(name.begin(), name.end());
  cout<<"Reverse: "<<name<<endl;
  return 0;
}
