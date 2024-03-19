#include<iostream>
#include<vector>

using namespace std;

int binarySearch(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for (int i = 0; i < n; i++) cin>>nums[i];
    int start=0,end=n-1,target;
    cin>>target;
    // int index=-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]>target)
            start =mid+1;
        else
            end =mid-1;
    }

    // if not found index
    return -1;
    
}

int main()
{
    // binarySearch();
}
