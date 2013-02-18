#include <stdio.h>
#include <time.h>	//Allows program to deal with time functions
#include <windows.h>	//Allows Sleep() function
#include <stdlib.h>

/*function for replacing characters on screen (clearing/refreshing screen)*/
void putchars(char ch, size_t n) 
{
    size_t i;
    for (i = 0; i < n; i++)
            putchar(ch);
}

/*Main clock function*/
int main() 
{
	int tm_min;	//initialising tm_min (minutes) variable
	
    system("cls");	// clears the screen
	time_t epoch_time;
	struct tm *tm_p;	//time value is tm_p (EG: hour is 'tm_p->tm_hour')
	epoch_time = time( NULL );
	tm_p = localtime( &epoch_time );	//Get time from local (system) time of the device.

    for(;;) 
	{
	/*obtaining time standard*/
        char *time_str;
        size_t len;

        time_t clock = time(NULL);
        time_str = ctime(&clock);
        len = strlen(time_str);
        time_str[--len] = '\0';	// get rid of newline (is this safe???)
		
		if (tm_p->tm_hour > 12)	//If hour is pm, take 12 hours away to convert to 12 hour time.
			{
				tm_p->tm_hour = tm_p->tm_hour - 12;
			}
			
		/*switch statement for 'five to', 'ten past' etc.*/
		switch(tm_p->tm_min)	//Switch statement involving minutes
		{			
			case 1:
			{
				printf("It's just gone %.2d.\n", tm_p->tm_hour );	//%.2d means the integer, but with a .2 of a character indent before it.
				break;
			}
			
			case 2:
			{
				printf("It's just gone %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 3:
			{
				printf("It's almost five past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 4:
			{
				printf("It's almost five past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 5:
			{
				printf("It's five past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 6:
			{
				printf("It's just gone five past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 7:
			{
				printf("It's just gone five past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 8:
			{
				printf("It's almost ten past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 9:
			{
				printf("It's almost ten past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 10:
			{
				printf("It's ten past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 11:
			{
				printf("It's just gone ten past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 12:
			{
				printf("It's just gone ten past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 13:
			{
				printf("It's almost a quarter past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 14:
			{
				printf("It's almost a quarter past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 15:
			{
				printf("It's a quarter past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 16:
			{
				printf("It's just gone a quarter past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 17:
			{
				printf("It's just gone a quarter past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 18:
			{
				printf("It's almost twenty past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 19:
			{
				printf("It's almost twenty past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 20:
			{
				printf("It's twenty past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 21:
			{
				printf("It's just gone twenty past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 22:
			{
				printf("It's just gone twenty past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 23:
			{
				printf("It's almost twenty five past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 24:
			{
				printf("It's almost twenty five past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 25:
			{
				printf("It's twenty five past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 26:
			{
				printf("It's just gone twenty five past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 27:
			{
				printf("It's just gone twenty five past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 28:
			{
				printf("It's almost half past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 29:
			{
				printf("It's almost half past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 30:
			{
				printf("It's half past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 31:
			{
				printf("It's just gone half past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 32:
			{
				printf("It's just gone half past %.2d.\n", tm_p->tm_hour );
				break;
			}
			
			case 33:
			{
				printf("It's almost twenty five to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 34:
			{
				printf("It's almost twenty five to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 35:
			{
				printf("It's twenty five to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 36:
			{
				printf("It's just gone twenty five to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 37:
			{
				printf("It's just gone twenty five to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 38:
			{
				printf("It's almost twenty to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 39:
			{
				printf("It's almost twenty to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 40:
			{
				printf("It's twenty to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 41:
			{
				printf("It's just gone twenty to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 42:
			{
				printf("It's just gone twenty to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 43:
			{
				printf("It's almost a quarter to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
				
			case 44:
			{
				printf("It's almost a quarter to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 45:
			{
				printf("It's a quarter to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 46:
			{
				printf("It's just gone a quarter to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
				
			case 47:
			{
				printf("It's just gone a quarter to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
				
			case 48:
			{
				printf("It's almost ten to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 49:
			{
				printf("It's almost ten to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
				
			case 50:
			{
				printf("It's ten to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 51:
			{
				printf("It's just gone ten to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
				
			case 52:
			{
				printf("It's just gone ten to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
				
			case 53:
			{
				printf("It's almost five to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 54:
			{
				printf("It's almost five to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 55:
			{
				printf("It's five to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 56:
			{
				printf("It's just gone five to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 57:
			{
				printf("It's just gone five to %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 58:
			{
				printf("It's almost %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 59:
			{
				printf("It's almost %.2d.\n", tm_p->tm_hour + 1 );
				break;
			}
			
			case 0:
			{
				printf("It's exactly %.2d.\n", tm_p->tm_hour );
				break;
			}
	
			default:
			{
				printf("%s", time_str);			
				printf("It's %.2d minutes past %.2d.\n", tm_p->tm_min, tm_p->tm_hour );
				break;
			}	
		}
		
		Sleep(60000);    //sleep one minute (60,000 milliseconds)

		return main();
		
        putchars('\b', len);
        putchars(' ', len);
        putchars('\b', len);
		
	}
	
    return 0;
}
