#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin>>N;
    vector<int> X;
    for(int i=0; i<N; i++){
        int xi;
        cin>>xi;
        X.push_back(xi);
    }
    int Q;
    vector<int> Y;
    cin>>Q;
    bool found = false;
    for(int i=0; i<Q; i++){
        int y;
        cin>>y;
        Y.push_back(y);
    }
    for(int i=0; i<Q; i++){
        vector<int>::iterator l;
        l = lower_bound(X.begin(),X.end(),Y[i]);
        if(find(X.begin(),X.end(),Y[i]) != X.end())
            cout<<"Yes "<<l-X.begin()+1<<'\n';
        else
            cout<<"No "<<l-X.begin()+1<<'\n';
        //found = false;
    }
    return 0;
}
