#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int size = 6;
    int start = 0;
    int end = size-1;
    while(true){
        if(start>end){
            break;
        }
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        start++;
        end--;
    }
    
}

