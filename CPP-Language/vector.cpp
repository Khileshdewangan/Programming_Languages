#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ;
    v.pop_back();
    v.push_back(55);
    cout<<v.size()<<" khilesh" <<endl;

    // vector<int> ::iterator kjhi = v.begin();
    for(vector <int> :: iterator khi = v.begin(); khi != v.end();khi++ ){

    cout<<*khi<<endl; 
    }

    v.clear();
    cout<<v.empty()<<endl;
    cout<<" khilesh" ;
}