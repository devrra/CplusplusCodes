/*
https://www.hackerrank.com/rest/contests/master/challenges/magic-square-forming/download_pdf?language=English
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) 
{
    vector<vector<int>> m1{
                            {8,3,4},
                            {1,5,9},
                            {6,7,2}};
    vector<vector<int>> m2{
                            {4,9,2},
                            {3,5,7},
                            {8,1,6}};
    vector<vector<int>> m3{
                            {2,7,6},
                            {9,5,1},
                            {4,3,8}};
    vector<vector<int>> m4{
                            {6,1,8},
                            {7,5,3},
                            {2,9,4}};
    vector<vector<int>> m5{
                            {8,1,6},
                            {3,5,7},
                            {4,9,2}};
    vector<vector<int>> m6{
                            {6,7,2},
                            {1,5,9},
                            {8,3,4}};
    vector<vector<int>> m7{
                            {2,9,4},
                            {7,5,3},
                            {6,1,8}};
    vector<vector<int>> m8{
                            {4,3,8},
                            {9,5,1},
                            {2,7,6}};
    vector<vector<vector<int>>> m{m1,m2,m3,m4,m5,m6,m7,m8};
    int changes = 100;
    for(int n=0; n<8; n++)
    {
        int count = 0;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
            {
                if(m[n][i][j]-s[i][j]<0)
                    count += s[i][j]-m[n][i][j];
                else
                    count += m[n][i][j]-s[i][j];
            }
        if(count<changes)
            changes = count;
    }    
    return changes;
}


int main()
{
    vector<vector<int>> s(3);
    for(int i=0; i<3; i++)
    {
        s[i] = vector<int>(3);
        for(int j=0; j<3; j++)
            cin>>s[i][j];
    }    
    int result = formingMagicSquare(s);
    cout << result << "\n";
    return 0;
}
