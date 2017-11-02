//
//  main.cpp
//  LeetCode
//
//  Created by ksgin on 2017/6/21.
//  Copyright © 2017年 ksgin. All rights reserved.
//

#include "MinimumASCIIDeleteSumForTwoStrings.h"
#include <iostream>

using namespace std;

int main() {

//    TreeNode* root = new TreeNode(5);
//    root->left = new TreeNode(3);
//    root->right = new TreeNode(6);
//    root->left->left = new TreeNode(2);
//    root->left->right = new TreeNode(4);
//    root->right->right = new TreeNode(7);
//
//    PrintBinaryTree pbt;
//    pbt.printTree(root);

//    FindLargestValueInEachTreeRow findLargestValueInEachTreeRow;
//    findLargestValueInEachTreeRow.largestValues(root);
//
//    BaseballGame bl;
//    bl.calPoints(std::vector<std::string>{"5","-2","4","C","D","9","+","+"});


//    std::vector<int> A{304,-406,-382,27,165,-236,310,329,-81,29,141,-183,291,-483,-479,-307,-467,-21,367,313,-42,-446,-307,-76,-318,338,20,74,469,111,53,-293,-91,-158,-260,-188,-41,-411,-61,113,129,-145,-22,442,295,-350,184,197,-201,437,-497,-464,350,425,-115,-433,-217,-240,-298,353,-18,133,-374,-180,24,346,101,-394,144,-32,157,68,235,-189,251,-469,-70,380,-171,-297,466,168,-469,39,403,-257,102,199,-147,23,-70,-457,248,481,-3,297,-95,445,237,-412,-257,-224,173,-86,293,359,306,-98,392,-445,314,-62,292,-34,362,22,-160,297,-11,236,75,398,-220,-207,-160,3,-198,184,-300,252,372,203,408,-326,51,451,309,-66,76,-420,-172,-14,-150,236,2,-318,460,53,102,-418,-448,214,312,65,244,-111,302,-343,475,303,47,78,-412,-62,32,-223,406,-389,-435,66,-411,49,165,-27,-387,117,-123,-315,397,257,-73,-441,84,70,-389,-378,-53,177,-233,338,-305,128,-411,120,-365,-171,-183,393,416,-444,-391,-338,-177,402,-439,-325,-439,-433,194,144,-267,-454,-421,309,251,314,33,80,-196,-113,12,-239,315,45,-363,224,249,202,-250,409,-199,57,-214,103,207,-383,-387,-134,270,-469,-356,310,-106,303,374,-412,374,54,119,345,182,412,491,-304,-61,-6,-411,56,100,420,442,465,481,-142,-70,226,255,-70,414,-252,421,309,72,86,-319,-307,262,27,294,-214,438,-375,291,-255,-419,180,91,59,209,-253,248,-205,86,-139,16,-222,-51,4,-66,55,62,-452,322,138,-274,146,-38,-301,102,253,292,241,246,468,232,232,-420,-315,76,-175,358,469,-390,-171,367,-390,-165,452,86,-442,150,224,66,-420,110,-36,323,168,116,227,445,130,199,114,334,-226,421,-183,-210,495,106,332,278,263,97,-60,-304,-27,-44,-320,-407,-1,-93,205,-255,-65,-205,350,448,355,-70,-131,-140,-263,207,-398,418,364,-149,60,-476,-224,-406,175,174,-272,277,57,333,-498,300,382,-99,-57,312,-406,473,-411,241,-148,229,-234,-498,-161,158,70,107,440,251,166,-249,326,202,219,-103,-230,-384,-222,401,-471,-104,-256,-204,-302,-239,496,423,-152,-52,84,446,157,164,310,490,82,185,-41,149,266,57,330,45,-194,-326,172,-361,-381,-467,104,50,-254,-471,-486,432,450,-187,-105,-91,315,312,-269,-270,163,164,-346,138,84,360,-8,-239,-102,-394,-371,251,379,422,-109,52,12,-31,386,149,239,220,47,-54,-208,-37,-135,396,-248,-464,382,-262,228,-189,-369,-261,303,-378,-230,-49,450,-293,1,149,-78,-259,59,-325,454,-252,233,479,-154,187,107,-271,-328,-445,-377,-99,-95,411,165,374,-457,-366,-287,486,-439,-201,-49,-359,-222,181,51,371,-459,366,-96,-390,98,164,-161,-17,-130,-345,30,-269,-318,-491,346,-51,321,-152,256,-9,-149,-459,-187,-206,-440,127,-233,28,481,-338,478,308,384,-364,244,-131,495,-183,-325,354,-443,-432,-18,445,225,259,163,-4,-394,-193,291,-443,-471,34,-228,280,-467,-382,-428,-262,198,21,-407,-90,323,369,150,-369,401,-170,-148,-305,-1,172,175,161,-325,-461,259,461,45,3,-449,332,263,363,435,-93,484,-488,-21,187,490,98,477,43,452,497,-495,-107,101,-302,152,-140,-333,346,-174,-292,114,222,-55,-272,-300,-432,-296,313,-159,304,155,121,-173,411,-4,-103,238,-465,58,406,329,398,-195,57,-425,299,-55,-456,-268,379,-443,223,-428,-472,169,-274,45,311,-318,21,135,-388,-93,-315,-57,-166,289,2,-372,-26,436,-461,-93,-249,-239,266,196,-21,-445,104,-102,-94,-22,144,-467,-369,-457,213,-282,87,-28,-69,-297,-164,342,458,416,418,-460,-130,349,142,-407,75,162,-57,441,-381,-152,-1,-293,391,494,133,-289,-358,457,240,-404,419,-120,-1,-81,52,-325,93,165,366,-378,-367,165,-169,223,255,81,155,33,319,-423,174,-481,-476,-99,-52,378,390,21,-8,184,-169,-205,-237,383,172,-244,1,-397,-201,-163,430,-297,476,279,-130,151,252,221,-369,-459,-209,179,456,-207,-266,-139,277,118,141,-418,154,-154,-206,-189,466,70,-10,-28,188,60,-486,125,-196,485,-403,-193,168,36,-396,176,342,-58,-383,-444,117,-139,352,50,345,-471,-384,100,482,-362,-450,32,360,-349,178,-495,145,472,474,-346,-97,-435,284,-15,-367,442,449,-109,-318,184,-316,295,-31,470,-55,8,-268,49,-178,-261,139,-292,-254,271,-225,198,-479,381,-47,-274,-263,-24,375,-334,302,-188,474,-393,18,246,396,385,357,-14,-394,81,-236,-266,172,-127,498,47,-268,-398,-294,402,-150,78,259,499,424,345,-115,471,336,-458,362,386,384,51,433,-11,349,234,291,330,166,358,47,97,-435,-420,284,-119,12,-185,-283,365,-426,326,-274,-317,-209,-268,463,320,189,-259,416,134,-146,-257,128,-99,-476,420,347,4,-500,-43,-102,-314,17,83,-284,260,-326,-475,-468,397,238,-291,86,393,41,-266,-71,191,-237,-9,376,347,137,-325,-408,-214,-90,212,-134,323,71,164,278,299,405,-291,404,460,233,-32};
//
//    ArithmeticSlices arithmeticSlices;
//    arithmeticSlices.numberOfArithmeticSlices(A);

//
//    MapSum ms = MapSum();
//    ms.insert("apple" , 3);
//    cout << ms.sum("ap");
//
//    ms.insert("app", 2);
//    cout << ms.sum("ap");
//
//    vector<vector<int>> grid{{1,1,0,0,0},{1,1,0,0,0},{0,0,0,1,1},{0,0,0,1,1}};
//
//    MaxAreaOfIsland mai;
//    mai.maxAreaOfIsland(grid);
//
//    BinaryNumberWithAlternatingBits bnb;
//    cout << bnb.hasAlternatingBits(9) << endl;
//    cout << bnb.hasAlternatingBits(4) << endl;
//    cout << bnb.hasAlternatingBits(5) << endl;
//    cout << bnb.hasAlternatingBits(10) << endl;
//    cout << bnb.hasAlternatingBits(11) << endl;
//    cout << bnb.hasAlternatingBits(12) << endl;
//    cout << bnb.hasAlternatingBits(22) << endl;
//    cout << bnb.hasAlternatingBits(21) << endl;
//    cout << bnb.hasAlternatingBits(42) << endl;
//    cout << bnb.hasAlternatingBits(85) << endl;

//
//    BeautifulArrangementTwo bat;
//
//    bat.constructArray(4,2);

//
//    vector<int> nums{1 , 2, 3 ,4 ,5};
//
//    MinimumMovesToEqualArrayElementsTwo mme;
//    cout << mme.minMoves2(nums);
//
//    AddDigits ad;
//    ad.addDigits(11);

//    FindAllNumbersDisappearedInAnArray fnda;
//    std::vector<int> nums{2 , 1  , 4  , 3  ,5  , 8 ,9};
//
//    fnda.findDisappearedNumbers(nums);
//
//
//    CountBinarySubstrings cbs;
//    cbs.countBinarySubstrings("00110");

//    SortCharactersByFrequency scb;
//    scb.frequencySort("ccaaaabbbd");


//    vector<vector<int>> s{{1,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
//                          {0,1,0,1,0,0,0,0,0,0,0,0,0,1,0},
//                          {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
//                          {0,1,0,1,0,0,0,1,0,0,0,1,0,0,0},
//                          {0,0,0,0,1,0,0,0,0,0,0,0,1,0,0},
//                          {0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
//                          {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
//                          {0,0,0,1,0,0,0,1,1,0,0,0,0,0,0},
//                          {0,0,0,0,0,0,0,1,1,0,0,0,0,0,0},
//                          {1,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
//                          {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
//                          {0,0,0,1,0,0,0,0,0,0,0,1,0,0,0},
//                          {0,0,0,0,1,0,0,0,0,0,0,0,1,0,0},
//                          {0,1,0,0,0,0,0,0,0,0,0,0,0,1,0},
//                          {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1}};
//
//    FriendCircles fc;
//    fc.findCircleNum(s);

//
//    vector<int> s{1 , 1 , 1 , 0};
//    OneBitAndTwoBitCharacters obatbc;
//    obatbc.isOneBitCharacter(s);

    MinimumASCIIDeleteSumForTwoStrings mu;
    mu.minimumDeleteSum("igijekdtywibepwonjbwykkqmrgmtybwhwjiqudxmnniskqjfbkpcxukrablqmwjndlhblxflgehddrvwfacarwkcpmcfqnajqfxyqwiugztocqzuikamtvmbjrypfqvzqiwooewpzcpwhdejmuahqtukistxgfafrymoaodtluaexucnndlnpeszdfsvfofdylcicrrevjggasrgdhwdgjwcchyanodmzmuqeupnpnsmdkcfszznklqjhjqaboikughrnxxggbfyjriuvdsusvmhiaszicfa",
                                "ikhuivqorirphlzqgcruwirpewbjgrjtugwpnkbrdfufjsmgzzjespzdcdjcoioaqybciofdzbdieegetnogoibbwfielwungehetanktjqjrddkrnsxvdmehaeyrpzxrxkhlepdgpwhgpnaatkzbxbnopecfkxoekcdntjyrmmvppcxcgquhomcsltiqzqzmkloomvfayxhawlyqxnsbyskjtzxiyrsaobbnjpgzmetpqvscyycutdkpjpzfokvi");

    return 0;
}
