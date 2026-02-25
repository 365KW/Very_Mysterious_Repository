#include <cstdio>
#include <random>
#include <string.h>
#include <vector>
#include <thread>
#include <chrono>

const int qs_num = 3;

std::string qs[qs_num + 5];

void setup_qs()
{
    qs[0] = "Have you had dinner today?",
    qs[1] = "Have you breathed?",
    qs[2] = "Have you slept today?";
}

void start_ask()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0,qs_num - 1);
    int times = qs_num/2;
    while(times--)
    {
	int cur_q_num = dist(gen);
	char answer;
	printf("%s[Y/N]: ",qs[cur_q_num].c_str());
	scanf("%c",&answer);
	printf("Great!");
    }
}

void print_answer()
{
    printf("Checking...\n");
    std::this_thread::sleep_for(std::chrono::milliseconds(9000));
    printf("Here is \nYour Father : Male\nYour Mother : Female\n");
}

signed main()
{
    printf("Parents Sex Checker v0.0.1\n");
    printf("----------\n");
    setup_qs();
    start_ask();
    print_answer();
    return 0;
}
