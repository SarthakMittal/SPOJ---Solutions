#include <iostream>
#include <string>
#include <string.h>
using namespace std;
#define in_range(x, y, h, w) (x < h && y < w && x >= 0 && y >= 0)

string grid[50];
int dist[50][50], h, w;

void dfs(int x, int y, int distance)
{
    int i, j;
    dist[x][y] = distance + 1;
    i = x-1;
    j = y-1;
    if(in_range(i, j, h, w) && grid[i][j] == grid[x][y] + 1 && dist[x][y] + 1 > dist[i][j])
        dfs(i, j, dist[x][y]);

    i = x-1;
    j = y;
    if(in_range(i, j, h, w) && grid[i][j] == grid[x][y] + 1 && dist[x][y] + 1 > dist[i][j])
        dfs(i, j, dist[x][y]);

    i = x-1;
    j = y+1;
    if(in_range(i, j, h, w) && grid[i][j] == grid[x][y] + 1 && dist[x][y] + 1 > dist[i][j])
        dfs(i, j, dist[x][y]);

    i = x;
    j = y-1;
    if(in_range(i, j, h, w) && grid[i][j] == grid[x][y] + 1 && dist[x][y] + 1 > dist[i][j])
        dfs(i, j, dist[x][y]);

    i = x;
    j = y+1;
    if(in_range(i, j, h, w) && grid[i][j] == grid[x][y] + 1 && dist[x][y] + 1 > dist[i][j])
        dfs(i, j, dist[x][y]);

    i = x+1;
    j = y-1;
    if(in_range(i, j, h, w) && grid[i][j] == grid[x][y] + 1 && dist[x][y] + 1 > dist[i][j])
        dfs(i, j, dist[x][y]);

    i = x+1;
    j = y;
    if(in_range(i, j, h, w) && grid[i][j] == grid[x][y] + 1 && dist[x][y] + 1 > dist[i][j])
        dfs(i, j, dist[x][y]);

    i = x+1;
    j = y+1;
    if(in_range(i, j, h, w) && grid[i][j] == grid[x][y] + 1 && dist[x][y] + 1 > dist[i][j])
        dfs(i, j, dist[x][y]);
}


int main()
{
    int i, j, counter = 0;
    while(true)
    {
        ++counter;
        cin>>h>>w;
        if(h == 0 && w == 0)
            break;
            
        for(i = 0 ; i < h ; i++)
            cin>>grid[i];

        memset(dist, 0, sizeof(dist));
        for(i = 0 ; i < h ; i++)
        {
            for(j = 0 ; j < w ; j++)
            {
                if(grid[i][j] == 'A' && dist[i][j] == 0)
                    dfs(i, j, 0);
            }
        }

        int maxx = dist[0][0];
        for(i = 0 ; i < h ; i++)
        {
            for(j = 0 ; j < w ; j++)
            {
                if(dist[i][j] > maxx)
                    maxx = dist[i][j];
            }
        }
        cout<<"Case "<<counter<<": "<<maxx<<endl;
    }
    return 0;
}
