#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
using namespace std;

struct node
{
int data;
node *next;
node *snake;
node *ladder;
}*p,*p1,*p2,*head,*tail;


void initialize()
{
head=NULL;
tail=NULL;
for(int i=1;i<=100;i++)
{
p=new node;
p->data=i;
if(head==NULL)
{
head=p;
tail=p;
tail->next=NULL;
p->snake=NULL;
p->ladder=NULL;
}
else
{
tail->next=p;
tail=p;
p->snake=NULL;
p->ladder=NULL;
}
}
}


void print_initialize()
{
system("cls");
cout<<"\t\t\tThe Layout of the Game Matrix is:\n\n\n\t";
p=head;
while(p!=NULL)
{
if(p->data%10==0)
{cout<<"\n";}
cout<<p->data<<"\t";
p=p->next;
}
}


void form_snake(int o,int t)
{
for(p1=head;p1->data!=o;p1=p1->next)
{}
for(p2=head;p2->data!=t;p2=p2->next)
{}
p1->snake=p2;
}


void form_ladder(int o,int t)
{
for(p1=head;p1->data!=o;p1=p1->next)
{}
for(p2=head;p2->data!=t;p2=p2->next)

{}
p1->ladder=p2;
}


void check_snake()
{

cout<<"\n\nThe position of the snakes are:\n";
for(p1=head;p1!=NULL;p1=p1->next)
{
if(p1->snake!=NULL)
cout<<endl<<p1->data<<"->>>"<<p1->snake->data<<endl;
}
}


void check_ladder()
{
cout<<"The position of the ladders are:\n";
for(p1=head;p1!=NULL;p1=p1->next)
{
if(p1->ladder!=NULL)
cout<<endl<<p1->data<<"->>>"<<p1->ladder->data<<endl;
}
}

int b1=0,s1=0,b2=0,s2=0;

int bite_count_p2()
{
    ++b2;return (b2);
}
int ladder_count_p2()
{
    ++s2;return (s2);
}


int bite_count_p1()
{
    ++b1;return (b1);
}
int ladder_count_p1()
{
    ++s1;return (s1);
}


void p1_chance()
{
int num;
l1:num=rand();
if(num>6 || num<=0)
goto l1;
cout<<"The outcome of the dice for PLAYER 1 is ->>"<<num<<endl;
while(num>0 && p1!=NULL && p1->data!=100)
{
num--;
p1=p1->next;
}
if(p1->snake!=NULL)
{
   p1=p1->snake;
   printf("\n\n---OOPS SNAKE BITE PLAYER 1---\n\n");
   system("color 43");
   bite_count_p1();
}

else if(p1->ladder!=NULL)
{
    p1=p1->ladder;
    printf("\n\n--- YAHOO!!STEPPING UP PLAYER 1 ---\n\n");
    system("color 34");
    ladder_count_p1();
}
else
{
    system("color 70");
}

}


void p2_chance()
{
int num;
l1:num=rand();
if(num>6 || num==0)
goto l1;
cout<<"The outcome of the dice for PLAYER 2 is ->>"<<num<<endl;
while(num>0 && p2!=NULL && p2->data!=100)
{
num--;
p2=p2->next;
}

if(p2->snake!=NULL)
{
    p2=p2->snake;
    printf("\n\n--- OOPS SNAKE BITE PLAYER 2 ---\n\n");
    system("color 43");
    bite_count_p2();

}

else if(p2->ladder!=NULL)
{
    p2=p2->ladder;
    printf("\n\n--YAHOO!!STEPPING UP PLAYER 2--\n\n");
    system("color 34");
    ladder_count_p2();
}
else
{
    system("color 80");
}

}


void homepage()
{

cout<<endl<<endl<<"\t\tWelcome";Sleep(500);cout<<" to";Sleep(500);cout<<" an";
Sleep(500);cout<<" Interactive";Sleep(500);cout<<" Snake";
Sleep(500);cout<<" Game";Sleep(500);cout<<" Using ";Sleep(500);
cout<<" Linked List";Sleep(500);
cout<<endl;
cout<<"\t\t     @_@"<<endl;
for(int i=0;i<5;i++)
{
for(int j=i;j<20;j++)
cout<<" ";
cout<<"^^^^"<<endl;
Sleep(100);
}
for(int i=15;i<20;i++)
{
for(int j=i;j>0;j--)
cout<<" ";
cout<<"^^^^"<<endl;
Sleep(100);
}
for(int i=0;i<5;i++)
{
for(int j=i;j<20;j++)
cout<<" ";
cout<<"^^^^"<<endl;
Sleep(100);
}
for(int i=0;i<10;i++)
{
cout<<"\t\t\t\t|--|"<<endl;
Sleep(100);
}
cout<<"Project By:-"<<endl<<endl;
Sleep(500);
cout<<"\tShubham Kumar"<<endl<<endl;
Sleep(500);
cout<<"------------------------------------------------------------------"<<endl<<endl;
Sleep(500);
}

void current_status()
{
cout<<endl;
for(p=head;p!=NULL;p=p->next)
{cout<<"\t";
if(p->data/10==0)
{
cout<<p->data;
}
else
{
cout<<p->data;
}
if(p1->data==p->data)
cout<<"[p1]";
if(p->data%10==int())
cout<<endl;
if(p2->data==p->data)
cout<<"[p2]";
}
}



void result_p1(const char* player1)
{
    system("color B0");
    cout<<"\n\n\t\t\t\t\t"<<player1<<" WINS!!\n\n";

}
void result_p2(const char* player2)
{
    system("color B0");
    cout<<"\n\n\t\t\t\t\t"<<player2<<" WINS!!\n\n";

}


void easy()
{
    form_ladder(6,33);
    form_ladder(16,24);
    form_ladder(21,44);
    form_ladder(35,66);
    form_snake(37,19);
    form_snake(89,54);
}

void medium()
{
    form_ladder(6,33);
    form_ladder(16,24);
    form_ladder(78,96);
    form_ladder(42,74);
    form_snake(63,25);
    form_snake(77,34);
    form_snake(89,54);
    form_snake(51,3);

}
void hard()
{
    form_ladder(35,66);
    form_ladder(78,96);
    form_ladder(3,45);
    form_snake(48,11);
    form_snake(63,25);
    form_snake(77,34);
    form_snake(89,54);
    form_snake(96,43);
    form_snake(55,21);
    form_snake(91,1);
    form_snake(11,4);
    form_snake(80,61);

}
void chance(int i)
{
    if(i%2==0)
    {
    system("cls");
    p1_chance();
    current_status();
    getch();
    }

    else
    {
    system("cls");
    p2_chance();
    current_status();
    getch();
    }
}


int main()
{
system("color E0");
char player1[50],player2[50];
homepage();
getch();
string another_game;
int p1_score=0,p2_score=0;
int num_game=0;

system("cls");
cout<<"\n\n\n\n\n\t\t\t\tEnter the name of player 1:-";
gets(player1);
cout<<endl<<endl;
cout<<"\t\t\t\tEnter the name player 2:-";
gets(player2);
do
{

initialize();
print_initialize();
getch();
system("cls");
int level;
cout<<"\n\n\n\t\t\t\tEnter the level of your game:-\n\t\t\t\t1.Easy\n\t\t\t\t2.medium\n\t\t\t\t3.hard\n\n\n";
cout<<"LEVEL: ";
cin>>level;
switch(level)
{
    case 1:easy();
           break;
    case 2:medium();
           break;
    case 3:hard();
           break;
}
system("cls");

check_ladder();
check_snake();
getch();
system("cls");
cout<<"\t\t"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t Let the game begin";
getch();
int i;
int c1=0,c2=0;
for(i=0,p1=head,p2=head;
p1->next!=NULL,p2->next!=NULL,p1->data!=100,p2->data!=100;
i++)
{

    chance(i);

    if (p1->data==100 or p1->next==NULL)
    {
        result_p1(player1);
        p1_score++;
        break;
    }
    else if (p2->data==100 or p2->next==NULL)
    {
        result_p2(player2);
        p2_score++;
        break;
    }
    else
    {
        continue;
    }

}
int k1,j1,k2,j2;
k1=bite_count_p1()-1;
j1=ladder_count_p1()-1;
k2=bite_count_p2()-1;
j2=ladder_count_p2()-1;
getch();
system("cls");
cout<<"\n\n\n\n\n"<<endl;
cout<<"\t\t\t\tThe player1 was bitten by the snake "<<k1<<" time"<<endl;
cout<<"\t\t\t\tThe player1 used the ladder "<<j1<<" time"<<endl;
cout<<"\n\n\n\n"<<endl;
cout<<"\t\t\t\tThe player2 was bitten by the snake "<<k2<<" time"<<endl;
cout<<"\t\t\t\tThe player2 used the ladder "<<j2<<" time"<<endl;
cout<<"\n\n\n"<<endl;
getch();
system("cls");
cout<<"\n\n\n\n\n\t\t\t\t\tWANT ANOTHER GAME ??"<<endl;
cout<<"\n\n\t\t\t\t\tEnter Yes or No: ";
cin>>another_game;
++num_game;
}
while(another_game=="Yes");
system("cls");
if (p1_score>p2_score)
{
    cout<<"\n\n\n\n\n\t\t\t\t\tAfter round "<<num_game<<", "<<player1<<" is the winner !!\n\n\n\n"<<endl;
}
else if (p2_score>p1_score)
{
    cout<<"\n\n\n\n\n\t\t\t\t\tAfter round "<<num_game<<", "<<player2<<" is the winner !!\n\n\n\n"<<endl;
}
else
{
    cout<<"\n\n\n\n\n\t\t\t\t\tAfter round "<<num_game<<" the game is tie !!\n\n\n\n"<<endl;
}
return 0;
}


