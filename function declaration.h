#pragma once

//函数声明：
extern void runstart();
extern void runend();
void ShowProcessMemoryUsageInfo();
__int64 CompareFileTime(FILETIME time1, FILETIME time2);
void rundisplay();


//开始----------

int mate(char* b, char* a);
int mate(const char* b, const char* a);

//结束----------