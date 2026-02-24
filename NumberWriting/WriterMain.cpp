#include <cstdio>
#include <ios>
#include <cstring>
#include <random>

[[noreturn]] signed main()
{
    std::ios::sync_with_stdio(false);
    freopen("Bomb","a",stdout);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0,rd());
    while(true) printf("%lf\n",dis(gen));
}