/*
 * File   : SortCharactersByFrequency
 * Author : KsGin 
 * Date   : 18/10/2017
 */

#ifndef LEETCODE_SORTCHARACTERSBYFREQUENCY_H
#define LEETCODE_SORTCHARACTERSBYFREQUENCY_H

#include <string>
#include <vector>

class SortCharactersByFrequency {
public:
    std::string frequencySort(std::string s) {
        std::string ss;
        if (s.empty()) return ss;

        std::vector<std::pair<char , int>> counter(0);
        std::vector<char> appeared(0);

        for (char &i : s) {
            std::vector<char>::iterator it;
            if((it = std::find(appeared.begin() , appeared.end() , i)) == std::end(appeared)){
                appeared.push_back(i);
                counter.emplace_back(i, 1);
            } else {
                ++counter[std::distance(appeared.begin() , it)].second;

            }
        }

        std::sort(counter.begin() , counter.end() ,
                  [](std::pair<char , int> a , std::pair<char , int> b){
                      return a.second > b.second;
                  });

        for (auto &p : counter) {
            while (p.second > 0){
                ss.push_back(p.first);
                --p.second;
            }
        }

        return ss;
    }
};

#endif //LEETCODE_SORTCHARACTERSBYFREQUENCY_H
