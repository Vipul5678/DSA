#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1,2,1,3,1,4};
    int key = 1;
    int count = 0;
    for(int i=0; i<6; i++){
        if(arr[i] == key){
            count++;
        }
    }
    cout<<"Frequency : "<<count;
    return 0;
}