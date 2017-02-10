//Actual Submitted Solution. Properly indented code is given at bottom.
#include<iostream>
using namespace std;main(){int n,l,i,j,a[105][105];cin>>n;while(n--){cin>>l;for(i= 0;i<l;i++)for(j=0;j<=i;j++)cin>>a[i][j];for(i=l-1;i>=1;i--)for(j=0;j<i;j++)a[i-1][j]=a[i-1][j]+max(a[i][j],a[i][j+1]);cout<<a[0][0]<<endl;}}

//Properly Indented Code.

//#include <iostream>
//using namespace std;
//main()
//{
//    int n,l,i,j,a[105][105];
//    cin>>n;
//    while(n--)
//    {
//        cin>>l;
//        for(i = 0 ; i < l ; i++)
//            for(j = 0 ; j <= i ; j++)
//                cin>>a[i][j];
//
//            for(i=l-1;i>=1;i--)
//                for(j=0;j<i;j++)
//                    a[i-1][j]=a[i-1][j]+max(a[i][j],a[i][j+1]);
//
//        cout<<a[0][0]<<endl;
//    }
//}
