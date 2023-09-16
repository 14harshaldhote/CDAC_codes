#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max(int x, int y)
{
    if (x > y) return x;
    else return y;
}

int max_of_four(int a, int b, int c, int d)
{
    return max(max(a, b), max(c, d));
}