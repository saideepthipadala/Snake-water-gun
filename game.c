#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int SnakeWaterGun(char you,char comp){

if(you==comp)
return 0;
else if((you=='w'&& comp=='g') ||(you=='s'&& comp=='w') ||(you=='g'&& comp=='s'))
return 1;
else
return 2;

}


void calculate(int ycount,int ccount,int drawn){

if((ycount>ccount)){
printf("\nYou win!\n");
}

else if((ccount>ycount)){
printf("\nComputer wins!\n");
}

else {
printf("\nGame drawn!\n");
}

}


int main(){
char you,comp;
int i=1,ycount=0,ccount=0,drawn=0;

printf("Hey there! Using this code you can play a game with me!\n\n");

 while(i<=5){

srand(time(0));

int number=rand()%3+1;

 if(number==1){
     comp ='s';
 }
  else if(number==2){
     comp ='w';
 }
else{
 comp = 'g';
 }
printf("Enter 's' for snake,'w' for water,'g' for gun\n");
fflush(stdin);
scanf("%c",&you);

int result = SnakeWaterGun(you,comp);
if(result==0) {
drawn++;
}
 else if(result==1){
ycount++;
    }
    else
    ccount++;
     printf("Round - %d : your choice is  %c and computer's choice is %c \n",i,you,comp);
     i++;
 }

calculate(ycount,ccount,drawn);
printf("Your score: %d\n",ycount);
printf("Computer score: %d\n",ccount);
printf("Draw rounds: %d\n",drawn);
return 0;
}
