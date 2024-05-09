
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int  Menu(void);
//int  Again(void);
int decide=1;
long double  algo_1(long double input_1);
long double  algo_2(long double input_2);
long double  algo_3(long double input_3);
long double  algo_4(long double input_4);
long double  algo_5(long double input_5);
long double  algo_6(long double input_6);
int main()
{                                                   do{

    printf("Ok,Welcome to the World of algorithm.\n");
    printf("Let's choose one method you want.\n");
    int CHOOSE;
    Start: CHOOSE=Menu();
    switch(CHOOSE)
    {
        case 0 :
            {
                return 0;//此处效果存疑？
            }
        case 1 :
            {   printf("The algotithm you Choose is\n");
                printf("");//The name of algorithm .
                algo_1(0);
                break;
            }
        case 2 :
            {   printf("The algotithm you Choose is\n");
                printf("");//The name of algorithm .
                algo_2(0);
                break;
            }
        case 3 :
            {   printf("The algotithm you Choose is\n");
                printf("");//The name of algorithm .
                algo_3(0);
                break;
            }
        case 4 :
            {   printf("The algotithm you Choose is\n");
                printf("");//The name of algorithm .
                algo_4(0);
                break;
            }
        case 5 :
            {   printf("The algotithm you Choose is\n");
                printf("");//The name of algorithm .
                algo_5(0);
                break;
            }
        case 6 :
            {   printf("The algotithm you Choose is\n");
                printf("");//The name of algorithm .
                algo_6(0);
                break;
            }
        default:
            {
                printf("Illegal number !!!\n");
                printf("We shall do it again.\n");
                goto Start;
            }

    }
    char input;
    printf("If you want try other algorithm,please input Y.\n");
    printf("If not,please input N.\n");
    printf("Input:");
    getchar();
    scanf("%c",&input);
    if(input=='Y')
    {
        printf("let's try again !\n");
        decide=1;
    }
    if(input=='N')
    {
        printf("Thanks for your using.\n");
        decide=0;
    }
                                            }while(decide==1);
    return 0;
}
//function of showing the Menu
int  Menu(void)
{
    int choose;
    printf("\n");
    printf("\n");
    printf("    //**********//    \n");
    printf("    0.Exit            \n");
    printf("    1.Exchange Sort   \n");
    printf("    2.Selection Sort  \n");
    printf("    3.Bubble Sort     \n");
    printf("    4.Insertion Sort  \n");
    printf("    5.linear Search   \n");
    printf("    6.Binary Search   \n");
    printf("    //**********//    \n");
    printf("\n");
    printf("\n");
    printf("    print the algorithm you want:");
    scanf("%d",&choose);
    return choose;
}

/*
//function of re-run the program again
int  Again(void)
{   char input;
    printf("If you want try other algorithm,please input Y.\n");
    printf("If not,please input N.\n");
    pinrtf("Input:");
    scanf("%c",&input);
    if(input=='Y')
    {
        goto Start;
        //这里之后要改进，goto会导致在again处嵌套其他主要功能。
        //failed method
    }
    if(input=='N')
    {
        return 0;
    }
    return 0;
}
*/

//1 function of algorithm 1 : Exchange Sort
long double  algo_1(long double input_1)
{
    printf("This algorithm is Exchange Sort\n");
}
//2
long double  algo_2(long double input_2)
{
    printf("This algorithm is Selection Sort\n");
}
//3
long double  algo_3(long double input_3)
{
    printf("This algorithm is Bubble Sort\n");
}
//4
long double  algo_4(long double input_4)
{
    printf("This algorithm is Insertion Sort\n");
}
//5
long double  algo_5(long double input_5)
{
    printf("This algorithm is linear Search\n");
}
//6
long double  algo_6(long double input_6)
{
    printf("This algorithm is Binary Search\n");
}


//Version 0.1 2024.5.10
/*
build the frame of this project.
*/
