/*
https://hackerrank-challenge-pdfs.s3.amazonaws.com/9906-cpp-maps-English?AWSAccessKeyId=AKIAJ4WZFDFQTZRGO3QA&Expires=1530979145&Signature=8M6Rz22UQSLDK2jKSz01pSCotG4%3D&response-content-disposition=inline%3B%20filename%3Dcpp-maps-English.pdf&response-content-type=application%2Fpdf
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map<string,int> students;
    map<string,int>::iterator itr;
    int Q;
    cin>>Q;
    //stringstream ss;
    for(int i=0; i<Q; i++){
        int a,marks;
        string name;
        cin>>a>>name;
        if(a==1){
            cin>>marks;
            itr = students.find(name);
            if(itr == students.end()){
                students.insert(make_pair(name,marks));
            }
            else{
                students[name] += marks;
            }
        }
        if(a==2){
            students[name] = 0;
        }
        if(a==3){
            itr = students.find(name);
            if(itr != students.end())
                cout<<itr->second<<endl;
            else
                cout<<0<<endl;
        }
    }
    return 0;
}
