/*
https://hackerrank-challenge-pdfs.s3.amazonaws.com/1308-utopian-tree-English?AWSAccessKeyId=AKIAJ4WZFDFQTZRGO3QA&Expires=1531387289&Signature=cIJ41CO9M19kLBXkL%2Fws6XLkdEU%3D&response-content-disposition=inline%3B%20filename%3Dutopian-tree-English.pdf&response-content-type=application%2Fpdf
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.
map<int,int> cache;
int utopianTree(int n){
    if(cache[n]!=0)
        return cache[n];
    if(n%2==0)
        cache[n] = utopianTree(n-1)+1;
    else
        cache[n] = utopianTree(n-1)*2;
    return cache[n];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    cache[0]++;
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = utopianTree(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
