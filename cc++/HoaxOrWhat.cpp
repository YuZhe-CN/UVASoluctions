/*
 * @Author: YuZhe-CN zhilinlicn@gmail.com
 * @Date: 2022-07-23 17:31:22
 * @LastEditors: YuZhe-CN zhilinlicn@gmail.com
 * @LastEditTime: 2022-07-23 18:00:57
 * @FilePath: /CPUPV/cc++/HoaxOrWhat.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <set>
#include <functional>
#include <cstdio>

using std::multiset;
using std::greater;
using std::getline;

int main() {

    int days = 0;

    while (scanf("%d", &days) == 1)
    {   
        if(days == 0) break;
        int numBills = 0;
        int costPromotion = 0;
        multiset<int, greater<int>> bills = multiset<int, greater<int>>();

        for(int day = 0; day < days; ++day) {
            scanf("%d", &numBills);

            for(int i = 0; i < numBills; ++i) {
                int amount = 0;
                scanf("%d", &amount);
                bills.insert(amount);
            }

            int upper = *(bills.begin());
            int lower = *(--bills.end());

            bills.erase(--bills.end());
            bills.erase(bills.begin());

            costPromotion += upper - lower;
        }
        
        printf("%d\n", costPromotion);
    }
    
    return 0;
}