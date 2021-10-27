#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void intro(int x);
void name(int x);
int menu(int x);
void start(int x);
void help (int x);
void round_1(int x);
void round_2(int x);
void round_3(int x);
void count(int x);
void single(int x);

int main()
{
    int begining,main_menu,tips,registration,r1;

    intro(begining);
    name(registration);
    menu(main_menu);





    return 0;

}

void intro(int x)

{
    system("color af");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t   ********************\n");
    printf("\t\t\t\t\t   *                  *\n");
    printf("\t\t\t\t\t   *        QUIZ      *\n");
    printf("\t\t\t\t\t   *                  *\n");
    printf("\t\t\t\t\t   ********************\n");

    getch();
    system("cls");
}

void name(int x)
{
    system("cls");
    char player_name[20];
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t   Please Register your name : ");
    gets(player_name);
    system("cls");

}

int menu(int x)
{
    system("color a0");
        int choice,main_menu,tips,r1,stage;
        printf("\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t PLEASE READ THE INSTRUCTIONS CAREFULLY IN THE 'help' SECTION \n");
        printf("\t\t\t\t PLEASE USE ONLY NUMBERS TO TAKE ANY ACTION..\n\n");
        printf("\t\t\t\t\t To play the complete game enter 1 \n");
        printf("\t\t\t\t\t To play single stage enter 2     \n");

        printf("\t\t\t\t\t For help  enter  3     \n");



        printf("\t\t\t\t\t To quit  the game enter 4\n\n");
        printf("\t\t\t\t\t   Choose your option : ");
        scanf("%d",&choice);

    if(choice==1)
    {
        system("cls");
        round_1(r1);
    }

    if(choice==2)
    {
        system("cls");
        single(stage);
    }

    if(choice==3)
    {
        system("cls");
        help(tips);

        menu(main_menu);

    }

    if(choice==4)
    {

        return 0;

    }
    if(choice>4 || choice<=0)
    {
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t       .....Wrong input....\n");
        printf("\t\t\t\t\t       ..Please try again..\n");
        printf("\t\t\t\t\t press any key to go to the main menu");
        Beep(500,1000);
        getch();
        system("cls");
        menu(main_menu);



    }



}

void help(int x)
{
    system("color 9f");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\tHere are the rules of the game...\n");
    printf("\t\t\t\t\t1.There are 3 stages of the game.\n");
    printf("\t\t\t\t\t       *Easy  *Medium  *Hard\n");
    printf("\t\t\t\t\t2.Each stages have 5 questions but hard stage has 6 question  \n");
    printf("\t\t\t\t\t3.Each Easy question contains 3 points.\n");
    printf("\t\t\t\t\t4.Each Medium question contains 5 points.\n");
    printf("\t\t\t\t\t5.Each Hard question contains 10 points.\n");
    printf("\t\t\t\t\t6.You can only see your points after you finish each stage.\n");
    printf("\t\t\t\t\t7.You can go to the next stage if you give 3 or more correct answer.\n");
    printf("\t\t\t\t\t8.Remember the number of the correct answer of each stage.\n");
    printf("\t\t\t\t\t9.You can play single stages but you won't get any points for that.\n");
    printf("\t\t\t\t\t    ....ENJOY THE GAME...  \n");
    printf("\t\t\t\t\t press any key to go to the main menu");
    getch();
    system("cls");


}

void round_1(int x)
{

    system("cls");
    system("color df");

    int count_r1=0,i,round1,round2,round3,choice,main_menu;
    for (i=1;i<=5;i++)
    {
    system("cls");
    round1=i;

    switch(round1)
        {
            case 1:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t\t *****WELCOME TO THE FIRST ROUND*****");
                printf("\n\n\n\t\t\t\t\t\t     LOADING...");
                Sleep(2000);
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t\t Q-1: What is the old name of Dhaka city?\n\n");
                printf("\t\t\t\t\t      1.Dhaka\t\t2.Buriganga\n\n\t\t\t\t\t      3.Jahangirnagar\t4.Noakhali\n\n");

                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==3)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r1++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 3.Jahangirnagar");
                Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 2:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-2:The boy along his friends_____present the last day.\n\t\t\t\t Fill the blank with appropriate verb.");
                printf("\n\n\t\t\t\t\t      1.is  \t2.was      \n\n\t\t\t\t\t      3.were   \t4.will\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==2)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r1++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 2.was");
                Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 3:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-3:The language movement happened in_____");
                printf("\n\n\t\t\t\t\t      1.1947  \t2.1971      \n\n\t\t\t\t\t      3.1952   \t4.1969\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==3)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r1++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 3.1952 ");
                Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 4:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-4:What is the full form of USA?");
                printf("\n\n\t\t      1.United state of America  \t2.United states of America      ");
                printf("\n\n\t\t      3.Unite state of America   \t4.United states of Afganistan\n\n");
                printf("\t\t\t\t\t    Choose your option : ");
                scanf("%d",&choice);
            if(choice==2)
            {
                printf("\n\n\t\t\t\t\t     Correct Answer!!");
                count_r1++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 2.United states of America");
                Beep(500,1000);
                Sleep(2000);
                break;
            }
            case 5:
            printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-5:What is the color of our national flag?");
                printf("\n\n\t\t\t\t\t      1.Black&White  \t2.White&Blue      \n\n\t\t\t\t\t      3.Blue&Yellow   \t4.Red&Green\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==4)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r1++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 4.Red&Green");
                Beep(500,1000);
                Sleep(2000);
                break;
            }


            }

        }
        if(count_r1>=3)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\tCongratulation,You got %d correct answer.\n",count_r1);
                printf("\t\t\t\tYour point in this round is %d\n",count_r1*3);
                printf("\t\t\t\tYou are ready for the next round\n");
                Sleep(3000);
                system("cls");
                round_2(round2);

            }
            else
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\tSorry!!You are not eligible to continue the game.\n");
                printf("\t\t\t\tYou got %d correct answer.\n",count_r1);
                printf("\t\t\t\tYour point in this round is %d\n",count_r1*3);
                printf("\t\t\t\tpress any key to go to the main menu");
                Beep(700,500);Beep(700,500);Beep(700,500);
                getch();
                system("cls");
                menu(main_menu);
            }
}


void round_2(int x)
{
    system("cls");
    system("color 87");

    int count_r2=0,i,round2,round3,choice,main_menu;
    for (i=1;i<=5;i++)
    {
    system("cls");
    round2=i;

    switch(round2)
        {
            case 1:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t\t *****WELCOME TO THE SECOND ROUND*****");
                printf("\n\n\n\t\t\t\t\t\t     LOADING...");
                Sleep(2000);
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-6:What is the name of the largest ocean in the world?");
                printf("\n\n\t\t\t\t\t      1.Pacific  \t2.Atlantic      \n\n\t\t\t\t\t      3.Bay Of Bengal   4.Sindhu\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==1)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r2++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 1.Pacific");
                Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 2:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-7:Which planet did Superman come from?");
                printf("\n\n\t\t\t\t\t      1.Wakanda  \t2.Earth      \n\n\t\t\t\t\t      3.Asgard   \t4.Krypton\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==4)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r2++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 4.Krypton");
                Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 3:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-8:What chemical element is diamond made of?");
                printf("\n\n\t\t\t\t\t      1.Carbon  \t2.Gold      \n\n\t\t\t\t\t      3.Zinc   \t\t4.Calcium\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==1)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r2++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 1.Carbon");
                Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 4:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-9:What is the capital of Turkey?");
                printf("\n\n\t\t\t\t\t      1.Ankara  \t2.Istambul      \n\n\t\t\t\t\t      3.New York   \t4.Venice\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==1)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r2++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 1.Ankara");
                Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 5:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-10:What is the standard unit of distance in the metric system?");
                printf("\n\n\t\t\t\t\t      1.kilo meter  \t2.Meter      \n\n\t\t\t\t\t      3.Inch   \t\t4.Feet\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==2)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r2++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 2.Meter");
                Beep(500,1000);
                Sleep(2000);
                break;
            }
        }

    }
    if(count_r2>=3)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\tCongratulation,You got %d correct answer.\n",count_r2);
                printf("\t\t\t\tYour point in this round is %d\n",count_r2*5);
                printf("\t\t\t\tYou are ready for the next round\n");
                Sleep(3000);
                system("cls");
                round_3(round3);


            }
            else
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\tSorry!!You are not eligible to continue the game.\n");
                printf("\t\t\t\tYou got %d correct answer.\n",count_r2);
                printf("\t\t\t\tYour point in this round is %d\n",count_r2*5);
                printf("\t\t\t\tpress any key to go to the main menu");
                Beep(700,500);
                getch();
                system("cls");
                menu(main_menu);
            }
}

void round_3(int x)
{
    system("cls");
    system("color cf");

    int count_r3=0,i,round3,choice,main_menu;
    for (i=1;i<=6;i++)
    {
    system("cls");
    round3=i;

    switch(round3)
        {
            case 1:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t\t *****WELCOME TO THE FINAL ROUND*****");
                printf("\n\n\n\t\t\t\t\t\t     LOADING...");
                Sleep(2000);
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-11:A is the father of B. But B is not the son of A. How is that possible?");
                printf("\n\n\t\t\t\t\t      1.A is the son  \t\t2.B is the daughter      \n\n\t\t\t\t\t      3.B is the mother   \t4.None of them\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==2)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r3++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 2.B is the daughter");
		Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 2:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-12.If you had only one match, and entered a dark room containing\n\t\t\t\t an oil lamp, some newspaper, and some kindling wood,\n\t\t\t\t which would you light first?");
                printf("\n\n\t\t\t\t\t      1.Candle  \t\t2.Oil Lamp      \n\n\t\t\t\t\t      3.kindling Wood   \t4.The match\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==4)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r3++;
               Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 4.The match");
		Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 3:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-12.Some months have 31 days, others have 30 days.\n\t\t\t\t How many have 28 days");
                printf("\n\n\t\t\t\t\t      1.1  \t2.0      \n\n\t\t\t\t\t      3.6   \t4.12\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==4)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r3++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 4.12");
		Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 4:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-14.How many times can you subtract 10 from 100?");
                printf("\n\n\t\t\t\t\t      1.1  \t2.10      \n\n\t\t\t\t\t      3.20   \t4.2\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==1)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r3++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 1.1");
		Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 5:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-15.How many times does the alphabet 'a' appear from 0-100?");
                printf("\n\n\t\t\t\t\t      1.0  \t2.125      \n\n\t\t\t\t\t      3.75   \t4.10\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==1)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r3++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 1.0");
		Beep(500,1000);
                Sleep(2000);
                break;

            }
            case 6:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-16: If there are 6 apples and you take away 4, how many do you have?");
                printf("\n\n\t\t\t\t\t      1.4  \t2.2      \n\n\t\t\t\t\t      3.6   \t4.none\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==1)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r3++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 1.4");
		Beep(500,1000);
                Sleep(2000);
                break;
            }



        }
    }
    if(count_r3>=3)
            {
                int choice;
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\tCongratulation,You have completed all the stages.\n");
                printf("\t\t\t\tYou got %d correct answer.\n",count_r3);
                printf("\t\t\t\tYour point in this round is %d\n",count_r3*10);
                printf("\t\t\t\tDo you want to know your total points?\n");
                printf("\t\t\t\t1.Yes\n\t\t\t\t2.No\n");
                printf("\t\t\t\tChoose your option : ");
                scanf("%d",&choice);
                    if(choice==1)
                    {
                        int num1,num2,num3,main_menu;
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\n");
                        printf("\t\t\t\tEnter the number of correct answers (stage1) : ");
                        scanf("%d",&num1);
                        printf("\t\t\t\tEnter the number of correct answers (stage2) : ");
                        scanf("%d",&num2);
                        printf("\t\t\t\tEnter the number of correct answers (stage3) : ");
                        scanf("%d",&num3);

                        Sleep(1000);
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\n");
                        printf("\t\t\t\tYour total point is %d out of 100",num1*3+num2*5+num3*10);

                        printf("\n\n\n\n\n\t\t\t\t   ....THANK YOU FOR PLAYING THE GAME......");
                        getch();
                        system("cls");
                        menu(main_menu);

                    }

                    else if(choice==2)
                    {
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\n");
                        printf("\t\t\t\t  ....THANK YOU FOR PLAYING THE GAME......");
                        getch();
                        system("cls");
                        menu(main_menu);
                    }




            }
            else
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\tSorry!!You have failed to pass the final round.\n");

                printf("\t\t\t\tYou got %d correct answer.\n",count_r3);
                printf("\t\t\t\tYour point in this round is %d\n",count_r3*10);
                printf("\t\t\t\tBetter luck next time.\n");
                printf("\t\t\t\tpress any key to go to the main menu");
                Beep(700,500);Beep(700,500);Beep(700,1500);
                getch();
                system("cls");
                menu(main_menu);
            }






}

void single(int x)
{
    int choice,r1,r2,r3;
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\tTo play Easy Stage enter 1\n");
    printf("\t\t\t\t\t\tTo play Medium Stage enter 2\n");
    printf("\t\t\t\t\t\tTo play Hard Stage enter 3\n");
    printf("\t\t\t\t\t\tTo go to the main menu enter 4\n");
    printf("\t\t\t\t\t\tChoose your option : ");
    scanf("%d", &choice);
    if(choice==1)
    {
        system("cls");
        system("color df");

    int count_r1=0,i,round1,round2,round3,choice,main_menu;
    for (i=1;i<=5;i++)
    {
    system("cls");
    round1=i;

    switch(round1)
        {
            case 1:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t\t *****WELCOME TO THE FIRST ROUND*****");
                printf("\n\n\n\t\t\t\t\t\t     LOADING...");
                Sleep(2000);
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t\t Q-1: What is the old name of Dhaka city?\n\n");
                printf("\t\t\t\t\t      1.Dhaka\t\t2.Buriganga\n\n\t\t\t\t\t      3.Jahangirnagar\t4.Noakhali\n\n");

                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==3)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r1++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 3.Jahangirnagar");
                Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 2:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-2:The boy along his friends_____present the last day.\n\t\t\t\t Fill the blank with appropriate verb.");
                printf("\n\n\t\t\t\t\t      1.is  \t2.was      \n\n\t\t\t\t\t      3.were   \t4.will\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==2)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r1++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 2.was");
                Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 3:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-3:The language movement happened in_____");
                printf("\n\n\t\t\t\t\t      1.1947  \t2.1971      \n\n\t\t\t\t\t      3.1952   \t4.1969\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==3)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r1++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 3.1952 ");
                Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 4:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-4:What is the full form of USA?");
                printf("\n\n\t\t      1.United state of America  \t2.United states of America      ");
                printf("\n\n\t\t      3.Unite state of America   \t4.United states of Afganistan\n\n");
                printf("\t\t\t\t\t    Choose your option : ");
                scanf("%d",&choice);
            if(choice==2)
            {
                printf("\n\n\t\t\t\t\t     Correct Answer!!");
                count_r1++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 2.United states of America");
                Beep(500,1000);
                Sleep(2000);
                break;
            }
            case 5:
            printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-5:What is the color of our national flag?");
                printf("\n\n\t\t\t\t\t      1.Black&White  \t2.White&Blue      \n\n\t\t\t\t\t      3.Blue&Yellow   \t4.Red&Green\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==4)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r1++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 4.Red&Green");
                Beep(500,1000);
                Sleep(2000);
                break;
            }


            }

        }
        if(count_r1>=3)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\tCongratulation,You got %d correct answer.\n",count_r1);

                printf("\t\t\t\tpress any key to go to the main menu");
                getch();
                system("cls");
                menu(main_menu);

            }
            else
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\tSorry!!You are not eligible to continue the game.\n");
                printf("\t\t\t\tYou got %d correct answer.\n",count_r1);

                printf("\t\t\t\tpress any key to go to the main menu");
                Beep(700,500);Beep(700,500);Beep(700,500);
                getch();
                system("cls");
                menu(main_menu);
            }
    }

    else if(choice==2)

    {
        system("cls");
        system("color 87");

    int count_r2=0,i,round2,round3,choice,main_menu;
    for (i=1;i<=5;i++)
    {
    system("cls");
    round2=i;

    switch(round2)
        {
            case 1:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t\t *****WELCOME TO THE SECOND ROUND*****");
                printf("\n\n\n\t\t\t\t\t\t     LOADING...");
                Sleep(2000);
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-6:What is the name of the largest ocean in the world?");
                printf("\n\n\t\t\t\t\t      1.Pacific  \t2.Atlantic      \n\n\t\t\t\t\t      3.Bay Of Bengal   4.Sindhu\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==1)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r2++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 1.Pacific");
                Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 2:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-7:Which planet did Superman come from?");
                printf("\n\n\t\t\t\t\t      1.Wakanda  \t2.Earth      \n\n\t\t\t\t\t      3.Asgard   \t4.Krypton\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==4)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r2++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 4.Krypton");
                Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 3:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-8:What chemical element is diamond made of?");
                printf("\n\n\t\t\t\t\t      1.Carbon  \t2.Gold      \n\n\t\t\t\t\t      3.Zinc   \t\t4.Calcium\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==1)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r2++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 1.Carbon");
                Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 4:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-9:What is the capital of Turkey?");
                printf("\n\n\t\t\t\t\t      1.Ankara  \t2.Istambul      \n\n\t\t\t\t\t      3.New York   \t4.Venice\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==1)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r2++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 1.Ankara");
                Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 5:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-10:What is the standard unit of distance in the metric system?");
                printf("\n\n\t\t\t\t\t      1.kilo meter  \t2.Meter      \n\n\t\t\t\t\t      3.Inch   \t\t4.Feet\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==2)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 2.Meter");
                Beep(500,1000);
                Sleep(2000);
                break;
            }
        }

    }
    if(count_r2>=3)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\tCongratulation,You got %d correct answer.\n",count_r2);

                printf("\t\t\t\tpress any key to go to the main menu");
                getch();
                system("cls");
                menu(main_menu);


            }
            else
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\tSorry!!You are not eligible to continue the game.\n");
                printf("\t\t\t\tYou got %d correct answer.\n",count_r2);

                printf("\t\t\t\tpress any key to go to the main menu");
                Beep(700,500);
                getch();
                system("cls");
                menu(main_menu);
            }
    }

    else if(choice==3)
    {
        system("cls");
        system("color cf");

    int count_r3=0,i,round3,choice,main_menu;
    for (i=1;i<=6;i++)
    {
    system("cls");
    round3=i;

    switch(round3)
        {
            case 1:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t\t *****WELCOME TO THE FINAL ROUND*****");
                printf("\n\n\n\t\t\t\t\t\t     LOADING...");
                Sleep(2000);
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-11:A is the father of B. But B is not the son of A. How is that possible?");
                printf("\n\n\t\t\t\t\t      1.A is the son  \t\t2.B is the daughter      \n\n\t\t\t\t\t      3.B is the mother   \t4.None of them\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==2)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r3++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 2.B is the daughter");
		Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 2:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-12.If you had only one match, and entered a dark room containing\n\t\t\t\t an oil lamp, some newspaper, and some kindling wood,\n\t\t\t\t which would you light first?");
                printf("\n\n\t\t\t\t\t      1.Candle  \t\t2.Oil Lamp      \n\n\t\t\t\t\t      3.kindling Wood   \t4.The match\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==4)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r3++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 4.The match");
		Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 3:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-12.Some months have 31 days, others have 30 days.\n\t\t\t\t How many have 28 days");
                printf("\n\n\t\t\t\t\t      1.1  \t2.0      \n\n\t\t\t\t\t      3.6   \t4.12\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==4)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r3++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 4.12");
		Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 4:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-14.How many times can you subtract 10 from 100?");
                printf("\n\n\t\t\t\t\t      1.1  \t2.10      \n\n\t\t\t\t\t      3.20   \t4.2\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==1)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r3++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 1.1");
		Beep(500,1000);
                Sleep(2000);
                break;
            }

            case 5:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-15.How many times does the alphabet 'a' appear from 0-100?");
                printf("\n\n\t\t\t\t\t      1.0  \t2.125      \n\n\t\t\t\t\t      3.75   \t4.10\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==1)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r3++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 1.0");
		Beep(500,1000);
                Sleep(2000);
                break;

            }
            case 6:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t Q-16: If there are 6 apples and you take away 4, how many do you have?");
                printf("\n\n\t\t\t\t\t      1.4  \t2.2      \n\n\t\t\t\t\t      3.6   \t4.none\n\n");
                printf("\t\t\t\t\t      Choose your option : ");
                scanf("%d",&choice);
            if(choice==1)
            {
                printf("\n\n\t\t\t\t\t      Correct Answer!!");
                count_r3++;
                Sleep(2000);
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 1.4");
		Beep(500,1000);
                Sleep(2000);
                break;
            }



        }
    }
    if(count_r3>=3)
            {

                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\tCongratulation,You got %d correct answer.\n",count_r3);

                printf("\t\t\t\tpress any key to go to the main menu");
                getch();
                system("cls");
                menu(main_menu);




            }
            else
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\tSorry!!You have failed to pass the final round.\n");

                printf("\t\t\t\tYou got %d correct answer.\n",count_r3);

                printf("\t\t\t\tBetter luck next time.\n");
                printf("\t\t\t\tpress any key to go to the main menu");
                Beep(700,500);Beep(700,500);Beep(700,1500);
                getch();
                system("cls");
                menu(main_menu);
            }

    }

    else if(choice==4)
    {
        int main_menu;
        system("cls");
        menu(main_menu);
    }
    else
    {
        int main_menu;
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t       .....Wrong input....\n");
        printf("\t\t\t\t\t       ..Please try again..\n");
        printf("\t\t\t\t\t press any key to go to the main menu");
        Beep(500,1000);
        getch();
        system("cls");
        menu(main_menu);
    }


}





