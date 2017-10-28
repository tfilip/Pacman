#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct Player{
	char direction;
	int x;
	int y;
};


struct Obstacol{	
	char tip;
	int x;
	int y;
	int enable;	
};

void draw_asterix(int M){
	int i;
	for(i=0;i<M;i++)
		printf("%s", "*");
	printf("\n");
}

void game_over(){
	printf("%s\n", "GAME OVER");
	exit(0);
}

struct Obstacol move_obstacol(struct Player player,struct Obstacol ob){

	int Min=abs(player.x-(ob.x))+abs(player.y-(ob.y));
	
	int auxi,auxj;
	int check;
	int i,j;
	for(i=-1;i<=1;i++){
		for(j=-1;j<=1;j++){
			check=abs(player.x-(ob.x+i))+abs(player.y-(ob.y+j));
			if(check<=Min){
				Min=check;
				auxi=i;
				auxj=j;
			}
		}
	}

	ob.x=ob.x+auxi;
	ob.y=ob.y+auxj;
	//printf("x%d y%d\n",auxi,auxj);
	return ob;

}

struct Player move(struct Player player,int N,int M,struct Obstacol *ob1,struct Obstacol *ob2,struct Obstacol *ob3,int counter){

	char c;

	scanf(" %c",&c);
	
		

	switch(c){
		case 'w':
			if(player.y!=1){
			player.direction='^';
			player.y--;
			if(counter%2==0){
		if(ob1->enable==1&&ob1->tip=='m')
			*ob1=move_obstacol(player,*ob1);
		if(ob2->enable==1&&ob2->tip=='m')
			*ob2=move_obstacol(player,*ob2);
		if(ob3->enable==1&&ob3->tip=='m')
			*ob3=move_obstacol(player,*ob3);
	}
	
			if((player.y==ob1->y&&player.x==ob1->x)||
				(player.y==ob2->y&&player.x==ob2->x)||
				(player.y==ob3->y&&player.x==ob3->x))
				game_over();
			}
			else{
				if(counter%2==0){
		if(ob1->enable==1&&ob1->tip=='m')
			*ob1=move_obstacol(player,*ob1);
		if(ob2->enable==1&&ob2->tip=='m')
			*ob2=move_obstacol(player,*ob2);
		if(ob3->enable==1&&ob3->tip=='m')
			*ob3=move_obstacol(player,*ob3);
	}
	
			}
			break;
		case 's':
			if(player.y!=N){
			player.direction='v';
			player.y++;
			if(counter%2==0){
		if(ob1->enable==1&&ob1->tip=='m')
			*ob1=move_obstacol(player,*ob1);
		if(ob2->enable==1&&ob2->tip=='m')
			*ob2=move_obstacol(player,*ob2);
		if(ob3->enable==1&&ob3->tip=='m')
			*ob3=move_obstacol(player,*ob3);
	}
	
			if((player.y==ob1->y&&player.x==ob1->x)||
				(player.y==ob2->y&&player.x==ob2->x)||
				(player.y==ob3->y&&player.x==ob3->x))
				game_over();
			}else{
				if(counter%2==0){
		if(ob1->enable==1&&ob1->tip=='m')
			*ob1=move_obstacol(player,*ob1);
		if(ob2->enable==1&&ob2->tip=='m')
			*ob2=move_obstacol(player,*ob2);
		if(ob3->enable==1&&ob3->tip=='m')
			*ob3=move_obstacol(player,*ob3);
	}
	
			}
			break;
		case 'd':
			if(player.x!=M){
			player.direction='>';
			player.x++;
			if(counter%2==0){
		if(ob1->enable==1&&ob1->tip=='m')
			*ob1=move_obstacol(player,*ob1);
		if(ob2->enable==1&&ob2->tip=='m')
			*ob2=move_obstacol(player,*ob2);
		if(ob3->enable==1&&ob3->tip=='m')
			*ob3=move_obstacol(player,*ob3);
	}
	
			if((player.y==ob1->y&&player.x==ob1->x)||
				(player.y==ob2->y&&player.x==ob2->x)||
				(player.y==ob3->y&&player.x==ob3->x))
				game_over();
			}else{
				if(counter%2==0){
		if(ob1->enable==1&&ob1->tip=='m')
			*ob1=move_obstacol(player,*ob1);
		if(ob2->enable==1&&ob2->tip=='m')
			*ob2=move_obstacol(player,*ob2);
		if(ob3->enable==1&&ob3->tip=='m')
			*ob3=move_obstacol(player,*ob3);
	}
	
			}
			break;
		case 'a':
			if(player.x!=1){
			player.direction='<';
			player.x--;
			if(counter%2==0){
		if(ob1->enable==1&&ob1->tip=='m')
			*ob1=move_obstacol(player,*ob1);
		if(ob2->enable==1&&ob2->tip=='m')
			*ob2=move_obstacol(player,*ob2);
		if(ob3->enable==1&&ob3->tip=='m')
			*ob3=move_obstacol(player,*ob3);
	}
	
			if((player.y==ob1->y&&player.x==ob1->x)||
				(player.y==ob2->y&&player.x==ob2->x)||
				(player.y==ob3->y&&player.x==ob3->x))
				game_over();
			}else{
				if(counter%2==0){
		if(ob1->enable==1&&ob1->tip=='m')
			*ob1=move_obstacol(player,*ob1);
		if(ob2->enable==1&&ob2->tip=='m')
			*ob2=move_obstacol(player,*ob2);
		if(ob3->enable==1&&ob3->tip=='m')
			*ob3=move_obstacol(player,*ob3);
	}
	
			}
			break;
		case 'q':
			exit(0);
			break;
		default:
		if(counter%2==0){
		if(ob1->enable==1&&ob1->tip=='m')
			*ob1=move_obstacol(player,*ob1);
		if(ob2->enable==1&&ob2->tip=='m')
			*ob2=move_obstacol(player,*ob2);
		if(ob3->enable==1&&ob3->tip=='m')
			*ob3=move_obstacol(player,*ob3);
	}
		
			break;

	}

	return player;

}

struct Obstacol citire_obstacol(){
	struct Obstacol obstacol;
	int x,y;
	char tip;
	scanf("%d%d %c",&y,&x,&tip);
	obstacol.y=y;
	obstacol.x=x;
	obstacol.tip=tip;
	obstacol.enable=1;
	return obstacol;

}




void draw(int N,int M,struct Player player,int P,struct Obstacol ob1,struct Obstacol ob2,struct Obstacol ob3,int counter){

	int finished=0;
	draw_asterix(M+2);
	int i,j;
	for(i=1;i<=N;i++){
		for(j=0;j<=M+1;j++){

			if((j==0) ||(j==M+1))
				printf("%s","*");
			else if((j==player.x)&&(i==player.y))
					printf("%c", player.direction);
			else if((((i==ob1.y)&&(j==ob1.x))&&(ob1.enable==1))||
				((i==ob2.y)&&(j==ob2.x)&&(ob2.enable==1))||
			((i==ob3.y)&&(j==ob3.x)&&(ob3.enable==1))){
				printf("%s", "x");
			}
			else
				printf("%s"," ");

			if(player.x==M&&player.y==N)
				finished=1;

		}
		printf("\n");
	}

	draw_asterix(M+2);

	if(finished)
		printf("%s\n", "GAME COMPLETED");
	else{
		counter++;
		draw(N,M,move(player,N,M,&ob1,&ob2,&ob3,counter),P,ob1,ob2,ob3,counter);
	}
}




struct Obstacol intializare_obstacol(){
	struct Obstacol ob;
	ob.tip='f';
	ob.x=-1;
	ob.y=-1;
	ob.enable=0;
	return ob;
}




int main(){
	
	int N,M,x,y,P;
	
	scanf("%d%d%d%d%d",&N,&M,&x,&y,&P);
	
	struct Player player;

	player.x=x;
	player.y=y;
	player.direction='v';

	struct Obstacol obstacol1,obstacol2,obstacol3;

	obstacol1=intializare_obstacol();
	obstacol2=intializare_obstacol();
	obstacol3=intializare_obstacol();

	switch(P){
		case 3:
			obstacol3=citire_obstacol();
		case 2:
			obstacol2=citire_obstacol();
		case 1:
			obstacol1=citire_obstacol();
		default:
			draw(N,M,player,P,obstacol1,obstacol2,obstacol3,0);
	}




	return 0;
}