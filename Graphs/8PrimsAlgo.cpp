#include <bits/stdc++.h>
using namespace std;
#define I INT_MAX
// we will be using cost-adjacency matrix representation type
// we fill up edges with two vertices in a 2D array where column represent the two connected vertex and rows depict total number of edges
// we will take another near array to find out all other vertices which are near to either of vertices and input them in a 1D array
// We pick the minimum coordinates from the 1D array and mark it as 0 once picked and the steps are repeated until the near array is null array. 

int cost[][8]=
{{I,I,I,I,I,I,I,I},
{I,I,25,I,I,I,5,I},
{I,25,I,12,I,I,I,10},
{I,I,12,I,8,I,I,I},
{I,I,I,8,I,16,I,14},
{I,I,I,I,16,I,20,18},
{I,5,I,I,I,20,I,I},
{I,I,10,I,14,18,I,I}};

int near[8]={I,I,I,I,I,I,I,I};
int t[2][6];            // to store the edges of the spanning tree        

int main(){
int i,j,k,u,v,n=7, min= I;
for(int i =1; i<=n; i++){
    for(j=i; j<=n; j++){            //finding min element from upper triangular matrix as undirected matrices are symmetric
        if(cost[i][j] < min){
            min = cost[i][j];
            u = i;              //storing the coordinates of min element
            v = j;
        }
    }
}

t[0][0] = u;            //this is the edges 2D matrix
t[1][0] = v;
near[u] = near[v] = 0;          //this is the near (1D) matrix, marks the initial vertices as 0.

for(int i =1; i<=n; i++){
    if(near[i]!=0){
    if(cost[i][u]<cost[i][v]){        //filling up the near array with the nearest vertex element.
        near[i] = u;
    }
    else{
        near[i] = v;
    }
}
}

for(int i =1; i<n-1; i++){
    min = I;
    for(int j =1; j<=n; j++){
        if(cost[j][near[j]] < min && near[j]!=0){       //finding the min element from near array
            k = j;
            min = cost[j][near[j]];
        }
    }
    t[0][i] = k;                               //writing the coordinates of matrix of minimum element.
    t[1][i] = near[k];
    near[k] = 0;
    for (j = 1; j <= n; j++)
    {
        if (near[j] != 0 && cost[j][k] < cost[j][near[j]])
            near[j] = k;
    }
}
for (i = 0; i < n - 1; i++)
{
    cout << "(" << t[0][i] << "," << t[1][i] << ")" << endl;
}

return 0;
}