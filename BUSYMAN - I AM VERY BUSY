#include <iostream>
#include <algorithm>
using namespace std;

struct act{
int starting, ending;
}arr[100000];


bool func(act a, act b)
{
    if(a.ending < b.ending)
        return true;
    if(a.ending == b.ending)
        return (a.starting < b.starting);
    return false;
}


int main()
{
    int t, n, i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 0 ; i < n ; i++)
            cin>>arr[i].starting>>arr[i].ending;
        sort(arr, arr + n, func);
        int endtime = arr[0].ending, counter = 1;
        for(i = 1 ; i < n ; i++)
        {
            if(endtime <= arr[i].starting)
            {
                counter++;
                endtime = arr[i].ending;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
