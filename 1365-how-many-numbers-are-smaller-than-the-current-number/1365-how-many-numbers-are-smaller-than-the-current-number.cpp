class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& arr) {
        long long n = arr.size();
        vector<int> arr1(n);

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j] ){
              
                count = count + 1;
                arr1[i]=count ;
            }
            else if(arr[i]==arr[j]){
                arr1[i]=count;
            }
            
        }

    }


    return arr1;

    }
};