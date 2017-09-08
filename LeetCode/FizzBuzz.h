/*
 * File Name:FizzBuzz
 * Author   :ksgin
 * Date     :2017/9/8
 */

#ifndef LEETCODE_FIZZBUZZ_H
#define LEETCODE_FIZZBUZZ_H

#include <vector>
#include <string>

class FizzBuzz {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> ret(0);
        for(int i = 1; i <= n; ++i) {
            if (i % 3 == 0 && i % 5 ==0){
                ret.emplace_back("FizzBuzz");
            } else if (i % 3 == 0){
                ret.emplace_back("Fizz");
            } else if (i % 5 == 0){
                ret.emplace_back("Buzz");
            } else {
                ret.emplace_back(std::to_string(i));
            }
        }
        return ret;
    }
};

#endif //LEETCODE_FIZZBUZZ_H
