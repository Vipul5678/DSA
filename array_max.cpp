 #include <iostream> 
using namespace std; 
int main()
{
    int arr[4] = {21,324,432,344};
    int max = arr[0];
    for(int i =1; i<4; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max = "<<max;
}