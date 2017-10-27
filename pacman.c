#include <stdio.h>
#include <stdlib.h>

struct Player{
	char direction;
	int x;
	int y;
};

void draw_asterix(int M){
	for(int i=0;i<M;i++)
		printf("%s", "*");
	printf("\n");
}

struct Player move(struct Player player,int N,int M){

	char c;

	scanf(" %c",&c);

	switch(c){
		case 'w':
			if(player.y!=1){
			player.direction='^';
			player.y--;
			}
			break;
		case 's':
			if(player.y!=N){
			player.direction='v';
			player.y++;
			}
			break;
		case 'd':
			if(player.x!=M){
			player.direction='>';
			player.x++;
			}
			break;
		case 'a':
			if(player.x!=1){
			player.direction='<';
			player.x--;
			}
			break;
		default:
			exit(0);
			break;

	}

	return player;

}


void draw(int N,int M,struct Player player,int P){

	int finished=0;

	draw_asterix(M+2);

	for(int i=1;i<=N;i++){
		for(int j=0;j<=M+1;j++){

			if((j==0) ||(j==M+1))
				printf("%s","*");
			else if
				((j==player.x)&&(i==player.y))
					printf("%c", player.direction);
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
	else
		draw(N,M,move(player,N,M),P);


}


int main(){
	
	int N,M,x,y,P;
	
	scanf("%d%d%d%d%d",&N,&M,&x,&y,&P);
	
	struct Player player;

	player.x=x;
	player.y=y;
	player.direction='v';

	draw(N,M,player,0);




	return 0;
}