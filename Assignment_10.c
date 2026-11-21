#include <stdio.h>

int main()
{
    int year, month, day, days;
    int start = 0;

    int monthDays[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    char *months[] = {
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    printf("Enter year: ");
    scanf("%d", &year);

    // Check leap year
    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
    {
        monthDays[1] = 29;
    }

    // Calculate starting day (0 = Sunday)
    int y = year - 1;
    start = (y * 365 + y / 4 - y / 100 + y / 400 + 1) % 7;

    // Print calendar
    for (month = 0; month < 12; month++)
    {
        printf("\n\n     %s %d\n", months[month], year);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for (day = 0; day < start; day++)
        {
            printf("    ");
        }

        days = monthDays[month];

        for (day = 1; day <= days; day++)
        {
            printf("%3d ", day);

            if ((start + day) % 7 == 0)
                printf("\n");
        }

        start = (start + days) % 7;
    }

    return 0;
}
