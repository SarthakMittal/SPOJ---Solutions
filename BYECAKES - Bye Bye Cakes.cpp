#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int arr[8], i, temp;
    memset(arr, 0, sizeof(arr));
    while(true)
    {
        for(i = 0 ; i < 8 ; i++)
            cin>>arr[i];
        if (arr[0] == -1)
            break;
        if(arr[0] == 0 && arr[1] == 0  && arr[2] == 0 && arr[3] == 0)
        {
            cout<<"0 0 0 0"<<endl;
            continue;
        }
        i = 1;
        int a = arr[4], b = arr[5], c = arr[6], d = arr[7];
        
        //Till we have more material than required we mulitply the required material by i. At th moment we have just enough or less material 
        //required for some i we stop and output the difference in what is actually required to what we have.
        
        while(arr[0] > a || arr[1] > b || arr[2] > c || arr[3] > d)
        {
            a = arr[4] * i;
            b = arr[5] * i;
            c = arr[6] * i;
            d = arr[7] * i;
            i++;
        }
        cout<<a-arr[0]<<" "<<b-arr[1]<<" "<<c-arr[2]<<" "<<d-arr[3]<<endl;
    }
    return 0;
}
