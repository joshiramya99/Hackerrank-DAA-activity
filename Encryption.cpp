#include <bits/stdc++.h>

using namespace std;



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    
    string s;
    cin >> s;
    auto n = s.size();
    int row = round(sqrt(n));
    int column;
    if (row >= sqrt(n)) 
    column = row; 
    else 
    column = row + 1;
    for(int j=0;j<column;++j) {
        for(int i=j; i<n;i+=column)
        fout << s[i];
        fout << ' ';
    }
    return 0;


    fout.close();

    return 0;
}
