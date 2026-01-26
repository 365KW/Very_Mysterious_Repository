#include <cstdio>
#include <ios>
#include <cstring>
#include <ctime>

const int max_length = 18;
time_t now_time = time(nullptr);
std::string seed = std::to_string((int)now_time);

void resend(){
    srand(time(nullptr));
    int _rand_seed = rand()%10;
    for(char &i : seed)
        i = (char)(((int)i + _rand_seed) % 26);
}

long long flattern_seed(){
    srand(time(nullptr));
    if(seed.length() == max_length){
        int _rand_seed = rand() % max_length;
        while(_rand_seed--)seed.pop_back();
    }else{
        srand(time(nullptr));
        int _rand_seed = rand()%(max_length - seed.length());
        for(int i = 1;i <= _rand_seed;i++)
            seed += (char)(_rand_seed + seed[_rand_seed  % seed.length()]);
    }
    long long _res;
    for(char i : seed)
        _res = _res * 10 + i - '0';
    return _res;
}

signed main(){
    std::ios::sync_with_stdio(false);
    freopen("Bomb","a",stdout);
    while(true){
        resend();
        srand(flattern_seed());
        long long a = rand();
        printf("%lld",a);
    }
}
