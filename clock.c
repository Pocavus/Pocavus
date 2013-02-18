#include <stdio.h>
#include <time.h>
#include <windows.h>  // allows Sleep() function
#include <stdlib.h>

void putchars(char ch, size_t n) 
{
    size_t i;
    for (i = 0; i < n; i++)
            putchar(ch);
}


int main() 
{
	int tm_min;//initialising tm_min variable
	
    system("cls"); // clears the screen
   // printf("It's "); //Probably not needed
	time_t epoch_time;
	struct tm *tm_p;
	epoch_time = time( NULL );
	tm_p = localtime( &epoch_time );

    for(;;) 
	{
		/*obtaining time standard, may be replaced by the %.2d code section*/
        char *time_str;
        size_t len;

        time_t date = time(NULL);
        time_str = ctime(&date);
        len = strlen(time_str);
		strftime(time_str, sizeof(time_str), "%a, %d/%m %x", tm_p);
        time_str[--len] = '\0'; // get rid of newline (is this safe???)

		//switch statement in development
		switch( tm_min )
		{
			case 11:
			{
				printf("It's just gone ten past %.2d.\n", tm_p->tm_hour );
				break;
			}
	
			default:
			{
				printf("%s\n", time_str);			
				fflush(stdout);	//What does this do?
			}	
		}
		
		
		printf("It's %.2d minutes and %.2d seconds past %.2d.\n", tm_p->tm_min, tm_p->tm_sec, tm_p->tm_hour );
		
        Sleep(1000);    //sleep one second (1000 milliseconds)

		return main();
		
        //putchars('\b', len);
        //putchars(' ', len);
        //putchars('\b', len);
		
	}
	
    return 0;
}