#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>

int neha=1, audience=1, f_f=1, alt=1, j, counter=0, p=0, q;
char x;

void lifeline_display();
void neha_maam();
void audience_poll();
void ff();
void alternate();
void help();
void quit();
void bbye();
void prize();
void giveup();
clrscr();

int main()
{
    int i,count=0; //round 1
    int cntr=0; //exit round 1
    char player_name[20];
    char ch;
    //goto quiz;
    getch();
    Beep(275.6,600);
    Beep(306.3,400);
    Beep(334.1,500);
    Beep(282.7,400);
    Beep(315.0,600);
    Beep(324.3,400);
    Beep(367.5,400);
    Beep(408.3,1750);
    home:
    system("cls");
    printf("\n\n\n\t\t\t   C PROGRAM QUIZ    \n");
    printf("\n\t\t________________________________________");
    printf("\n\t\t\t       WELCOME ");
    printf("\n\t\t\t         to ");
    printf("\n\t\t\t      THE GAME ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t      KAUN BANEGA CROREPATI!!!!!!!!    ") ;
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t   > Press S to start the Quiz");
    printf("\n\t\t   > Press H for Help            ");
    printf("\n\t\t   > Press Q to Quit             ");
    printf("\n\t\t________________________________________\n\n");
    ch=toupper(getch());
    //HELP
    if(ch=='H')
    {
        help();
        getch();
        goto home;
    }
    //QUIT
    else if(ch=='Q')
    {
        quit();
        goto lose;
    }
    //START
    else if(ch=='S')
    {
        //NAME
        system("cls");
        printf("\n\n\n");
        printf("\t\tEnter your name : ");
        gets(player_name);
        printf("\n\n\n");
        //INSTRUCTIONS
        system("cls");
        printf("\n\n Instructions:");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> There are 2 rounds in this quiz:                                ");
        printf("\n   --> QUALIFYING ROUND \n   --> CHALLENGE ROUND");
        printf("\n >> QUALIFYING ROUND:                                               ");
        printf("\n    You will be asked 6 questions to test your general knowledge.   ");
        printf("\n    You must answer atleast 3 correct to move to the challenge round.");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!\n\n");
        getch();
        //ROUND 1
        for(i=1;i<=6;i++)
        {
            system("cls");
            switch(i)
            {
            case 1:
		    printf("\n\n\nWhich is the hottest planet in the solar system?");
            printf("\n\nA. Mercury\tB. Venus\n\nC. Mars\t\tD. Jupiter\n");
            printf("\nYour answer : ");
            scanf(" %c",&x);
            if ((toupper(x))=='B')
			{
			    printf("\n\nCorrect!!!");
			    count++;
                getch();
			    break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Venus");
                Beep(310,320);
                Beep(290,350);
                Beep(270,350);
                Beep(260,600);
                cntr++;
                getch();
		        break;
            }

            case 2:
            printf("\n\n\nThe gas usually filled in the electric bulb is ______");
            printf("\n\nA. Nitrogen\t\tB. Hydrogen\n\nC. Carbon dioxide\tD. Oxygen\n");
            printf("\nYour answer : ");
            scanf(" %c",&x);
            if ((toupper(x))=='A')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
            else
                {
                    printf("\n\nWrong!!! The correct answer is A. Nitrogen");
                    Beep(310,320);
                    Beep(290,350);
                    Beep(270,350);
                    Beep(260,600);
                    cntr++;
                    getch();
                    break;
                }

            case 3:
            printf("\n\n\nWho is the English physicist responsible for the 'Big Bang Theory'?");
            printf("\n\nA. Albert Einstein\tB. Michael Skube\n\nC. George Gamow\t\tD. Roger Penrose\n");
            printf("\nYour answer : ");
            scanf(" %c",&x);
            if ((toupper(x))=='C')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    if(count==3)
                    {
                        goto shift;
                    }
                    getch();
                    break;
                }
            else
                {
                    printf("\n\nWrong!!! The correct answer is C. George Gamow");
                    Beep(310,320);
                    Beep(290,350);
                    Beep(270,350);
                    Beep(260,600);
                    cntr++;
                    if(cntr==4)
                    {
                        goto back;
                    }
                    getch();
                    break;
                }

            case 4:
            printf("\n\n\nThe earth rotates around its axis from ______");
            printf("\n\nA. North to south\t\tB. East to west\n\nC. South to north\t\tD. West to east \n");
            printf("\nYour answer : ");
            scanf(" %c",&x);
            if ((toupper(x))=='D')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    if(count==3)
                    {
                        goto shift;
                    }
                    getch();
                    break;
                }
            else
                {
                    printf("\n\nWrong!!! The correct answer is D. West to east");
                    Beep(310,320);
                    Beep(290,350);
                    Beep(270,350);
                    Beep(260,600);
                    cntr++;
                    if(cntr==4)
                    {
                        goto back;
                    }
                    getch();
                    break;
                }
            case 5:
            printf("\n\n\nHow many medals did India win in olympics 2021?");
            printf("\n\nA. 8\t\tB. 7\n\nC. 6\t\tD. 4\n");
            printf("\nYour answer : ");
            scanf(" %c",&x);
            if ((toupper(x))=='B')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    if(count==3)
                    {
                        goto shift;
                    }
                    break;
                }
            else
                {
                    printf("\n\nWrong!!! The correct answer is B. 7");
                    Beep(310,320);
                    Beep(290,350);
                    Beep(270,350);
                    Beep(260,600);
                    cntr++;
                    if(cntr==4)
                    {
                        goto back;
                    }
                    getch();
                    break;
                }
            case 6:
            printf("\n\n\nBermuda Triangle is located in which Ocean?");
            printf("\n\nA. Indian\t\tB. Pacific\n\nC. Arctic\t\tD. Atlantic\n");
            printf("\nYour answer : ");
            scanf(" %c",&x);
            if ((toupper(x))=='D')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    if(count==3)
                    {
                        goto shift;
                    }
                    getch();
                    break;
                }
            else
                {
                    printf("\n\nWrong!!! The correct answer is D. Atlantic");
                    Beep(310,320);
                    Beep(290,350);
                    Beep(270,350);
                    Beep(260,600);
                    cntr++;
                    getch();
                    break;
                }
            }
        }
    }
    else
    {
        goto key;
    }
    back:
    if(count<3)
    {
        system("cls");
        printf("\n\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME!!!");
	    getch();
        printf("\n\nPress Y to play again");
        printf("\nPress any other key to exit\n");
	    if(toupper(getch())=='Y')
	    {
	        goto home;
	    }
	    else
	    {
	        quit();
	        goto lose;
	    }
    }
    shift:
        getch();
        system("cls");
        printf("\n\n\t\t*** CONGRATULATIONS %s you are eligible to play the CHALLENGE Round ***",player_name);
        Beep(275.6,600);
        Beep(306.3,400);
        Beep(334.1,500);
        Beep(282.7,400);
        Beep(315.0,600);
        Beep(324.3,400);
        Beep(367.5,400);
        Beep(408.3,1750);
        getch();
        printf("\n\n Instructions:\t\t\t\t\t\t\t\t\tPrize amount for each question is :");
        printf("\n >> CHALLENGE ROUND: \t\t\t\t\t\t\t\t-->For Question 1  : Rs.1000           ");
        printf("\n    You will be asked 16 questions....\t\t\t\t\t\t-->For Question 2  : Rs.2000      ");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D\t\t-->For Question 3  : Rs.3000  ");
        printf("\n    to enter your choice.\t\t\t\t\t\t\t-->For Question 4  : Rs.5000         ");
        printf("\n >> You have four lifelines :\t\t\t\t\t\t\t-->For Question 5  : Rs.10000      [MILESTONE 1]\n\t -->Neha Ma'am recommends\t\t\t\t\t\t-->For Question 6  : Rs.20000\n\t -->Audience Poll\t\t\t\t\t\t\t-->For Question 7  : Rs.40000\n\t -->50-50\t\t\t\t\t\t\t\t-->For Question 8  : Rs.80000\n\t -->Alternate Question\t\t\t\t\t\t\t-->For Question 9  : Rs.160000");
        printf("\n >> You can use each lifeline once\t\t\t\t\t\t-->For Question 10 : Rs.320000     [MILESTONE 2] ");
        printf("\n                                               \t\t\t\t\t-->For Question 11 : Rs.640000");
        printf("\n >> If you answer wrong from Question 1-5 you gain nothing\t\t\t-->For Question 12 : Rs.1250000\n >> If you answer wrong from Question 6-10 you gain 10000\t\t\t-->For Question 13 : Rs.2500000\n >> If you answer wrong from Question 11-16 you gain 320000\t\t\t-->For Question 14 : Rs.5000000");
        printf("\n >> You can Quit the game anytime!\t\t\t\t\t\t-->For Question 15 : Rs.10000000");
        printf("\n\t\t\t\t\t\t\t\t\t\t-->For Question 16 : Rs.70000000");
        printf("\n\n\t\t\t\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!\t\t\t\t\t");
        getch();
        printf("\n\n\t!Press any key to Start the CHALLENGE Round!");
        getch();
    quiz:
    for(j=1;j<=16;j++)
        {
            system("cls");
            switch(j)
            {
                case 1:
                printf("\n\n\nHow many bytes in double?");
                printf("\n\nA. 8\t\tB. 16\n\nC. 32\t\tD. 64");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto one;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto one;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto one;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto one;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto one;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                                printf("\n\nHow many bytes in double?");
                                printf("\n\nA. 8\t\tB. \n\nC. \t\tD. 64\n");
                                f_f--;
                                goto one;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto one;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto one;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto one;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    one:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    if (toupper(x)=='A')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! You won Rs.%d",p);
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is A. 8");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        printf("\n\n\t\t!!Better luck Next Time!!");
                        getch();
                        goto exi;
                        break;
                    }
                }
                case 2:
                printf("\n\n\nTill the array elements are not given any specific value, they are supposed to contain all");
                printf("\n\nA. Zero\t\t\t\tB. One\n\nC. Garbage Value\t\tD. Combination of zero and one");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto two;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto two;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto two;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto ten;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto two;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                                printf("\n\nTill the array elements are not given any specific value, they are supposed to contain all");
                                printf("\n\nA. Zero\t\t\t\tB. \n\nC. Garbage Value\t\tD. \n");
                                f_f--;
                                goto two;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto two;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto two;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto two;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    two:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    if (toupper(x)=='C')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! You won Rs.%d",p);
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is C. Garbage Value");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        printf("\n\n\t\t!!Better luck Next Time!!");
                        getch();
                        goto exi;
                        break;
                    }
                }
                case 3:
                printf("\n\n\nHow many types of C token are there?");
                printf("\n\nA. 8\t\tB. 9\n\nC. 6\t\tD. 7");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto three;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto three;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto three;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto three;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto three;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                                printf("\n\nHow many types of C token are there?");
                                printf("\n\nA. 8\t\tB. \n\nC. 6\t\tD. \n");
                                f_f--;
                                goto three;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto three;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto three;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto three;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    three:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    if (toupper(x)=='C')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! You won Rs.%d",p);
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is C. 6");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        printf("\n\n\t\t!!Better luck Next Time!!");
                        getch();
                        goto exi;
                        break;
                    }
                }
                case 4:
                printf("\n\n\nWhich of the following are 4 types of data types?");
                printf("\n\nA. int,float,char,double\t\tB. Primary,derived,void, enumeration\n\nC. array,string, structure,union\tD. None of the Above");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto four;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto four;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto four;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto four;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto four;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                                printf("\n\nWhich of the following are 4 types of data types?");
                                printf("\n\nA. \t\t\t\t\tB. Primary,derived,void, enumeration\n\nC. array,string, structure,union\tD. \n");
                                f_f--;
                                goto four;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto four;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto four;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto four;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    four:
                        printf("\n\nYour answer : ");
                        scanf(" %c",&x);
                        if (toupper(x)=='B')
                        {
                            printf("\n\nCorrect!!!");
                            counter++;
                            prize();
                            printf("\nCONGRATULATIONS!! You won Rs.%d",p);
                            getch();
                            break;
                        }
                        else
                        {
                            printf("\n\nWrong!!! The correct answer is B. Primary,derived,void, enumeration");
                            Beep(310,320);
                            Beep(290,350);
                            Beep(270,350);
                            Beep(260,600);
                            printf("\n\n\t\t!!Better luck Next Time!!");
                            getch();
                            goto exi;
                            break;
                        }
                }
                //humour Question
                 case 5:
                 printf("\n\n\nWhich batch is the best?");
                 printf("\n\nA. C2\t\t\t\tB. D1\n\nC. None of the Above\t\tD. Whole IT");
                 printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                 if (toupper(getch())=='Y')
                 {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto five;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto five;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto five;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto five;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto five;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                                printf("\n\nWhich batch is the best?");
                                printf("\n\nA. \t\t\t\tB. \n\nC. None of the Above\t\tD. Whole IT\n");
                                f_f--;
                                goto five;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto five;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto five;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto five;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    five:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    if (toupper(x)=='D')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! You won Rs.%d",p);
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is D. Whole IT ");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        printf("\n\n\t\t!!Better luck Next Time!!");
                        getch();
                        goto exi;
                        break;
                    }
                }
                case 6:
                printf("\n\n\nHow many types of operators are there in C?");
                printf("\n\nA. 6\t\tB. 7\n\nC. 8\t\tD. 9");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto six;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto six;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto six;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto six;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto six;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                                printf("\n\nHow many types of operators are there in C?");
                                printf("\n\nA. 6\t\tB. \n\nC. 8\t\tD. \n");
                                f_f--;
                                goto six;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto six;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto six;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto six;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    six:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    q=10000;
                    if (toupper(x)=='A')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! You won Rs.%d",p);
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is A. 6");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        printf("\n\n\t\t\tCONGRATULATIONS!! You won Rs.%d",q);
                        getch();
                        goto exi;
                        break;
                    }
                }
                case 7:
                printf("\n\n\nUser defined data type can be derived by");
                printf("\n\nA. struct\t\tB. enum\n\nC. typedef\t\tD. All of the Above");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto seven;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto seven;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto seven;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto seven;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto seven;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                                printf("\n\n\nUser defined data type can be derived by");
                                printf("\n\nA. struct\t\tB. \n\nC. \t\tD. All of the Above");
                                f_f--;
                                goto seven;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto seven;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto seven;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto seven;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    seven:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    if (toupper(x)=='D')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! U won Rs.%d",p);
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is D. All of the Above");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        printf("\n\n\t\t\tCONGRATULATIONS!! You won Rs.%d",q);
                        getch();
                        goto exi;
                        break;
                    }
                }
                case 8:
                printf("\n\n\nWho is the best faculty member for c programming?");
                printf("\n\nA. Neha Ma'am\t\tB. Arjun Sir\n\nC. Neepa Ma'am\t\tD. All of the Above");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto eight;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto eight;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto eight;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto eight;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto eight;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                                printf("\n\nWho is the best faculty member for c programming?");
                                printf("\n\nA. Neha Ma'am\t\tB. \n\nC. \t\t\tD. All of the Above\n");
                                f_f--;
                                goto eight;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto eight;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto eight;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto eight;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    eight:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    if (toupper(x)=='D')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! You won Rs.%d",p);
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is D. All of the Above");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        printf("\n\n\t\t\tCONGRATULATIONS!! You won Rs.%d",q);
                        getch();
                        goto exi;
                        break;
                    }
                }
                case 9:
                printf("\n\n\nASCII value of 'C'");
                printf("\n\nA. 67\t\tB. 65\n\nC. 66\t\tD. 68");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto nine;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto nine;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto nine;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto nine;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto nine;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                                printf("\n\nASCII value of 'C'");
                                printf("\n\nA. 67\t\tB. \n\nC. \t\tD. 68\n");
                                f_f--;
                                goto nine;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto nine;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto nine;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto nine;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    nine:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    if (toupper(x)=='A')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! You won Rs.%d",p);
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is A. 67");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        printf("\n\n\t\t\tCONGRATULATIONS!! U won Rs.%d",q);
                        getch();
                        goto exi;
                        break;
                    }
                }
                case 10:
                printf("\n\n\nCorrect Syntax of for loop is");
                printf("\n\nA. for(Init,condition,inc/dec);\t\tB. for(Init,condition,inc/dec)\n\nC. for(Init;condition;inc/dec)\t\tD. for(Init;condition;inc/dec);");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto ten;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto ten;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto ten;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto ten;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto ten;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                            printf("\n\nCorrect Syntax of for loop is");
                            printf("\n\nA. \t\t\t\t\tB. \n\nC. for(Init;condition;inc/dec)\t\tD. for(Init;condition;inc/dec);\n");
                            f_f--;
                            goto ten;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto ten;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto ten;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto ten;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    ten:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    if (toupper(x)=='C')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! You won Rs.%d",p);
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is C. for(Init;condition;inc/dec)");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        printf("\n\n\t\t\tCONGRATULATIONS!! You won Rs.%d",q);
                        getch();
                        goto exi;
                        break;
                    }
                }
                case 11:
                printf("\n\n\nSpecial symbol permitted with in the identifier name");
                printf("\n\nA. _\t\tB. .\n\nC. @\t\tD. $");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto eleven;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto eleven;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto eleven;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto eleven;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto eleven;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                                printf("\n\nSpecial symbol permitted with in the identifier name");
                                printf("\n\nA. _\t\tB. .\n\nC. \t\tD. \n");
                                f_f--;
                                goto eleven;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto eleven;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto eleven;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto eleven;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    eleven:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    q = 320000;
                    if (toupper(x)=='A')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! You won Rs.%d",p);
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is A. _");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        getch();
                        printf("\n\n\t\t\tCONGRATULATIONS!! You won Rs.%d",q);
                        goto exi;
                        break;
                    }
                }
                //Humour question
                case 12:
                printf("\n\n\nThe modulus operator gives");
                printf("\n\nA. Dividend\tB. Remainder\n\nC. Quotient\tD. Divisor");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto twelve;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto twelve;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto twelve;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto twelve;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto twelve;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                            printf("\n\n\nThe modulus operator gives");
                            printf("\n\nA. \t\tB. Remainder\n\nC. Quotient\tD. ");
                            f_f--;
                            goto twelve;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto twelve;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto twelve;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto twelve;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    twelve:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    if (toupper(x)=='B')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! You won Rs.%d",p);
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is B. Remainder");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        getch();
                        printf("\n\n\t\t\tCONGRATULATIONS!! You won Rs.%d",q);
                        goto exi;
                        break;
                    }
                }
                case 13:
                printf("\n\n\nIn array");
                printf("\n\nA. Array Length < last index\t\tB. Array Length > last index\n\nC. Array Length = last index\t\tD. Array Length <= last index");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto thirteen;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto thirteen;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto thirteen;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto thirteen;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto thirteen;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                                printf("\n\nIn array");
                                printf("\n\nA. Array Length < last index\t\tB. Array Length > last index\n\nC. \t\t\t\t\tD. \n");
                                f_f--;
                                goto thirteen;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto thirteen;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto thirteen;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto thirteen;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    thirteen:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    if (toupper(x)=='B')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! You won Rs.%d",p);
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is B. Array Length > last index");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        printf("\n\n\t\t\tCONGRATULATIONS!! You won Rs.%d",q);
                        getch();
                        goto exi;
                        break;
                    }
                }
                case 14:
                printf("\n\n\nWhich of the following are unary operators in C?");
                printf("\n\t1.	!\n\t2.	sizeof\n\t3.	~\n\t4.	&&");
                printf("\n\nA. 1,2\t\tB. 1,3\n\nC. 2,4\t\tD. 1,2,3");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto fourteen;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto fourteen;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto fourteen;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto fourteen;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto fourteen;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                            printf("\n\nWhich of the following are unary operators in C?");
                            printf("\n\t1.	!\n\t2.	sizeof\n\t3.	~\n\t4.	&&");
                            printf("\n\nA. \t\tB. 1,3\n\nC. \t\tD. 1,2,3\n");
                            f_f--;
                            goto fourteen;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto fourteen;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto fourteen;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto fourteen;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    fourteen:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    if (toupper(x)=='D')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! You won Rs.%d",p);
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is D. 1,2,3");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        printf("\n\n\t\t\tCONGRATULATIONS!! You won Rs.%d",q);
                        getch();
                        goto exi;
                        break;
                    }
                }
                case 15:
                printf("\n\n\nIf the two strings are identical, then strcmp() function returns");
                printf("\n\nA. -1\t\tB. 1\n\nC. 0\t\tD. Yes");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto fifteen;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto fifteen;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto fifteen;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto fifteen;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto fifteen;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                                printf("\n\nIf the two strings are identical, then strcmp() function returns");
                                printf("\n\nA. \t\tB. 1\n\nC. 0\t\tD. \n");
                                f_f--;
                                goto fifteen;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto fifteen;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto fifteen;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto fifteen;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    fifteen:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    if (toupper(x)=='C')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! U won Rs.%d",p);
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is C. 0");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        printf("\n\n\t\t\tCONGRATULATIONS!! You won Rs.%d",q);
                        getch();
                        goto exi;
                        break;
                    }
                }
                //humour question
                case 16:
                printf("\n\n\nWho came first the chicken or the egg?");
                printf("\n\nA. Chicken\t\tB. Egg\n\nC. Nobody knows\t\tD. Who cares");
                printf("\n\nIf you need a lifeline press Y and if NO then N\n");
                if (toupper(getch())=='Y')
                {
                    if (neha<1 && audience<1 && f_f<1 && alt<1)
                    {
                        printf("\nYou are out of lifelines :(");
                        printf("\n\nDo you want to Quit? Press Q");
                        if(toupper(getch())== 'Q')
                        {
                            giveup();
                            goto give;
                        }
                        printf("\n\nTry it yourself");
                        goto sixteen;
                    }
                    lifeline_display();
                    switch (toupper(getch()))
                    {
                        case 'P':
                            if(neha>0)
                            {
                                neha_maam();
                                goto sixteen;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto sixteen;
                            }
                            break;
                        case 'Q':
                            if(audience>0)
                            {
                                audience_poll();
                                goto sixteen;
                            }
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto sixteen;
                            }
                            break;
                        case 'R':
                            if(f_f>0)
                            {
                                printf("\n\nWhich is the hottest planet in the solar system?");
                                printf("\n\nA. \t\t\tB. \n\nC. Nobody knows\t\tD. Who cares\n");
                                f_f--;
                                goto sixteen;
                            }
                             else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto sixteen;
                            }
                            break;
                        case 'S':
                            if(alt>0)
                                 alternate();
                            else
                            {
                                printf("\n\nYou have already used this lifeline\n");
                                goto sixteen;
                            }
                            break;
                        default :
                            printf("\n\n");
                            printf("Invalid choice!!\n");
                            goto sixteen;
                            break;
                    }
                }
                else
                {
                    printf("\nDo you want to Quit? Press Q\n");
                    if(toupper(getch())== 'Q')
                    {
                        giveup();
                        goto give;
                    }
                    sixteen:
                    printf("\nYour answer : ");
                    scanf(" %c",&x);
                    if (toupper(x)=='C')
                    {
                        printf("\n\nCorrect!!!");
                        counter++;
                        prize();
                        printf("\nCONGRATULATIONS!! You won Rs.%d",p);
                        getch();
                        quit();
                        goto out;
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is c. Nobody Knows");
                        Beep(310,320);
                        Beep(290,350);
                        Beep(270,350);
                        Beep(260,600);
                        printf("\n\n\t\t\tCONGRATULATIONS!! You won Rs.%d",q);
                        getch();
                        goto exi;
                        break;
                    }
                }
            }
        }
        exi:
            bbye();
        key:
            printf("");
        lose:
            printf("");
        out:
            printf("");
        give:
            printf("");
    return 0;
}
void bbye()
{
    system("cls");
    printf("\n\n\t\Better luck next time!!!");
    printf("\n\n\t\Thank you for playing the quiz!!!\n\n\n\n");
    Beep(275.6,600);
    Beep(306.3,400);
    Beep(334.1,500);
    Beep(282.7,400);
    Beep(315.0,600);
    Beep(324.3,400);
    Beep(367.5,400);
    Beep(408.3,1750);
}
void help()
{
        system("cls");
        printf("\n\n Instructions:");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> There are 2 rounds in this quiz:                                ");
        printf("\n >> QUALIFYING ROUND:                                               ");
        printf("\n    You will be asked 6 questions to test your general knowledge.   ");
        printf("\n    You must answer atleast 3 correct to move to the challenge round.");
        printf("\n\n >> CHALLENGE ROUND: \t\t\t\t\t\t\t\t-->For Question 1  : Rs.1000           ");
        printf("\n    You will be asked 16 questions....\t\t\t\t\t\t-->For Question 2  : Rs.2000      ");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D\t\t-->For Question 3  : Rs.3000  ");
        printf("\n    to enter your choice.\t\t\t\t\t\t\t-->For Question 4  : Rs.5000         ");
        printf("\n >> You have four lifelines :\t\t\t\t\t\t\t-->For Question 5  : Rs.10000      [MILESTONE 1]\n\t -->Neha Ma'am recommends\t\t\t\t\t\t-->For Question 6  : Rs.20000\n\t -->Audience Poll\t\t\t\t\t\t\t-->For Question 7  : Rs.40000\n\t -->50-50\t\t\t\t\t\t\t\t-->For Question 8  : Rs.80000\n\t -->Alternate Question\t\t\t\t\t\t\t-->For Question 9  : Rs.160000");
        printf("\n >> You can use each lifeline once\t\t\t\t\t\t-->For Question 10 : Rs.320000     [MILESTONE 2] ");
        printf("\n                                               \t\t\t\t\t-->For Question 11 : Rs.640000");
        printf("\n >> If you answer wrong from Question 1-5 you gain nothing\t\t\t-->For Question 12 : Rs.1250000\n >> If you answer wrong from Question 6-10 you gain 10000\t\t\t-->For Question 13 : Rs.2500000\n >> If you answer wrong from Question 11-16 you gain 320000\t\t\t-->For Question 14 : Rs.5000000");
        printf("\n >> You can Quit the game anytime!\t\t\t\t\t\t-->For Question 15 : Rs.10000000");
        printf("\n\t\t\t\t\t\t\t\t\t\t-->For Question 16 : Rs.70000000");
        printf("\n\n\t\t\t\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!\t\t\t\t\t");
}
void prize()
{
    if(counter==1)
        p=1000;
    else if(counter==2)
        p=2000;
    else if(counter==3)
        p=3000;
    else if(counter==4)
        p=5000;
    else if(counter==5)
        p=10000;
    else if(counter==6)
        p=20000;
    else if(counter==7)
        p=40000;
    else if(counter==8)
        p=80000;
    else if(counter==9)
        p=160000;
    else if(counter==10)
        p=320000;
    else if(counter==11)
        p=640000;
    else if(counter==12)
        p=1250000;
    else if(counter==13)
        p=2500000;
    else if(counter==14)
        p=5000000;
    else if(counter==15)
        p=10000000;
    else if(counter==16)
        p=70000000;
}
void lifeline_display()
{
    printf("\nLifelines: ");
        if (neha>0)
        printf("\nP - Neha ma'am recommends");
        if (audience>0)
        printf("\nQ - Audience poll");
        if (f_f>0)
        printf("\nR - 50-50");
        if (alt>0)
        printf("\nS - Alternate question");
}
void neha_maam()
{
    printf("\n\nNeha ma'am help us and bless us with the answer!!!\n");
    neha--;
}
void audience_poll()
{
    printf("\n\nAudience help us and post answers in the chat box!!!\n");
    audience--;
}
void alternate()
{
    if (j<=5)
    {
        system("cls");
        printf("\n\nWhich one of the following is a loop construct that will always be executed atleast once?");
        printf("\n\nA. while\t\tB. do while\n\nC. for\t\t\tD. switch\n");
        printf("\nYour answer : ");
        scanf(" %c",&x);
        if (toupper(x)=='B')
        {
            printf("\n\nCorrect!!!");
            counter++;
            prize();
            printf("\nCONGRATULATIONS!! You won Rs.%d",p);
            getch();
            system("cls");
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is B. do while");
            getch();
            printf("\n\n\t\t!!Better luck Next Time!!");
            getch();
            quit();
        }
    }
    else if (j>5 && j<=10)
    {
        system("cls");
        printf("\n\nWhat is the default return-type of getchar()?");
        printf("\n\nA. int\t\t\tB. char\n\nC. char*\t\tD. reading character does not require a return-type\n");
        q=10000;
        printf("\nYour answer : ");
        scanf(" %c",&x);
        if (toupper(x)=='A')
        {
            printf("\n\nCorrect!!!");
            counter++;
            prize();
            printf("\nCONGRATULATIONS!! You won Rs.%d",p);
            getch();
            system("cls");
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A. int");
            getch();
            printf("\n\n\t\t\tCONGRATULATIONS!! You won Rs.%d",q);
            getch();
            quit();
        }
    }
    else if (j>10 && j<=16)
    {
        system("cls");
        printf("\n\nDetermine output:");
        printf("\n#include<stdio.h> \nint main() \n{ \n    int a=4,b,c; \n    b = --a; \n    c = a--; \n    print : a b c""\n    return 0; \n}\n");
        printf("\n\nA. 3 3 2\t\tB. 2 3 2\n\nC. 3 2 2 \t\tD. 2 3 3\n");
        //int k;
        //char s[48] = ['p','r','i','n','t','f','(','"','%','d',' ','%','d' ,' ','%','d',' ',' %','d', ' ','%','d','"',',',' ','i','+','+', ' ','i','-','-', ' ','+','+','i',' ', '-','-','i',' ', 'i'')'';'];
        //char s[48] = "printf("%d %d %d %d %d", i++, i--, ++i, --i, i);";
        //printf("\n\nDetermine output:");
        //printf("\n\nint i=5;");
       // for (k=0; k<48; k++)
           // puts(s);
       //printf("\n\ni++, i--, ++i, --i, i");
       // printf("\n\nprintf("%d %d %d %d %d", i++, i--, ++i, --i, i);");
        //printf("\n\nprintf("")");
        //printf("\n\nA. 5 4 5 4 4\t\tB. 4 5 4 4 5\n\nC. 5 4 5 5 4 \t\tD. 5 6 6 5 5\n");
        q=320000;
        printf("\nYour answer : ");
        scanf(" %c",&x);
        if (toupper(x)=='D')
        {
            printf("\n\nCorrect!!!");
            counter++;
            prize();
            printf("\nCONGRATULATIONS!! You won Rs.%d",p);
            getch();
            system("cls");
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D. 2 3 3");
            getch();
            printf("\n\n\t\t\tCONGRATULATIONS!! You won Rs.%d",q);
            getch();
            quit();
        }
    }
    j++;
    alt--;
}
void quit()
{
    system("cls");
    printf("\n\n\t\t\tThank you for playing the quiz!!!\n\n\n\n");
    Beep(275.6,600);
    Beep(306.3,400);
    Beep(334.1,500);
    Beep(282.7,400);
    Beep(315.0,600);
    Beep(324.3,400);
    Beep(367.5,400);
    Beep(408.3,1750);
    getch();
}
void giveup()
{
    system("cls");
    if(j<2)
        printf("\n\n\n\t\t\tYou won Rs.%d",p);
    else
        printf("\n\n\n\t\t\tCONGRATULATIONS!! You won Rs.%d",p);
    printf("\n\n\t\t\tThank you for playing the quiz!!!\n\n\n\n");
    Beep(275.6,600);
    Beep(306.3,400);
    Beep(334.1,500);
    Beep(282.7,400);
    Beep(315.0,600);
    Beep(324.3,400);
    Beep(367.5,400);
    Beep(408.3,1750);
    getch();
}
