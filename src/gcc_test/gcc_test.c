/**
 * @file gcc_test.c
 * @author Chimipupu(https://github.com/Chimipupu)
 * @brief GCCのテスト for Linux (Raspberry Pi Zero 2 W)
 * @version 0.1
 * @date 2025-11-15
 * 
 * @copyright Copyright (c) 2025 Chimipupu All Rights Reserved.
 * 
 */

#include <stdio.h>
#include <stdint.h>
#include <unistd.h>

int main(void)
{
    uint8_t i;

    for (i = 0; i < 5; i++)
    {
        printf("Raspberry Pi Zero 2 W, GCC Test by Chimipupu(https://github.com/Chimipupu)\n");
        sleep(1);
    }

    return 0;
}