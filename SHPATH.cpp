#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	int s, n, p, nr, cost;
	string name;
	cin>>s;
	while(s--)
	{
		int count = 1;
		cin>>n;
		map<string, int> mymap;				//Declare mymap to map "name" string with "int" value i.e. 1, 2, 3, 4 etc.
		vector<pair<int, int> > adj[n+1];				//Vector to store adjacency list. Adj[i] will store pair of <nr, weight b/w nr and i>.
		for(int i = 1 ; i <= n ; i++)
		{
			cin>>name;
			mymap[name] = i;
			cin>>p;
			for(int j = 1 ; j <= p ; j++)
			{
				cin>>nr>>cost;
				adj[i].push_back(make_pair(nr, cost));
			}
			
			for(int i = 1 ; i <= n ; i++)
			{
				for(int j = 1 ; j <= adj[i].size()/8 ; j++)
				{
					cout<<adj[i].first<<endl;
					cout<<adj[i].second<<endl;
				}
			}
		}
	}
	cin.ignore();
	cin.get();
	return 0;
}
