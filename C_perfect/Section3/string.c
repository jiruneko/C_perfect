//
//  string.c
//  C_perfect
//
//  Created by 永塚賢二 on 2025/12/08.
//

#include <stdio.h>

typedef char String[1024];

int main(void)
{
    String monsterName = "ドラゴン";
    printf("敵は%s\n", monsterName);
    return 0;
}
