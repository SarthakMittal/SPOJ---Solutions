#include <iostream>
#include <algorithm>
using namespace std;
int arr[100002], n;

bool bsearch(int start, int end, int a)
{
    if(end > 0 && start < n && start <= end)
    {
        int mid = (start + end)/2;
        if(arr[mid] == a)
            return true;
        else if(a < arr[mid])
        {
            end = mid-1;
            bsearch(start, end, a);
        }
        else if(a > arr[mid])
        {
            start = mid+1;
            bsearch(start, end, a);
        }
    }
        else
            return false;
}

int main()
{
    int k, i;
    cin>>n>>k;
    for(i = 0 ; i < n ; i++)
        cin>>arr[i];
    sort(arr, arr+n);
    int cnt = 0;
    for(i = 0 ; i < n ; i++)
    {
        if(bsearch(0, n-1, arr[i] + k))
            cnt++;
        if((arr[i] - k) > 0)
        {
            if(bsearch(0, n-1, arr[i] - k))
                cnt++;
        }
    }
    cout<<ceil((float)cnt/2);
    return 0;
}
