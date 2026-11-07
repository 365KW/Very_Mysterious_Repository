#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

const int questions_num = 4;
const int questions_length = 5005;

const char question[questions_num][questions_length] = {
    "",
    "Have you breathed?",
    "Have you had dinner today?", 
    "Have you slept today?"
};

int is_asked[questions_num];

void start_ask() {
    int times = questions_num / 2;
    is_asked[0] = 1;

    srand((unsigned int)time(NULL));

    while (times--) {
        int cur_q_num;
        char answer;

        do {
            cur_q_num = rand() % questions_num;
        } while (is_asked[cur_q_num]);
        
        is_asked[cur_q_num] = 1;

        printf("%s [Y/N]: ", question[cur_q_num]);

        scanf(" %c", &answer);
        printf("Great!\n");
    }
}

void print_answer() {
    printf("Checking...\n");
    clock_t start = clock();
    while ((clock() - start) < 9000);
    printf("Here is \nYour Father : Male\nYour Mother : Female\n");
}

int main() {
    printf("Parents Sex Checker v0.0.1\n");
    printf("----------\n");
    start_ask();
    print_answer();
    return 0;
}
