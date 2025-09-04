#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#define Enter 13

struct login
{
    char user[30];
    char pass[30];
}me;

void come();
void quiz();
int id();
void gotoxy(int ,int);
void code();
void main()
{
    come();
    quiz();
    printf("\n \t \t \t \t \t         _______________________________________ \n");
    printf("\n \t                                             :::: Press any key to LOGIN ::::  \n");
    getch();
    system("cls");
    id();
    system("cls");
   char questions[][200]=
        {"\n \n                             1.What year did the C language debut?:",
        "\n  \n                             2.Who is credited with creating C?:",
        "\n  \n                             3.What is the predecessor of C?:",
        "\n  \n                             4.What is the keyboard used to declare C file pointer?:",
        "\n  \n                             5.Which of the following are not standard header file in C?:",
        "\n  \n                             6.Which of the following share a similarity in syntax?:\n \n    \t \t \t \t 1. Union\t   2. Structure \n \t \t \t \t 3. Array\t   4. pointers",
        "\n \n                              7.What is the value of a?:\n \n                                 int a= 10+4.867",
        "\n \n                              8.Operator % in C language is called?:",
        "\n \n                              9.In order to fetch the address of the variable which sign we write precending before variable name?:",
        "\n \n                             10.Which of the following is an example of non linear data type?:",
        "\n \n                             11.Queue data structure works on the principle of?:",
        "\n \n                             12.What are the elements present in the array of the following C code?:\n    \n                                  int array[5]={5}",
        "\n \n                             13.Which function you can use to print in a file?:",
        "\n \n                             14.Which function is used to dynamically allocated the memory?:",
        "\n \n                             15.Which header file we should include to use the strlen() function?:" };

  char options[][200]=
          {
           "\n \t \t \t \t  A. 1969","\n \t \t \t \t  B. 1972","\n \t \t \t \t  C. 1975","\n \t \t \t \t  D. 1999",
           "\n \t \t \t \t  A. Dennis Ritchie","\n \t \t \t \t  B. Nikola Tesla","\n \t \t \t \t  C. John Carmack","\n \t \t \t \t  D. Doc Brown",
           "\n \t \t \t \t  A. Objective C","\n \t \t \t \t  B. B","\n \t \t \t \t  C. C++","\n \t \t \t \t  D. C#",
           "\n \t \t \t \t  A. filefp","\n \t \t \t \t  B. FILEFP","\n \t \t \t \t  C. FILE","\n \t \t \t \t  D. file",
           "\n \t \t \t \t  A. stdlib.h","\n \t \t \t \t  B. stdio.h","\n \t \t \t \t  C. conio.h","\n \t \t \t \t  D. None of these",
           "\n \t \t \t \t  A. 3 And 4","\n \t \t \t \t  B. 1 And 2","\n \t \t \t \t  C. 1 And 3","\n \t \t \t \t  D. 1,3 And 4",
           "\n \t \t \t \t  A. a=10","\n \t \t \t \t  B. a=14.867","\n \t \t \t \t  C. a=14","\n \t \t \t \t  D. Compiler error",
           "\n \t \t \t \t  A. Percentage Operator","\n \t \t \t \t  B. Quotient Operator","\n \t \t \t \t  C. Modulus","\n \t \t \t \t  D. division",
           "\n \t \t \t \t  A. Percent(%)","\n \t \t \t \t  B. Comma(,)","\n \t \t \t \t  C. Ampersand(&)","\n \t \t \t \t  D. Asterisk(*)",
           "\n \t \t \t \t  A. Tree","\n \t \t \t \t  B. Array","\n \t \t \t \t  C. Queue","\n \t \t \t \t  D. Linked List",
           "\n \t \t \t \t  A. Last In First Out (LIFO)","\n \t \t \t \t  B. Firt In Last Out (FILO)","\n \t \t \t \t  C. First In First Out (FIFO)","\n \t \t \t \t  D. Last In Last Out (LILO)",
           "\n \t \t \t \t  A. 5,5,5,5,5","\n \t \t \t \t  B. 5,0,0,0,0","\n \t \t \t \t  C. 5,(garbage),(garbage),(garbage),(garbage)","\n \t \t \t \t  D. None of these",
           "\n \t \t \t \t  A. printf","\n \t \t \t \t  B. print","\n \t \t \t \t  C. fprintf","\n \t \t \t \t  D. fopen",
           "\n \t \t \t \t  A. malloc()","\n \t \t \t \t  B. calloc()","\n \t \t \t \t  C. realloc()","\n \t \t \t \t  D. All of the above",
           "\n \t \t \t \t  A. stdio.h","\n \t \t \t \t  B. ctype.h","\n \t \t \t \t  C. string.h","\n \t \t \t \t  D. window.h"
           };
  char answers[20]={'B','A','B','C','D','B','C','C','C','A','C','B','C','D','C'};
  int numberofquestions= sizeof(questions)/sizeof(questions[0]);
  char guess,ch;
  int score=0;
  int i,j,d=1020;
  system("cls");
  printf(" \n \n \t < - - -\t*****************\t|| Let's Start Quiz ||\*****************\t- - -  > \n");
  for(i=0;i<numberofquestions;i++)
  {
  printf("%s\n",questions[i]);

  for(j=(i*4);j<(i*4)+4;j++)
  {
  printf("%s\n",options[j]);
  }
  printf(" \n \n                                  Your Answer : ");
  scanf("%c\n",&guess);
  scanf("%c");
  guess=toupper(guess);

  if(guess==answers[i])
  {

    printf("\n \n \t                              ==== :: Congratulation :: ====  \n");
    printf("\n \t                    ---------------- Your Answer is Correct :  ------------- \n");
  Sleep(d);
  system("cls");
  score++;
  }
  else
  {

    printf("\n \n \t                               ==== :: Sorry :: ====  \n");
    printf("\n \t                  ---------------- Your Answer is Wrong :  ------------- \n");
  Sleep(d);
  system("cls");
  }
  }
    printf(" \t    \n                                   _______________________________________ \n");
    printf("\n \t                                 [ Your Final Score is : %d/%d ]\n ",score,numberofquestions);
    printf("\t                           _______________________________________\n");
    printf("\n \n \t                    Do you want to see Code of the Program ? ( y/n ):");
           ch=getche();
           if(ch=='y')
           {
           system("cls");
           code();
           }
          else
          system("cls");
        printf("\n \n \t                                         ------>  BCA 2nd Semester \n");
        printf("\n \t                               ----------------  : MADE BY :  ------------- \n");
        gotoxy(41,6);
        printf("_______________________________________ ");
        gotoxy(41,7);
        printf("_______________________________________ \n");
        gotoxy(47,9);
        printf("1. Nitya Nandani (Leader)");
        gotoxy(47,10);
        printf("2. Kalindee");
        gotoxy(47,11);
        printf("3. Nikky Kumari");
        gotoxy(47,12);
        printf("4. Supriya Kumari");
        printf("\n \t \t \t \t \t  -----------------------------------------\n");
        printf("\n \t                                       [ THANK YOU for Playing. ] \n");
        printf("\n \t \t \t \t \t  -----------------------------------------\n");
          exit(0);
    }
void come()
{
    int s=0,d=1000;
    while(s<1)
    {
        s++;
        system("cls");
        printf("\n \n \t  \t                                 ==========================================");
        printf("\n       \t                                             [ WELCOME  TO  OUR  PROJECT  ON ]\n");
        Sleep(d);
    }
}
void quiz()
    {
    int s=0,d=1000;
    while(s<1)
    {
        s++;
        printf("\n \n \t \t \t \t ========================= :( Quiz Competition ): =========================\t \n \n");
        Sleep(d);
    }
}
int id()
{
struct login me;
FILE *fp;
fp=fopen("pass_id.txt","r");
char ID[30],pswd[30],ch;
char ps1;
int i=0;
userid:
printf("\n \t             \n    \t          ::: ========  ======  ======= || Login || =======  =======  ====== :::\n");
fscanf(fp,"%s%s",me.user,me.pass);
gotoxy(35,4);
printf("------------------------------------- ");
printf("\n    \n                       \t                 >>>> Enter User Id :  ");
gets(ID);
password:
if(stricmp(ID,me.user)==0)
{
    printf("\n  \n                   \t                >>>> Enter Password :  ");
    fflush(stdin);
}
else
{
    printf("\n  \n  \t                                !! Invalid ID !!\n ");
    printf("\n Do You want to try again ? \n \n Press 'y' for yes or 'n' for no   ");
    ps1=getche();
    system("cls");
    if(ps1=='y')
    {
        goto userid;
    }
    else
    {
        exit(0);
    }
}
while((ch=getch())!=Enter)
{
    pswd[i]=ch;
    i++;
    printf("*");
}
pswd[i]='\0';
if(strcmp(pswd,me.pass)==0)
{
gotoxy(35,10);
printf("------------------------------------- ");
printf("\n \n \t                                -----------------------------");
printf("\n                                         ::: Login Successfully  :::");
printf("\n \t                                -----------------------------\n");
printf("\n \n      =========================== :::: Press any key for continue :  ");
getch();
}
else
{
    printf("\n  \n \t                                !! Wrong Password  !!");
    printf("\n Do You want to try again ? \n \n Press 'y' for yes or 'n' for no    ");
    ps1=getche();
    system("cls");
    if(ps1=='y')
    {
        goto password;
    }
    else
    {
        exit(0);
    }
}
return 0;
}
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void code()
{
    FILE *fp;
    fp=fopen("nityaPro.txt","r");
    if(fp==NULL)
    {
        printf("Error");
    }
    printf(" \n \n             *********************|| Code of this Program is ||************************** \n \n");
    char c;
    while((c=fgetc(fp))!=EOF)
    putchar(c);
    printf("\n \t =====================>>>>>>>>>>>>>>>>>>>>>  Press any key for Exit : ");
    getch();
     system("cls");
        printf("\n \n \t                                         ------>  BCA 2nd Semester \n");
        printf("\n \t                               ----------------  : MADE BY :  ------------- \n");
        gotoxy(41,6);
        printf("_______________________________________ ");
        gotoxy(41,7);
        printf("_______________________________________ \n");
        gotoxy(47,9);
        printf("1. Nitya Nandani (Leader)");
        gotoxy(47,10);
        printf("2. Kalindee");
        gotoxy(47,11);
        printf("3. Nikky Kumari");
        gotoxy(47,12);
        printf("4. Supriya Kumari");
        printf("\n \t \t \t \t \t  -----------------------------------------\n");
        printf("\n \t                                       [ THANK YOU for Playing. ] \n");
        printf("\n \t \t \t \t \t  -----------------------------------------\n");
          exit(0);
}



