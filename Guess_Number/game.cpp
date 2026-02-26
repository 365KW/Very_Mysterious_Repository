#include "game.h"

#include <random>

ll custom_random::custom_random_spawner(const ll a,const ll b) {
    std::random_device rd;
    std::mt19937 rng(rd());
    srand(time(nullptr));
    ll result = (rng() + rand()) % (b + 1);
    if (result < a)return custom_random_spawner(a,b);
    return result;
}

ll stoi() {

}