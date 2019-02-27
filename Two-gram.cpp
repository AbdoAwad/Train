#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    string temp  ;
    string ans;
    cin >> s;
    int count = 0, cur;
    for (int i = 0; i < n - 2; ++ i)
    {
        cur = 0;
        for (int j = i + 1 ; j < n ; ++ j)
        {
            temp = "";
            string temp2 = "";
            temp += s[i];
            temp += s[i+1];
            temp2 += s[j];
            temp2 += s[j+1];
            if (temp.find(temp2) != -1)
            {
                    ++ cur;
                    // cout << temp << endl;
            }
        }
        if (cur > count)
        {
            count = cur ;
            ans = temp;
        }
    }
    if (ans.size() == 0)
       ans = s.substr(0,2);

    cout << ans << endl;

}