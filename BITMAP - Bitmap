#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
#include <limits.h>
#include <string>
using namespace std;

bool valid(int x, int y, int a, int b)
{
    if(x < a && y < b && x >= 0 && y >= 0)
        return true;
    return false;
}

int main()
{
    int t, n, m, a, b;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int arr[n][m];
        pair<int, int> p[n*m];
        queue<pair<int, int>> q;
        string str[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>str[i];
            for(int j = 0 ; j < m ; j++)
            {
                if(str[i][j] == '1')
                {
                    q.push(make_pair(i, j));
                    arr[i][j] = 0;
                }
                else
                    arr[i][j] = INT_MAX;
            }
        }

        while(!q.empty())
        {
            int x, y;
            x = q.front().first;
            y = q.front().second;
            q.pop();
            if(valid(x, y+1, n, m) && arr[x][y+1] > arr[x][y] + 1)
            {
                arr[x][y+1] = arr[x][y] + 1;
                q.push(make_pair(x, y+1));
            }
            if(valid(x, y-1, n, m) && arr[x][y-1] > arr[x][y] + 1)
            {
                arr[x][y-1] = arr[x][y] + 1;
                q.push(make_pair(x, y-1));
            }
            if(valid(x+1, y, n, m) && arr[x+1][y] > arr[x][y] + 1)
            {
                arr[x+1][y] = arr[x][y] + 1;
                q.push(make_pair(x+1, y));
            }
            if(valid(x-1, y, n, m) && arr[x-1][y] > arr[x][y] + 1)
            {
                arr[x-1][y] = arr[x][y] + 1;
                q.push(make_pair(x-1, y));
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
