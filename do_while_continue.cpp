#include <iostream>
using namespace std;
int main()
{
    int i=1;
    do
    {
        if (i==3){
            i++;
            continue;
        }
        cout<<i<<" ";
        i++;
    } while (i<=12);
    
}