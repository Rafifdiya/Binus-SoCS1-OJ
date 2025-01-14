#include <stdio.h>

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

long long count_multiples(long long n, long long a, long long b, long long c, long long d) {
    long long count = n/a + n/b + n/c + n/d;
    count -= n/lcm(a,b) + n/lcm(a,c) + n/lcm(a,d) + n/lcm(b,c) + n/lcm(b,d) + n/lcm(c,d);
    count += n/lcm(lcm(a,b),c) + n/lcm(lcm(a,b),d) + n/lcm(lcm(a,c),d) + n/lcm(lcm(b,c),d);
    count -= n/lcm(lcm(lcm(a,b),c),d);
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    long long result[n];
    for (int i = 0; i < n; i++)
    {
        long long n, a, b, c, d;
        scanf("%lld %lld %lld %lld %lld", &n, &a, &b, &c, &d);

        result[i] = count_multiples(n, a, b, c, d);
    }

    for (int i = 0; i < n; i++)
    {
    
    printf("Case #%d: %lld\n", i + 1, result[i]); //? i + 1 disini buat jadiin yang awalnya 0 menjadi 1 gitu aja sih ini comment juga gak penting anjir ngapain juga gw tulis cok
    }
    return 0;
}
