#include "middle.h"

using namespace std;

void itc_num_print(int number){
    cout << number;
}
int itc_len_num(long long number){
    int a;
    a = 0;
    if (number == 0){
        return 1;
    }
    else{
        while (number != 0){
            number = number / 10;
            a ++;
        }
        return a;
    }
}
int itc_sum_num(long long number){
    int a;
    a = 0;
    if (number == 0){
        return 0;
    }
    else{
        while (number != 0){
            a += number % 10;
            number = number / 10;
        }
        if (a > 0){
            return a;
        }
        else{
            return a * -1;
        }
    }
}
long long itc_multi_num(long long number){
    int a;
    a = 1;
    if (number == 0){
        return 0;
    }
    else{
        while (number != 0){
            a *= number % 10;
            number = number / 10;
        }
        return a;
    }
}
int itc_max_num(long long number){
    int a;
    a = 0;
    if (number == 0){
        return 0;
    }
    else{
        while (number != 0){
            if (number % 10 >= a){
                a = number % 10;
            }
            number = number / 10;
        }
        return a;
    }
}
int itc_min_num(long long number){
    int a;
    a = number;
    if (number == 0){
        return 0;
    }
    else{
        while (number != 0){
            if (number % 10 <= a){
                a = number % 10;
            }
            number = number / 10;
        }
        return a;
    }
}
int itc_null_count(long long number){
    int a;
    a = 0;
    if (number == 0){
        return 0;
    }
    else{
        while (number != 0){
            if (number % 10 == 0){
                a ++;
            }
            number = number / 10;
        }
        return a;
    }
}
bool itc_mirror_num(long long number){
    long long num, revnum, num2;
    num = number;
    revnum = 0;
    while(num > 0){
        num2 = num % 10;
        revnum = revnum * 10 + num2;
        num = num / 10;
    }
    if (revnum == number){
        return true;
    }
    else{
        return false;
    }
}
int itc_mirror_count(long long number){
    long long num, kol;
    num = 0;
    kol = 0;
    while (num != number){
        if (itc_mirror_num(num) == 1){
            kol++;
        }
        num++;
    }
    return kol;
}
