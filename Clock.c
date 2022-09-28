#include <stdio.h>
#include <windows.h>
int main()
{
    int count1 = 0, count2 = 0, count3 = 0;
    int hour, miniute, second;
    int d = 1000;
    printf("Give the Hour\n");
    scanf("%d", &hour);
    printf("Give the Miniute\n");
    scanf("%d", &miniute);
    printf("Give the second\n");
    scanf("%d", &second);
    while (second >= 60)
    {
        second = second - 60;
        count1++;
    }
    miniute += count1;
    while (miniute >= 60)
    {
        miniute = miniute - 60;
        count2++;
    }
    hour += count2;
    while (hour > 12)
    {
        hour = hour - 1;
        count3++;
    }
    if (count3 > 0)
    {
        hour = count3;
    }

    while (1)
    {
        second++;
        if (second > 59)
        {
            miniute++;
            second = 0;
        }
        if (miniute > 59)
        {
            hour++;
            miniute = 0;
        }
        if (hour > 12)
        {
            hour = 1;
        }

        printf("%d : %d : %d\n", hour, miniute, second);
        Sleep(d);
        system("cls");
    }

    // printf("%d\n",count1);
}