#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("Today is 20210405!\n");
    int daytime;
    printf("Type days:\n");
    scanf("%d", &daytime);
    int year = 2021;
    int month = 4;
    int day = 5;
    int month_days[12] = {31, 28, 31, 30, 31,
                          30, 31, 31, 30, 31,
                          30, 31};
    int sum;
    sum = daytime + day;
    do{
        if(month == 2)
        {
            if((year%400 == 0) || (year%100 != 0 && year%4 == 0))
                month_days[month - 1] = 29;
            else
                month_days[month - 1] = 28;
        }
        if(sum > month_days[month - 1])
        {
            sum -= month_days[month - 1];
	   		month++;
	   		if(month==13)
	   		{
	   			year++;
	   			month = 1;
	   		}
        }
    }while(sum > month_days[month-1]);
    day = sum;
    printf("\n第%d天後是%d-%d-%d", daytime, year, month, day);

    return 0;
}
