#include <stdio.h>	//Standard header for (input and/or) output
#include <time.h>	//Allows program to deal with time functions
#include <windows.h>	//Allows Sleep() function
#include <stdlib.h>	//Standard library

	/*Main clock function*/
	int main() 
	{
		int tm_min;	//initialising tm_min (minutes) variable
		int newmin;	//new variable for minute change

		/*array for converting hours into words*/
		char wordhour[][40] = {{"midnight"},{"one"},{"two"},{"three"},{"four"},{"five"},
						{"six"},{"seven"},{"eight"},{"nine"},{"ten"},{"eleven"},{"twelve"}};

		time_t epoch_time;	//variable for time since epoch
		struct tm *tm_p;	//time value is tm_p (EG: hour is 'tm_p->tm_hour')
		epoch_time = time( NULL );	//convert epoch_time into a readable format
		tm_p = localtime( &epoch_time );	//Get time from local (system) time of the device.

		for(;;) //Never-ending for loop (will always execute)
		{			
			system("cls");	//clears the screen
					
			/*obtaining time standard*/
			char *time_str; 
			size_t len;

			time_t clock = time(NULL);
			time_str = ctime(&clock);
			len = strlen(time_str);	//set variable 'len' equal to length of 'time_str' string
			time_str[--len] = '\0';	//Omit terminating character at end of string
			newmin = tm_p->tm_min;	//set 'newmin' equal to the current minute
			
			/*If hour is pm, take 12 hours away to convert to 12 hour time.*/
			if (tm_p->tm_hour > 12)
			{
				tm_p->tm_hour = tm_p->tm_hour - 12;
			}
			
			/*Converting minutes to words*/
			if (newmin >= 1 && newmin <= 2)
			{
				printf("It's just gone %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin >= 3 && newmin <= 4)
			{
				printf("It's almost five past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin == 5)
			{
				printf("It's five past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin >= 6 && newmin <= 7)
			{
				printf("It's just gone five past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin >=8 && newmin <= 9)
			{
				printf("It's almost ten past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin == 10)
			{
				printf("It's ten past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin >=11 && newmin <= 12)
			{
				printf("It's just gone ten past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin >=13 && newmin <= 14)
			{
				printf("It's almost a quarter past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin ==15)
			{
				printf("It's a quarter past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin >=16 && newmin <= 17)
			{
				printf("It's just gone a quarter past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin >=18 && newmin <= 19)
			{
				printf("It's almost twenty past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin == 20)
			{
				printf("It's twenty past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin >=21 && newmin <= 22)
			{
				printf("It's just gone twenty past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin >=23 && newmin <= 24)
			{
				printf("It's almost twenty five past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin == 25)
			{
				printf("It's twenty five past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin >=26 && newmin <= 27)
			{
				printf("It's just gone twenty five past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin >=28 && newmin <= 29)
			{
				printf("It's almost half past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin == 30)
			{
				printf("It's half past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin >=31 && newmin <= 32)
			{
				printf("It's just gone half past %s.\n", wordhour[tm_p->tm_hour] );
			}
			else if (newmin >=33 && newmin <= 34)
			{
				printf("It's almost twenty five to %s.\n", wordhour[tm_p->tm_hour+1] );
			}
			else if (newmin == 35)
			{
				printf("It's twenty five to %s.\n", wordhour[tm_p->tm_hour+1] );
			}
			else if (newmin >=36 && newmin <= 37)
			{
				printf("It's just gone twenty five to %s.\n", wordhour[tm_p->tm_hour+1] );
			}
			else if (newmin >=38 && newmin <= 39)
			{
				printf("It's almost twenty to %s.\n", wordhour[tm_p->tm_hour+1] );
			}
			else if (newmin == 40)
			{
				printf("It's twenty to %s.\n", wordhour[tm_p->tm_hour+1] );
			}
			else if (newmin >=41 && newmin <=42)
			{
				printf("It's just gone twenty to %s.\n", wordhour[tm_p->tm_hour+1] );
			}
			else if (newmin >=43 && newmin <=44)
			{
				printf("It's almost a quarter to %s.\n", wordhour[tm_p->tm_hour+1] );
			}
			else if (newmin == 45)
			{
				printf("It's a quarter to %s.\n", wordhour[tm_p->tm_hour+1] );
			}
			else if (newmin >=46 && newmin <=47)
			{
				printf("It's just gone a quarter to %s.\n", wordhour[tm_p->tm_hour+1] );
			}	
			else if (newmin >=48 && newmin <=49)
			{
				printf("It's almost ten to %s.\n", wordhour[tm_p->tm_hour+1] );
			}
			else if (newmin == 50)
			{
				printf("It's ten to %s.\n", wordhour[tm_p->tm_hour+1] );
			}
			else if (newmin >=51 && newmin <= 52)
			{
				printf("It's just gone ten to %s.\n", wordhour[tm_p->tm_hour+1] );
			}
			else if (newmin >=53 && newmin <= 54)
			{
				printf("It's almost five to %s.\n", wordhour[tm_p->tm_hour+1] );
			}
			else if (newmin == 55)
			{
				printf("It's five to %s.\n", wordhour[tm_p->tm_hour+1] );
			}
			else if (newmin >=56 && newmin <= 57)
			{
				printf("It's just gone five to %s.\n", wordhour[tm_p->tm_hour+1] );
			}			
			else if (newmin >=58 && newmin <= 59)
			{
				printf("It's almost %s.\n", wordhour[tm_p->tm_hour+1] );
			}
			else if (newmin == 0)
			{
				printf("It's exactly %s O'Clock.\n", wordhour[tm_p->tm_hour] );
			}
			else
			{
				printf("It's %d minutes past %s.\n", tm_p->tm_min, wordhour[tm_p->tm_hour] );
			}
			
			if (newmin != tm_p->tm_min)
			{
				return main();
			}
			else
			{
				Sleep(10000);	//sleep for 10 seconds (10,000 milliseconds)
			}
			
			return main();
		}

		return 0;
	}