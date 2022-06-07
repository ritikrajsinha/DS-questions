#include <iostream>
using namespace std;
int sol[1000][1000] = {0};

bool ratinamaze(char maze[1000][1000], int n, int m, int i, int j)
{ //n-->rows,m-->cols
    // base case
    if (i == n - 1 && j == m - 1)
    {
        sol[i][j] = 1;
        for (int l = 0; l < n; l++)
        {
            for (int k = 0; k < m; k++)
            {
                cout << sol[l][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return true;

        //all paths
    }

    // recursive case
    sol[i][j] = 1;
    // kya mai right jaa sakti hun
    if (j + 1 < m && maze[i][j + 1] != 'X')
    {
        // mai aage jaa sakti hun
        bool kyamujheaageseansmila = ratinamaze(maze, n, m, i, j + 1);
        if (kyamujheaageseansmila == true)
        {
            return true;
        }
    }

    // kya mai neeche jaa sakti hun
    if (i + 1 < n && maze[i + 1][j] != 'X')
    {
        bool kyamujheneecheseaNSMILA = ratinamaze(maze, n, m, i + 1, j);
        if (kyamujheneecheseaNSMILA == true)
        {
            return true;
        }
    }

    sol[i][j] = 0; //backtracking

    return false;
}

int main()
{

    int n, m;
    cin >> n >> m;
    char maze[1000][1000];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maze[i][j];
        }
        
    }

   if (ratinamaze(maze, n, m, 0, 0)==false){
       cout<<"NO PATH FOUND";
   }

    return 0;
}