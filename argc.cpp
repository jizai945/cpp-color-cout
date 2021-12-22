/*************************************************************************
	> File Name: argc.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Dec 2021 01:02:37 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstdio>
#include"head.h"
using namespace std;


int main(int argc, char **argv) {
    for (int i = 0; i < argc; i++) {
        string test = argv[i]; // 测试 string接收char* 字符串
        cout << L_PINK << "argument[" << i << "]: " << test << NONE <<  endl;
    }
    cout << YELLOW << "yellow test" << NONE << endl;
    cout << BLUE << "blue test" << NONE << endl;
    cout << L_RED << "red test" << NONE << endl;

    return 0;
}
