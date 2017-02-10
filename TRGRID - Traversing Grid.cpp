#include <iostream>
using namespace std;
int main()
{
    int t, rows, cols;
    unsigned long long int product;
    cin>>t;
    while(t--)
    {
        cin>>rows>>cols;
        if(cols >= rows && rows %2 == 1)
            cout<<"R\n";
        if(cols >= rows && rows %2 == 0)
            cout<<"L\n";
        else if(cols < rows && cols %2 == 1)
            cout<<"D\n";
        else if(cols < rows && cols %2 == 0)
            cout<<"U\n";
    }
    return 0;
}
