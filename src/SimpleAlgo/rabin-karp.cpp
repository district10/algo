#include <algo/SimpleAlgo.h>

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int R = 256; /** ASCII 字母表的大小，R 进制 */
/** 哈希表的大小，选用一个大素数，这里用 16 位整数范围内最大的素数 */

const long Q = 0xfff1;

/*
* @brief 哈希函数.
*
* @param[in] key 待计算的字符串
* @param[int] M 字符串的长度
* @return 长度为 M 的子字符串的哈希值
*/
static long hash(const char key[], const int M) {
    int j;
    long h = 0;
    for (j = 0; j < M; ++j) h = (h * R + key[j]) % Q;
    return h;
}

/*
* @brief 计算新的 hash.
*
* * @param[int] h 该段子字符串所对应的哈希值
* @param[in] first 长度为 M 的子串的第一个字符
* @param[in] next 长度为 M 的子串的下一个字符
* @param[int] RM R^(M-1) % Q
* @return 起始于位置 i+1 的 M 个字符的子字符串所对应的哈希值
*/
static long rehash(const long h, const char first, const char next, const long RM) {
    long newh = (h + Q - RM * first % Q) % Q;
    newh = (newh * R + next) % Q;
    return newh;
}

/*
* @brief 用蒙特卡洛算法，判断两个字符串是否相等.
*
* @param[in] pattern 模式串
* @param[in] substring 原始文本长度为 M 的子串
* @return 两个字符串相同，返回 1，否则返回 0
*/
static int check(const char *pattern, const char substring[]) {
    return 1;
}

/**
* @brief Rabin-Karp 算法.
*
* @param[in] text 文本
* @param[in] n 文本的长度
* @param[in] pattern 模式串
* @param[in] m 模式串的长度
* @return 成功则返回第一次匹配的位置，失败则返回-1
*/
int algo::rabin_karp(const char *text, const char *pattern)
{
    int i;
    const int n = strlen(text);
    const int m = strlen(pattern);
    const long pattern_hash = hash(pattern, m);
    long text_hash = hash(text, m);
    int RM = 1;
    for (i = 0; i < m - 1; ++i) RM = (RM * R) % Q;
    for (i = 0; i <= n - m; ++i) {
        if (text_hash == pattern_hash) {
            if (check(pattern, &text[i])) return i;
        }
        text_hash = rehash(text_hash, text[i], text[i + m], RM);
    }
    return -1;
}
