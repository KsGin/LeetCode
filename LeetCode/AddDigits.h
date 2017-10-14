/*
 * File   : AddDigits
 * Author : KsGin 
 * Date   : 2017/10/14
 */

#ifndef LEETCODE_ADDDIGITS_H
#define LEETCODE_ADDDIGITS_H

class AddDigits {
public:
    int addDigits(int num) {
        if(num <= 9) return num;
        int sum = 0;
        while (num / 10){
            sum += num % 10;
            num /= 10;
        }
        sum += num % 10;
        return addDigits(sum);
    }
};
#endif //LEETCODE_ADDDIGITS_H
