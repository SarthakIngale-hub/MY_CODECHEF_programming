class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i = left; i <= right; i++){
            int digit = 1;
            int temp = i;
            bool flag = true;
            
            while(temp >= 0){
                if(digit == 0 || i % digit != 0){
                    flag = false;
                    break;
                }

                if(temp == 0) {
                    break;
                }
                
                digit = temp % 10;
                temp = temp / 10;
            }
            
            if(flag == true){
                result.push_back(i);
            }
        }
        return result;
    }
};
