/*
https://hackerrank-challenge-pdfs.s3.amazonaws.com/32958-the-hurdle-race-English?AWSAccessKeyId=AKIAJ4WZFDFQTZRGO3QA&Expires=1531387531&Signature=7qsDRTZbRPBMP5Bm0Fsb70hWPTg%3D&response-content-disposition=inline%3B%20filename%3Dthe-hurdle-race-English.pdf&response-content-type=application%2Fpdf
*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the hurdleRace function below.
int hurdleRace(int k, deque<int> height) {
    int hMax;
    //deque<int>:: iterator beg = height.begin();
    hMax = height[0];
    if(hMax-k>0)
        return hMax-k;
    return 0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string height_temp_temp;
    getline(cin, height_temp_temp);

    vector<string> height_temp = split_string(height_temp_temp);

    deque<int> height(n);
    int temp = 0;
    
    for (int i = 0; i < n; i++) {
        int height_item = stoi(height_temp[i]);
        if(height_item>temp)
        {
            height.push_front(height_item);
            temp = height_item;
        }
        else
            height.push_back(height_item);
        //height[i] = height_item;
    }

    int result = hurdleRace(k, height);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
