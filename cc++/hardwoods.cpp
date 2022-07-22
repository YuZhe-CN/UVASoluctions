/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-07-22 17:38:05
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-07-22 18:06:57
 * @FilePath: /CPUPV/hardwoods.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <map>
#include <string>
#include <cstdio>

using std::map;
using std::string;
using std::getline;
using std::cin;

int main() {

    int numTestCases = 0;
    scanf("%d", &numTestCases);

    //printf("%d\n", numTestCases);

    string line = "";
    getline(cin, line); //nextline character
    getline(cin, line); //blank line

    for(int i = 0; i < numTestCases; ++i) {
        
        double totalTrees = 0;
        map<string, int> trees = map<string, int>();

        while(getline(cin, line) && !line.empty()) {
            
            ++totalTrees;
            ++trees[line];

        }

        //printf("%lf\n", totalTrees);

        for(auto beg = trees.cbegin(); beg != trees.cend(); ++beg) {
            
            double percent = (beg->second/totalTrees)*100;
            printf("%s %0.4lf\n", beg->first.c_str(), percent);

        }
        
        printf("\n");

    }

    return 0;

}