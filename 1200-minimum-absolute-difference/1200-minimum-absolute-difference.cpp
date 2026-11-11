class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int mini = INT_MAX;
        for(int i = 0 ; i+1 < arr.size() ; i++) mini = min(mini,arr[i+1]-arr[i]);
        vector<vector<int>> answer;
        for(int i = 0 ; i+1 < arr.size() ; i++)
        if( arr[i+1] - arr[i] == mini ) answer.push_back({arr[i] , arr[i+1]});
        return answer;

    }
};