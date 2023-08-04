

#include <iostream>
#include <time.h>


void gen() {
    int idk = rand() % 365;
    if (idk >= 10 and idk < 100) {
        printf("0");
    }
    else if (idk > 100) {

    }
    else if (idk < 100 && idk < 10) {
        printf("00");
    }
    int list[5] = { 95, 96, 97, 98, 99};

    printf("%d", idk);
    int t = rand() % 5;
    printf("%d", list[t]);
    printf("-OEM-");
    int numtest;
    int num1, num2, num3, num4, num5, num6, num7;
    do {
        num1 = 0;
        num2 = rand() % 9;
        num3 = rand() % 9;
        num4 = rand() % 9;
        num5 = rand() % 9;
        num6 = rand() % 9;
        num7 = rand() % 9;
        numtest = num1 + num2 + num3 + num4 + num5 + num6 + num7;
    } while (numtest % 7 != 0);
    printf("%d%d%d%d%d%d%d", num1, num2, num3, num4, num5, num6, num7);
    printf("-%d%d%d%d%d", rand() % 9, rand() % 9, rand() % 9, rand() % 9, rand() % 9);
}

void test() {
    printf("KEY 1\n");
    gen();
    printf("\nKEY 2\n");
    gen();
    printf("\nKEY 3\n");
    gen();
    printf("\nKEY 4\n");
    gen();
    printf("\n");
}

int main()
{
    printf("Windows 95 KeyGen\nMade By zvqle!\n\n");
    int loop = 1;
    test();
    srand(time(NULL));
    while (loop == 1) {
        printf("\nDO YOU WANT MORE? (y/n) : ");
        std::string e;
        std::cin >> e;
        if (e == "y") {
            printf("-----------------------------------------------------------------------------------\n");
            test();
        }
        else if (e == "Y") {
            printf("-----------------------------------------------------------------------------------\n");
            test();
        }
        else {
            return 0;
        }
    }

}


// C:\Users\zvqlee\source\repos\Win95KeyGen

