#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct node
{
int data;
node *next;
node *snake;
node *ladder;
}*p,*p1,*p2,*head,*tail;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void form_snake(int o,int t)
{
for(p1=head;p1->data!=o;p1=p1->next)
{}
for(p2=head;p2->data!=t;p2=p2->next)
{}
p1->snake=p2;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void form_ladder(int o,int t)
{
for(p1=head;p1->data!=o;p1=p1->next)
{}
for(p2=head;p2->data!=t;p2=p2->next)
{}
p1->ladder=p2;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void check_snake()
{
cout<<"The position of the snakes are:\n";
for(p1=head;p1!=NULL;p1=p1->next)
{
if(p1->snake!=NULL)
cout<<endl<<p1->data<<"->>>"<<p1->snake->data<<endl;
}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void check_ladder()
{
cout<<"The position of the ladders are:\n";
for(p1=head;p1!=NULL;p1=p1->next)
{
if(p1->ladder!=NULL)
cout<<endl<<p1->data<<"->>>"<<p1->ladder->data<<endl;
}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void p1_chance()
{
int num;
l1:num=rand();
if(num>6 || num<=0)
goto l1;
cout<<"The outcome of the dice for player 1 is ->>"<<num<<endl;
while(num>0 && p1!=NULL && p1->data!=100)
{
num--;
p1=p1->next;
}
if(p1->snake!=NULL)
p1=p1->snake;
if(p1->ladder!=NULL)
p1=p1->ladder;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void p2_chance()
{
int num;
l1:num=rand();
if(num>6 || num==0)
goto l1;
cout<<"The outcome of the dice for player 2 is ->>"<<num<<endl;
while(num>0 && p2!=NULL && p2->data!=100)
{
num--;
p2=p2->next;
}
if(p2->snake!=NULL)
p2=p2->snake;
if(p2->ladder!=NULL)
p2=p2->ladder;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void homepage()
{
cout<<endl<<endl<<"\t\tWelcome";Sleep(500);cout<<" to";Sleep(500);cout<<" the";
Sleep(500);cout<<" Era";Sleep(500);cout<<" of";
Sleep(500);cout<<" Snakes";Sleep(500);cout<<" &";Sleep(500);
cout<<" Ladders";Sleep(1000);
cout<<endl;
for(int i=0;i<5;i++)
{
for(int j=i;j<20;j++)
cout<<" ";
cout<<"@@@@"<<endl;
Sleep(100);
}
for(int i=15;i<20;i++)
{
for(int j=i;j>0;j--)
cout<<" ";
cout<<"@@@@"<<endl;
Sleep(100);
}
for(int i=0;i<5;i++)
{
for(int j=i;j<20;j++)
cout<<" ";
cout<<"@@@@"<<endl;
Sleep(100);
}
for(int i=0;i<10;i++)
{
cout<<"\t\t\t\t|--|"<<endl;
Sleep(100);
}
cout<<"Project By:-"<<endl<<endl;
Sleep(500);
cout<<"\tNikita Negi"<<endl<<endl;
Sleep(500);
cout<<"\tJagriti Sharma"<<endl<<endl;
Sleep(500);
cout<<"\tKritika"<<endl<<endl;
Sleep(500);
cout<<"\tSiddhaarth Saxena"<<endl<<endl;
Sleep(1000);
cout<<"------------------------------------------------------------------"<<endl<<endl;
cout<<"Project submitted to:-"<<endl<<endl;
Sleep(500);
cout<<"\tProf. Chandra Mouli PVSSR"<<endl<<endl;
Sleep(500);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
cout<<"p1";
if(p->data%10==int())
cout<<endl;
if(p2->data==p->data)
cout<<"p2";
}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
char player1[50],player2[50];
homepage();
getch();
system("cls");
cout<<"Enter the name of player 1:-";
gets(player1);
cout<<endl<<endl;
cout<<"Enter the name player 2:-";
gets(player2);
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t Let the game begin";
getch();
initialize();
print_initialize();
getch();
system("cls");
form_ladder(6,33);
form_ladder(16,24);
form_ladder(21,44);
form_ladder(35,66);
form_ladder(51,74);
form_ladder(78,96);
form_snake(26,8);
form_snake(37,19);
form_snake(48,11);
form_snake(63,25);
form_snake(77,34);
form_snake(89,54);
form_snake(98,64);
check_ladder();
check_snake();
getch();
int i;
for(i=0,p1=head,p2=head;
p1->next!=NULL,p2->next!=NULL,p1->data!=100,p2->data!=100;
i++)
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
if(p1->data==100 or p1->next==NULL)
{
cout<<player1<<" wins";
break;
}
else if(p2->data==100 or p2->next==NULL)
{
cout<<player2<<" wins";
break;
}
else
{
continue;
}
}
return 0;
}
