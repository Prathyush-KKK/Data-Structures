#include <bits/stdc++.h>
using namespace std;
#define I INT_MAX

//edges is a 2D array where first row contains first edge and second row contains second edges and third row contains the cost of the edge
//included array is present to mark the edges which are already included in the MST (solution)
//we have a 2D solution array which contains the solution of the MST
//we will use sett operations union and find to detect loops, a 1D array 'sett' is used

int edge[9][3]={{1,2,28},{1,6,10},{2,3,16},{2,7,14},{3,4,12},  //adjacency weighted matrix
{4,5,22},{4,7,18},{5,6,25},{5,7,24}};
int sett[8]={-1,-1,-1,-1,-1,-1,-1,-1};   //sett array
int included[9]={0,0,0,0,0,0,0,0,0};    //check if  eleement is included in MST
int t[2][7];  //solution array, spanning tree is stored here

void Myunion(int u, int v)
{
    if(sett[u] < sett[v])
    {
        sett[u] += sett[v];
        sett[v] = u;
    }
    else
    {
        sett[v] += sett[u];
        sett[u] = v;
    }
}

int find(int u)
{
    int x = u, v = 0;
    while (sett[x] > 0)
    {
        x = sett[x];
    }
    while (u != x)
    {
        v = sett[u];
        sett[u] = x;
        u = v;
    }
    return x;
}




int main(){
 int i=0,j,k,u=0,v=0,min = I, n=9, e = 9;
 while(i<6){
    min = I;
for(j=0;j<e;j++){           //find the minimum edge
    if(included[j]==0&&edge[j][2]<min){
        min = edge[j][2];
        u = edge[j][0];
        v = edge[j][1];
        k = j;
    }
 }

 if(find(u)!=find(v)){      //if the edge does not form a loop
    t[0][i] = u;
    t[1][i] = v;
    Myunion(find(u),find(v));
    i++;
 }
     included[k] = 1;
 }
for(i = 0; i<6; i++){
    cout<<t[0][i]<<" "<<t[1][i]<<endl;
}


}