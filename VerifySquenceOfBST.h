#ifndef VERIFYSQUENCEOFBST_H_INCLUDED
#define VERIFYSQUENCEOFBST_H_INCLUDED

#include <vector>

#endif // VERIFYSQUENCEOFBST_H_INCLUDED

using namespace std;

class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        return VerifySequenceOfBST(sequence, 0);
    }

    bool VerifySequenceOfBST(vector<int> sequence, int level){
        int seq_len = sequence.size();
        if (seq_len == 0 && level == 0){
            return false;
        }

        if (seq_len == 0){
            return true;
        }

        int root_value = sequence[seq_len - 1];
        int left_pos = 0;
        while(left_pos < seq_len - 1 && sequence[left_pos] < root_value){
            left_pos++;
        }

        int right_pos = left_pos;
        while(right_pos < seq_len - 1 && sequence[right_pos] > root_value){
            right_pos++;
        }

        if (right_pos != seq_len - 1){
            return false;
        }else{
            vector<int> left_sequence(sequence.begin(), sequence.begin() + left_pos);
            vector<int> right_sequence(sequence.begin() + left_pos, sequence.begin() + seq_len - 1);

            return VerifySequenceOfBST(left_sequence, level + 1) && VerifySequenceOfBST(right_sequence, level + 1);
        }
    }
};
