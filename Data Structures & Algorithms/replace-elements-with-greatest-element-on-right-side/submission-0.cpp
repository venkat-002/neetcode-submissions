class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int var = max(-1, arr[n-1]);
        arr[n-1] =-1;
        for(int i = n-2;i>=0;i--){
            int temp  = var;
            var = max(arr[i],var);
            arr[i] = temp;
        }
        return arr;
    }
};