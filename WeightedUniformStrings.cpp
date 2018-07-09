/*
https://hackerrank-challenge-pdfs.s3.amazonaws.com/32212-weighted-uniform-string-English?AWSAccessKeyId=AKIAJ4WZFDFQTZRGO3QA&Expires=1531156777&Signature=%2BQdWkMjFObMdmv3PuPEsDPJhaqk%3D&response-content-disposition=inline%3B%20filename%3Dweighted-uniform-string-English.pdf&response-content-type=application%2Fpdf
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the weightedUniformStrings function below.

struct Vector{
    int weight;
    int count;
};

vector<string> weightedUniformStrings(string s, vector<int> queries) {
    stringstream str(s);
    set<int> well;
    char a, before_a='A';
    vector<string> answer;
    int count = 1;
    while(str>>a){
        if(a==before_a)
            count++;
        else
            count = 1;
        well.insert(count*((int)a-96));
        before_a = a;
    }
    
    for(int i=0; i<queries.size(); i++){
        //cout<<search(well,queries[i])<<'\n';
        if(well.find(queries[i])!=well.end())
            answer.push_back("Yes");
        else
            answer.push_back("No");
    }
    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
