#include<stdio.h> 
#include<iostream>
  
// Maze size 
#define N 4  


bool solvemaze(int maze[N][N],int x,int sol[N][N]);


void printsolution(int sol[N][N])

{ for(int i=0;i<N;i++){
for(int j=0;j<N;j++){
	cout<<sol[i][j]<<endl;
}
}}

bool safe(int maze[N][N],int x,int y){

	if(x>=0 && x<N && y>=0 && y<N && maze[x][y]==1)

		return true;
	return false;
}
	
bool solvemaze(int maze[N][N])	{

	int sol[4][4]={ {0,0,0,0},
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0}
};

  if(solveMazeUtil(maze, 0, 0, sol) == false) 
    { 
        cout<<"Solution doesn't exist"<<endl; 
        return false; 
    } 
  
    printsolution(sol); 
    return true; 
} 

bool solveMazeUtil(int maze[N][N],int x,int y,int sol[N][N]){
	 if(x == N-1 && y == N-1) 
    { 
        sol[x][y] = 1; 
        return true; 
    } 

}

if(safe(maze,x,y)==true){
	sol[x][y]=1;

	if(solveMazeUtil(maze,x+1,y,sol)==true)
		return true;
	if (solveMazeUtil(maze, x, y+1, sol) == true) 
            return true; 
  
        /* If none of the above movements work then BACKTRACK:  
            unmark x,y as part of solution path */
        sol[x][y] = 0; 
        return false; 
    }    
  
    return false; 
} 
  
}


int main() 
{ 
    int maze[N][N]  =  { {1, 0, 0, 0}, 
        {1, 1, 0, 1}, 
        {0, 1, 0, 0}, 
        {1, 1, 1, 1} 
    }; 
  
    solveMaze(maze); 
    return 0; 
} 



