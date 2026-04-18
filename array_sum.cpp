#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,434,5,4,65};
    int sum = 543;
    for(int i=0; i<5; i++){
        sum = sum + arr[i];
    }
    cout<<"sum = "<<sum;

}