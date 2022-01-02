#include <iostream>
#include <conio.h>
using namespace std;


#define row 10 // Total number of Rows
#define col 30 // Total number of Columns

#define timer 1000 // Timer for Delay() Function to delay between frames
char array[row][col];
char bombPosition[col-2];
char ch;

//Function Initialization
void delay();
int readKey();
int draw();
int print();
int initial();
int objupdate(int c);
int bomb();
int bombMovement();

int x=10; // Initial Position
int y=100;
int j, k;
int debug=1; // Set Debug display on(1) or off(0)
int leftLimit=2; // Left movement limit of the shooter
int rightLimit=col-3; // Right movement limit of the shooter

int bombMovement()
{
	int i, j=0, k=0;
	for (i=0;i<col;i++)
	{
		if(bombPosition[i]==1)
		{
			j=row-3;
			k=x;
			array[j][k]='^';
			bombPosition[i]=0;
		}
	}
	return 0;
}

int bomb()
{
	bombPosition[x+1] = 1;
	return 0;
}

int objupdate(int c)
{
	if (c==0) // 0 is Left Movement
	{
		array[row-2][x+1]=' ';
		array[row-1][x+2]=' ';
	}
	if (c==1) // 1 is Right Movement
	{
		array[row-2][x-1]=' ';
		array[row-1][x-2]=' ';
	}
	return 0;
}

int move(int che)
{

	switch(che)
	{
		case 1: if(x>=leftLimit)
				{
					x--; //Left Movement
					objupdate(0);
				}

				break;

		case 2: if(x<=rightLimit)
				{
					x++; //Right Movement
					objupdate(1);
				}
				break;

		default:

				break;


	}
	return 0;
}



int readKey()
{

	if ( kbhit() )
	{
        // Stores the pressed key in ch
		ch = getch();

		if (int(ch) == 'a')
		{
			move(1);

		}

		else if (int(ch) == 'd')
		{
			move(2);

		}

		else if (int(ch) == 'l')
		{
			bomb();

		}

    }
	return 0;
}



int draw()
{
	int i;

	for(i=row-2;i<=row;i++)
	{
		array[i][x] = '*';
	}
	for(i=x-1;i<=x+1;i++)
	{
		array[row-1][i] = '*';
	}

	return 0;
}


int print() // Print
{
	draw();
	bombMovement();
	int i, j, b;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%c",array[i][j]);
		}
		printf("\n");
	}

	//Debug Data
	if(debug==1)
	{
		/*printf("\n Debug: ON | You can set the debug off\n\n");
		printf("Column: %d",x);
		cout << "\nPressed " << ch;
		printf("\nBomb Array ");*/
		for(b=2;b<col;b++)
		{
			//printf("%d " , bombPosition[b]);
		}
	}
	return 0;
}



void delay() //delay
{
	int c, d;
	for (c = 1; c <= timer; c++)
       for (d = 1; d <= timer; d++)
       {}
}



int initial() //First Set
{
	int i, j;

	for(i=0;i<row;i++)        /*Fill all by ' ' */
	{
		for(j=0;j<col;j++)
		{
			array[i][j]=' ';
		}
	}

	for(i=0;i<col-2;i++)      /* limiting bomb-position from 0 to col-2 */
	{
		bombPosition[i]=0;
	}
	return 0;
}




int main() //main
{
	initial();
	draw();
	while(1)
	{
		print();
		delay();
		readKey();
		system("cls");
	}
    return 0;
}
