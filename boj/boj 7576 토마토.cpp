/*
bfs를 돌리고 모든 곳이 지나갔었는지를 저장하면 될것같다. 거리를 저장하면 될 것 같다.

*/

#include <iostream>
#include <queue>
#include <algorithm>
#define X first
#define Y second
int board[1000][1000];
int dist[1000][1000];

int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };

int main()
{
	int n, m;
	std::cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> board[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		std::fill(dist[i], dist[i] + m, 0);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (dist[i][j] == 0 && board[i][j] == 1)
			{
				dist[i][j] = 1;
				std::queue<std::pair<int, int>> q;
				q.push({ i,j });
				while (!q.empty())
				{
					std::pair<int, int> cur = q.front();
					q.pop();
					for (int a = 0; a < 4; a++)
					{
						int nx = cur.X + dx[a];
						int ny = cur.Y + dy[a];
						if (nx < 0 || nx >= n || ny < 0 || ny >= m)
							continue;
						if (dist[nx][ny] > 0 || board[nx][ny] == -1)
							continue;
						dist[nx][ny] = dist[cur.X][cur.Y] + 1;
					}
				}
				
			}
		}
	}
	int mx = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (mx < dist[i][j])
				mx = dist[i][j];
	/*		if (dist[i][j] ==0)
			{
				std::cout << "-1";
				return 0;
			}*/
		}
	}
	std::cout << mx;



}