#include <stdio.h>

int main(void)
{
    int days, start_day, i, j;

    printf("\nEnter number of days in month: ");
    scanf("%d", &days);
    
    if (days != 28 && days != 29 && days != 30 && days !=31)
    printf("Invalid number. Please try again.");

    else
    {
        
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);
    printf("\n");
    
    
        if (start_day <= 0 || start_day >= 8)
        printf("Invalid number. Please try again.");
        
        else
        {
    /* prints the blank days of the first week */
        for (i = 1; i < start_day; i++)
            printf("   ");
            
        /* prints the calendar numbers */
                for (j = 1; j <= days; i++, j++) {
                printf("%3d", j);
                if (i % 7 == 0)
                    printf("\n");
               }
              
            printf("\n\n");
        }
    }
    return 0;
}