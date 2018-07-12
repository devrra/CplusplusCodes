/*
https://hackerrank-challenge-pdfs.s3.amazonaws.com/11904-multi-level-inheritance-cpp-English?AWSAccessKeyId=AKIAJ4WZFDFQTZRGO3QA&Expires=1531392855&Signature=lceeqpZkyNwsW%2FZ42wU%2BrMmnAAE%3D&response-content-disposition=inline%3B%20filename%3Dmulti-level-inheritance-cpp-English.pdf&response-content-type=application%2Fpdf
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
	public:
		void triangle(){
			cout<<"I am a triangle\n";
		}
};

class Isosceles : public Triangle{
  	public:
  		void isosceles(){
    		cout<<"I am an isosceles triangle\n";
  		}
};

//Write your code here.
class Equilateral : public Isosceles{
    public:
        void equilateral(){
            cout<<"I am an equilateral triangle"<<endl;
        }
};

int main(){
  
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}
