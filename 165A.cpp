    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
    int n;
    cin >> n;
    int arrx[201], arry[201];
    bool left, right, up, down;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
        cin >> arrx[i] >> arry[i];

    for (int i = 0; i < n; ++i)
    {
        left = false, right = false, up = false, down = false;
        for (int j = 0; j < n; ++j)
        {
            if (arrx[j] < arrx[i] && arry[i] == arry[j])
                left = true;
            else if (arrx[j] > arrx[i] && arry[i] == arry[j])
                right = true;
            else if (arrx[j] == arrx[i] && arry[i] > arry[j])
                down = true;
            else if (arrx[j] == arrx[i] && arry[i] < arry[j])
                up = true;
        }
        if (left && right && up && down)
            ++cnt;
    }
    cout << cnt << endl;
}