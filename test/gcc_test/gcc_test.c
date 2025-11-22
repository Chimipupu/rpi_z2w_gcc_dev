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
#include <time.h>
#include <sys/time.h>
#include <string.h>

#define TEST_OK     0x00
#define TEST_NG     0xFF

static uint8_t time_test(void);

static uint8_t time_test(void)
{
    uint8_t ret = TEST_NG;
    time_t now;
    struct tm *time_info;
    char time_buffer[80];

    printf("[Time Test]\n");

    // システム時刻時刻取得
    now = time(NULL);

    // ローカル時刻取得
    time_info = localtime(&now);

    // 時刻を表示
    if ((now == (time_t)(-1)) || (time_info == NULL)) {
        printf("[Error]: Failed!  get time\n");
        ret = TEST_NG;
    } else {
        strftime(time_buffer, sizeof(time_buffer), "%Y-%m-%d %H:%M:%S", time_info);
        printf("Time: %s", time_buffer);
        printf("[Infp]: Success! time Test\n");
    }
}

int main(void)
{
    printf("********************************************************************************\n");
    printf("Raspberry Pi Zero 2 W, GCC Test by Chimipupu(https://github.com/Chimipupu)\n");
    printf("--------------------------------------------------------------------------------\n");

    // 時刻テスト
    time_test();
    printf("--------------------------------------------------------------------------------\n");

    printf("********************************************************************************\n");

    return 0;
}