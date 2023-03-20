//
// Created by ycd20 on 2023/3/20.
//
#include<iostream>

using namespace std;

const int N = 1e5 + 10;

int n, m;
int l, r;
int a[N], s[N];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++) s[i] = s[i - 1] + a[i];

    while (m--) {

        scanf("%d%d", &l, &r);
        printf("%d\n", s[r] - s[l - 1]);
    }

    return 0;
}