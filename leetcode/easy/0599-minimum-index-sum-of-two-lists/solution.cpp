class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> result;
        int min_sum = INT_MAX; 
        
        for (int i = 0; i < list1.size(); i++) {

            for (int j = 0; j < list2.size(); j++) { 
                
                if (list1[i] == list2[j]) {
                    int current_sum = i + j;

                    if (current_sum < min_sum) {
                        min_sum = current_sum;
                        result.clear(); 
                        result.push_back(list1[i]);
                    } 

                    else if (current_sum == min_sum) {
                        result.push_back(list1[i]);
                    }
                }
                
            }
        }
        return result;
    }
};
