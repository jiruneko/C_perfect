//
//  Untitled.swift
//  C_perfect
//
//  Created by 永塚賢二 on 2025/12/09.
//

#include <stdio.h>

int main(void)
{
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            printf("%2d ", i * j);
        }
        printf("\n");
    }
    return 0;
}
