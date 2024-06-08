#include<stdio.h>
#include<stdlib.h>
//  The "string.h" header defines one variable type, one macro, and various functions for manipulating arrays of characters.
#include <string.h>
// The buffer memory is a memory where data is temporarily stored before it is written to the file
#define BUFFER_SIZE 1000



int only_team()
{
    /* File pointer to hold reference to our file */
    FILE * fPtr;

    char buffer[BUFFER_SIZE];
    int totalRead = 0;


    /*
     * Open file in r (read) mode.
     * "data/file2.txt" is complete file path to read
     */
    fPtr = fopen("E:\\Project text File\\Team Name.txt", "r");


    /* fopen() return NULL if last operation was unsuccessful */
    if(fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }


    /* File open success message */
    printf("File opened successfully. Reading file contents line by line. \n\n");


    /* Repeat this until read line is not NULL */
    while(fgets(buffer, BUFFER_SIZE, fPtr) != NULL)
    {
        /* Total character read count */
        totalRead = strlen(buffer);


        /*
         * Trim new line character from last if exists.
         */
        buffer[totalRead - 1] = buffer[totalRead - 1] == '\n'
                                    ? '\0'
                                    : buffer[totalRead - 1];


        /* Print line read on cosole*/
        printf("%s\n", buffer);

    }


    /* Done with this file, close file to release resource */
    fclose(fPtr);


    return 0;
}


//  Work of the function is take the input from the user and  write into in the txt file "Team_Details.txt"
int team_attributes()
{
	char team_name[50];
	int i,n;
	int  game_played;
	int game_won;
	int game_lost;
	int game_draw;
	int game_points;

			printf("------------------------------------------------------");
			printf("\n");

			printf("Enter number of Teams: ");
			scanf("%d",&n);
			/* File pointer to hold reference to our file */
					FILE *fptr,*ptr;
					/*
  				     * Open file in a (append ) mode.
    				 * "E:\\Project text File\\Team_Details.txt" is complete file path to read
  				   */
					fptr=(fopen("E:\\Project text File\\Team_Details.txt", "a"));
					ptr=(fopen("E:\\Project text File\\Team Name.txt", "a"));
		/* fopen() return NULL if last operation was unsuccessful */
			if(fptr==NULL)
			{
				printf("Error!");
					exit(1);	// exit(1) (usually) indicates unsucessful termination. However, it's usage is non-portable.
			}

	for (i=0;i<n;++i)
	 {
	 		printf("------------------------------------------------------");
	 		printf("\n");
	 		/*
	 		The function fflush(stdin) is used to flush the output buffer of the stream.
			It returns zero, if successful otherwise, returns EOF and feof error indicator is set.

			*/
	 		fflush(stdin);
			printf("Enter Team Name :- ");
			scanf("%[^\n]",team_name);
			printf("Enter Game Played :- ");
    		scanf("%d",&game_played);

			printf("Enter Game Won :- ");
			scanf("%d",&game_won);

			printf("Enter Game Lost :- ");
			scanf("%d",&game_lost);

			printf("Enter Game Draw :- ");
			scanf("%d",&game_draw);

			game_points=(game_won*3)+(game_draw*1);
		fprintf(fptr,"\n Team Name: %s  Total Played =%d   Total Win =%d  Total Lost =%d  Total Draw =%d  Team Points=%d  ",team_name,game_played,game_won,game_lost,game_draw,game_points);
		fprintf(ptr,"\n %s ",team_name);
		}

	/* Done with this file, close file to release resource */
	fclose(fptr);
	fclose(ptr);
	return 0;
}

// Work of this function is Add new Team in the end of the existing Text file
int append_new_record()
{
	char team_name[50];
	int i,n;
	int  game_played;
	int game_won;
	int game_lost;
	int game_draw;
	int game_points;

			printf("------------------------------------------------------");
			printf("\n");
			printf("Enter number of Teams: ");
			scanf("%d",&n);
			/* File pointer to hold reference to our file */
					FILE *fptr;

					/*
  				     * Open file in a (append ) mode.
    				 * "E:\\Project text File\\Team_Details.txt" is complete file path to read
  				 */
					fptr=(fopen("E:\\Project text File\\Team_Details.txt", "a"));
					/* fopen() return NULL if last operation was unsuccessful */
			if(fptr==NULL)
			{
				printf("Error!");
					exit(1);		// exit(1) (usually) indicates unsucessful termination. However, it's usage is non-portable.
			}

	for (i=0;i<n;++i)
	 {
	 		printf("------------------------------------------------------");
	 		printf("\n");
	 		/*
	 		The function fflush(stdin) is used to flush the output buffer of the stream.
			It returns zero, if successful otherwise, returns EOF and feof error indicator is set.

			*/
	 		fflush(stdin);
			printf("Enter Team Name :- ");
			scanf("%[^\n]",team_name);

			printf("Enter Game Played :- ");
    		scanf("%d",&game_played);

			printf("Enter Game Won :- ");
			scanf("%d",&game_won);

			printf("Enter Game Lost :- ");
			scanf("%d",&game_lost);

			printf("Enter Game Draw :- ");
			scanf("%d",&game_draw);

			game_points=(game_won*3)+(game_draw*1);		//This is calulating the Team point if win get 3 points and Draw then get 1 point

		fprintf(fptr,"\n Team Name: %s  Total Played =%d  Total Win =%d  Total Lost =%d  Total Draw =%d  Team Points=%d ",team_name,game_played,game_won,game_lost,game_draw,game_points);
		}
/* Done with this file, close file to release resource */
	fclose(fptr);
	return 0;
}

int display_all_record()
{
    /* File pointer to hold reference to our file */
    FILE * fPtr;

    char buffer[BUFFER_SIZE];
    int totalRead = 0;


    /*
     * Open file in r (read) mode.
     * "data/file2.txt" is complete file path to read
     */
    fPtr = fopen("E:\\Project text File\\Team_Details.txt", "r");


    /* fopen() return NULL if last operation was unsuccessful */
    if(fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }

	printf("------------------------------------------------------");
	printf("\n");
    /* File open success message */
    printf("File opened successfully. Reading file contents line by line. \n\n");


    /* Repeat this until read line is not NULL */
    while(fgets(buffer, BUFFER_SIZE, fPtr) != NULL)
    {
        /* Total character read count */
        totalRead = strlen(buffer);


        /*
         * Trim new line character from last if exists.
         */
        buffer[totalRead - 1] = buffer[totalRead - 1] == '\n'
                                    ? '\0'
                                    : buffer[totalRead - 1];


        /* Print line read on cosole*/
        printf("%s\n", buffer);
	printf("------------------------------------------------------------------------------------------------------------------");
	printf("\n");
    }


    /* Done with this file, close file to release resource */
    fclose(fPtr);


    return 0;
}

// This is the Main Function of the program with return type
int main()
{
	printf("------------------------------------------------------");
    printf("\n\n\t\t  Football League System   \n\n");
    printf("------------------------------------------------------");
    int choice, num, i;


		/*The while(1) or while(any non-zero value) is used for infinite loop.
	 		There is no condition for while. As 1 or any non-zero value is present, then the condition is always true
	 	*/

    while(1)
    {
		printf("\n");
        printf(" Press 1 to Enter the Details of the Team \n");				/*  This  is the main menu of the program */
        printf(" Press 2 to Add New Record in the End o the File \n");
        printf(" Press 3 to Display Team Details \n");
        printf(" Press 4 For Exit \n\n\n");
        only_team();
        printf("------------------------------------------------------");
        printf("\n");
        printf("Enter your choice :  ");

        scanf("%d",&choice);


        switch(choice)
        {
            case 1:

                team_attributes();		// Here, Calling "team_attributes()" Function
                break;

            case 2:
               append_new_record();		//Here, Calling "append_new_record()" Funcation
               break;
            case 3:
               display_all_record();	//Here, Calling "Display_all_record()" Function
                break;

            case 4:
                printf("\n\n\t\t\tCoding is Fun1 !\n\n\n");
                exit(0);    // terminates the complete program execution
               break;

            default:
            	printf("\n\n\t\t  Invalid Input   \n\n\n");

            //	printf("\n");
        }
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
