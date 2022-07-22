/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-07-22 16:38:15
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-07-22 17:10:35
 * @FilePath: /CPUPV/addAll.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <functional>

using std::priority_queue;
using std::vector;
using std::greater;

int main() {
    
    int numElements = 0;
    
    while (scanf("%d", &numElements) == 1)
    {
        //printf("%d\n", numElements);
        if(numElements == 0) continue;

        priority_queue<int, vector<int>, greater<int>> cola;
        int num = 0;

        for(int i = 0; i < numElements; ++i) {
            
            scanf("%d", &num);
            //printf("%d\n", num);
            cola.push(num);
        }

        int cost = 0;
        
        int ite = 1;
        while(!cola.empty()) {
            int first = cola.top();
            cola.pop();
            int second = cola.top();
            cola.pop();

            int result = first + second;
            cola.push(result);
            cost += result;

            if(++ite == numElements) break;
        }
        
        printf("%d\n", cost);
    }
    
    return 0;
}