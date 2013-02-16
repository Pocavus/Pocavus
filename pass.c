#include <stdio.h>
#include <string.h> //Header file to handle strings

int main()
{
	char password[25];
	char user_password[25]; //user entered string
	int len = strlen(password); //set the variable 'len' to the length of the string 'password'
	int n = 0;
	
	printf ("Enter password:\n");
	scanf ("%s", &user_password);
	
	/*Read file*/
	FILE *fp;
	fp = fopen("passfile.dat", "r"); //opens file for reading
	fgets(password, len, fp); //fgets is 'from file, get string' and sets the string to the array 'password'
	
	fclose(fp); //closes file
	
	/*Compare entered string with string from file for correct password*/
	
	for (;;)
	{
		if (strcmp(user_password, password) == 0) //compares strings; if equal then allow access
		{
			Granted(); //function for allowing access
			
			break; //End the loop
		}
		else if (strcmp(user_password, password) != 0) //compares strings; if not equa then do not allow access
		{
			printf("Password does not match\n");
			printf("Please try again\n"); //prompts user to try again
			
			return main(); //returns to main function
		}
	}
	
	return 0;
}

/*function to allow access*/
int Granted()
{
	printf("Access granted\n");
	
	/*Code to allow access here*/
	
	return 0;
}