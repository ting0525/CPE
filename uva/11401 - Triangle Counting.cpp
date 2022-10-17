#include <cstdio>
#include <iostream>

#define MAX 1000005

using namespace std;

int main(void) {
    int N;
    long long int triangle[MAX] = { 0 };

    // Use DP to find out all possible combinations
    triangle[3] = 0;
    for (long long int i = 4; i <= MAX; ++i) {
        long long int num = (i - 3 +1) / 2;              //num=n
        long long int sum = ((i - 3) - num + 1) * num;   //sum=s
        triangle[i] = triangle[i - 1] + sum;
    } 

    while (scanf("%d", &N) != EOF && N >= 3) {
        // Print the result
        printf("%lld\n", triangle[N]);
    }

    return 0;
}


/*
https://yungshenglu.github.io/2018/04/22/UVA11401/
*/
