// find the first and last occurence of key K from sorted array with N elements

#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key>arr[mid]){
            s = mid+1; 
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            //e = mid-1;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s = mid+1; 
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int even[5]={2,6,8,8,12};

    cout<<"First occurence of 8 is at index "<<firstOcc(even,5,8)<<endl;
    cout<<"Last occurence of 8 is at index "<<lastOcc(even,5,8)<<endl;
    return 0;
}