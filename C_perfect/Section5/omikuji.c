//
//  Untitled.swift
//  C_perfect
//
//  Created by 永塚賢二 on 2025/12/09.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    const int DAIKICHI = 1;
    const int CHUKICHI = 2;
    const int KICHI = 3;
//    const int KYO = 4;
    
    printf("あなたの運勢を占います\n");
    srand((unsigned)time(NULL));
    int fortune = rand() % 4 + 1;
    
    switch (fortune) {
    case DAIKICHI:
        printf("あなたの運勢は「大吉」です\n");
        break;
    case CHUKICHI:
        printf("あなたの運勢は「中吉」です\n");
        break;
    case KICHI:
        printf("あなたの運勢は「吉」です\n");
        break;
    default:
        printf("凶\n");
    }
    return 0;
}
