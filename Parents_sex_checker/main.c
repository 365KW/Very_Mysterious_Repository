#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

enum { Q_NUM = 4, Q_LEN = 64 }; 

static const char question[Q_NUM][Q_LEN] = {
    "",
    "Have you breathed?",
    "Have you had dinner today?",
    "Have you slept today?"
};

static unsigned asked;

static int is_asked(int i) { return (asked >> i) & 1u; } // 0 -> checked; 1 -> no checked

static void mark_asked(int i) { asked |= 1u << i; }

void start_ask() {
  char answer;
  int times = Q_NUM / 2;
  mark_asked(0);

  srand((unsigned int)time(NULL));

  while (times--) {
    int cur;
    do {
      cur = rand() % Q_NUM;
    } while (is_asked(cur));
    
    mark_asked(cur);
    printf("%s [Y/N]: ", question[cur]);
    
    scanf(" %c", &answer);
    printf("Great!\n");
  }
}

void print_answer() {
    printf("Checking...\n");
    clock_t start = clock();
    while ((clock() - start) < 9 * CLOCKS_PER_SEC);
    printf("Here is \nYour Father : Male\nYour Mother : Female\n");
}

int main() {
    printf("Parents Sex Checker v0.0.1\n");
    printf("----------\n");
    start_ask();
    print_answer();
    return 0;
}
