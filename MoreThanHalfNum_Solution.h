class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int nums_size = numbers.size();
        if (nums_size == 0){
            return 0;
        }

        int result = numbers[0];
        int cnt = 1;

        for(int i = 1; i < nums_size; i++){
            if (cnt == 0){
                result = numbers[i];
                cnt = 1;
            }else if (numbers[i] == result){
                cnt++;
            }else{
                cnt--;
            }
        }

        // test results
        int result_cnt = 0;
        for(int i = 0 ; i < nums_size; i++){
            if (numbers[i] == result){
                result_cnt++;
            }
        }
        if (result_cnt * 2 > nums_size){
            return result;
        }else{
            return 0;
        }
    }
};
