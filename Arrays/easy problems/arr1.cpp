#include <bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &arr, int n) //time complexity ->O(n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            
        }
    }
    return largest;
}
int optimiseArray(vector<int>&nums){ //time complexity ->O(n)
    int largest =nums[0];
    for(int i=1;i<=nums.size();i++){
        if(nums[i]>largest){
            largest=nums[i];
        }
    }
    return largest;
};
int main()
{
    vector<int> arr = {3, 3, 6, 1};
    vector<int> nums= {5, 2, 8, 9};
    int ans = largestElement(arr, arr.size());
    int ans2= optimiseArray(nums);
    cout << "Largest element in the array is : " << ans2 << endl;
    cout << "Largest element in the array is : " << ans << endl;
    return 0;
}

//output the largest element 