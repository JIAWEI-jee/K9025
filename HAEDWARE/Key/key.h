#ifndef __KEY_H__
#define __KEY_H__
#include "HC89F303.h"


extern u8 calibration_std;
#define KEY_1 	P2_5
#define KEY_2 	P2_6
#define KEY_3 	P3_5



#define KEY_1_PRES 	1	//KEY1按下
#define KEY_2_PRES	2	//KEY2按下
#define KEY_3_PRES	3	//KEY3按下

#define KEY_STATE_0         0       // 按键状态
#define KEY_STATE_1         1
#define KEY_STATE_2         2
#define KEY_STATE_3         3

#define LONG_KEY_TIME       120    //长按时间
#define SINGLE_KEY_TIME     3      // 短按时间

#define N_KEY         0             // 没有案件按下

#define KEY_1_SHORT  4
#define KEY_1_LONG   5


#define LONG_KEY_CALI_TIME  240
#define KEY_CALI2_LONG       6
#define KEY_CALI3_LONG       7

void key_init ( void );
u8 key_scan ( void );

#endif

