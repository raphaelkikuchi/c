#include <stdio.h>

/* Macro for lambda */
#define h(tp,fn)({tp __fn__ fn __fn__;})

/* Safe */
#define maxMacro(a,b) ({int _a = (a), _b = (b); _a > _b ? _a : _b; })

int main(){
    int array[] = {[5] = 10, [1] = 2, [3] = 4 };  // int array[] = { 0, 2, 0, 4, 0, 10};
    int array2[] = { [0 ... 9] = 1, [10 ... 20] = 2, [30 ... 40] = 3}; // int array[] = { 1, 1, 1, 1, ..... 2, 2, 2 ...... 3, 3, 3};

    /* nested functions */
    int (*max)(int, int) = h(int, (int x, int y) { return x > y ? x : y; });
    int (*min)(int, int) = ({
       int __fn__ (int x, int y) {
           return x < y ? x : y;
       }
       __fn__;
    });
    printf("max: %d\n", max(10,20));

    char *s = "Hello, World!";
    printf("%c", 1[s]);

    return 0;
}