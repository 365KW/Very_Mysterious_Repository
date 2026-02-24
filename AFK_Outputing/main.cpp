#include <cstdio>
#include <climits>

long long times , rounds;

signed main()
{
    while(true)
    {
	printf("%s ! repeat times: %lld , rounds: %lld || %-20s \n","AFK_Hello_PC",times,rounds,"AFK-Hello_PC");
	if(times < LONG_LONG_MAX)times++;
	else times = 0,rounds++;
    }
    return 0;
}
