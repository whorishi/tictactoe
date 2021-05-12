#include <stdio.h>
#include <conio.h>


void layout();
void playersymbol();
void begin();
void change(char);
int win();


char c[9]={'1','2','3','4','5','6','7','8','9'};
int k=0;
int main()
{
	int strt,j,w;
	printf("\t\tT\tI\tC\n\t\tT\tA\tC\n\t\tT\tO\tE\n\n");
	layout();
	playersymbol();
	printf("\n\nWho will start the Game:\nPRESS 1 for PLAYER 1\nPRESS 2 for PLAYER 2\n:=>");
	scanf("\n%d",&strt);
	printf("\n\t\tL E T S  B E G I N\n");
	begin();
	
	label:
	system("cls");
	layout();
	begin();
	w=win();
	if(w==100)
	    printf("\n\t\tPLAYER 1 wins");
	else if(w==200)
	    printf("\n\t\tPLAYER 2 wins");
	else 
	    goto label;
	
	getch();
	return 0;
}

void layout()
{
	printf("\n\t\t %c  | %c  | %c ",c[0],c[1],c[2]);
	printf("\n\t\t----|----|----");
	printf("\n\t\t %c  | %c  | %c ",c[3],c[4],c[5]);
	printf("\n\t\t----|----|----");
	printf("\n\t\t %c  | %c  | %c ",c[6],c[7],c[8]);
}

void playersymbol()
{
	printf("\n\n\tPLAYER 1 symbol:|x|\n\tPLAYER 2 symbol:|o|");	
}

void begin()
{
	char pos;
	printf("\nEnter Position: ");
	//fflush(stdin);
	scanf("%c",&pos);
	change(pos);
}

void change(char Pos)
{
	int i;
	if(k==0)
	{
	for(i=0;i<=8;i++)
	{
		if(c[i]==Pos)
		{
		    c[i]='x';
			k=1;
			break;	
		}
	}
    }
	else
	{
	for(i=0;i<=8;i++)
	{
		if(c[i]==Pos)
		{
		    c[i]='o';
			k=0;
			break;	
		}
	}
    }
}

int win()
{
	if( (c[0]=='x'&&c[1]=='x'&&c[2]=='x') || (c[0]=='x'&&c[3]=='x'&&c[6]=='x') || (c[0]=='x'&&c[4]=='x'&&c[8]=='x') || (c[1]=='x'&&c[4]=='x'&&c[7]=='x') || (c[2]=='x'&&c[5]=='x'&&c[8]=='x') || (c[3]=='x'&&c[4]=='x'&&c[5]=='x') || (c[6]=='x'&&c[7]=='x'&&c[8]=='x') || (c[2]=='x'&&c[4]=='x'&&c[6]=='x') )
	    return (100);
    else if( (c[0]=='o'&&c[1]=='o'&&c[2]=='o') || (c[0]=='o'&&c[3]=='o'&&c[6]=='o') || (c[0]=='o'&&c[4]=='o'&&c[8]=='o') || (c[1]=='o'&&c[4]=='o'&&c[7]=='o') || (c[2]=='o'&&c[5]=='o'&&c[8]=='o') || (c[3]=='o'&&c[4]=='o'&&c[5]=='o') || (c[6]=='o'&&c[7]=='o'&&c[8]=='o') || (c[2]=='o'&&c[4]=='o'&&c[6]=='o') )
	    return (200);
	else
	    return (300);      

}










