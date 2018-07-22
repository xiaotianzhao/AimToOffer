#ifndef REPLACE_SPACE_H_INCLUDED
#define REPLACE_SPACE_H_INCLUDED



#endif // REPLACE_SPACE_H_INCLUDED

class Solution {
public:
	void replaceSpace(char *str,int length) {
        int space_count = 0;
        for(int i = 0; i < length; i++){
            if (str[i] == ' '){
                space_count++;
            }
        }

        int j = length + 2 * space_count - 1;
        for (int i = length - 1; i >= 0; i--){
            if (str[i] == ' '){
                str[j--] = '0';
                str[j--] = '2';
                str[j--] = '%';
            }else{
                str[j--] = str[i];
            }
        }
	}
};
