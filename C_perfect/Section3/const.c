//
//  const.c
//  C_perfect
//
//  Created by 永塚賢二 on 2025/12/08.
//

#include <stdio.h>

int main(void)
{
    int tax = 110;
    int fax = 50000;
    printf("50000円から40000円に値下げします\n");
    tax = 40000;
    printf("FAXの新価格(税込)：%d円\n", fax * tax / 100);
    return 0;
}
