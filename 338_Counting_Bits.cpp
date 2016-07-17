class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>ans;
        for(int i = 0;i <= num;i++){
            int count = 0;
            int temp = i;
            while(temp != 0){
                count += temp%2;
                temp /= 2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};