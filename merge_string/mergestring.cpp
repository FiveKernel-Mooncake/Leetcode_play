#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string word1, word2;
    cout << "Enter two words: ";
    cin >> word1 >> word2;
    int m = word1.size(),n = word2.size();
    string results;
    results.reserve(m+n);
    int i = 0, j = 0;
    while(i < m || j < n)
    {
        if(i < m)
        {
            results.push_back(word1[i++]);
        }
        if(j < n)
        {
            results.push_back(word2[j++]);
        }
    }
    cout << results;
    return 0;

}