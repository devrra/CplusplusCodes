/*
https://hackerrank-challenge-pdfs.s3.amazonaws.com/9515-cpp-sets-English?AWSAccessKeyId=AKIAJ4WZFDFQTZRGO3QA&Expires=1530968987&Signature=Rfgwd47O76mMEfDZFXMZCAkGs3M%3D&response-content-disposition=inline%3B%20filename%3Dcpp-sets-English.pdf&response-content-type=application%2Fpdf
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int Q;
    cin>>Q;
    set<int> s;
    for(int i=0; i<Q; i++){
        int action, value;
        cin>>action>>value;
        if(action == 1){
            s.insert(value);
        }
        if(action == 2){
            set<int> :: iterator itr = s.find(value);
            if(itr != s.end()){
                s.erase(value);
            }
        }
        if(action == 3){
            set<int> :: iterator itr = s.find(value);
            if(itr != s.end()){
                cout<<"Yes"<<'\n';
            }
            else
                cout<<"No"<<'\n';
            
        }
    }
    return 0;
}
