//#include <iostream>
//#include <climits>
//#include <queue>
//#define X first
//#define Y second
//
//int dx[4] = { -1,0,0,1 };
//int dy[4] = { 0,-1,1,0 };
//int board[502][502];
//int vis[502][502];
//
//int main()
//{
//	int n,m;
//	std::cin >> n >> m;
//	std::queue<std::pair<int, int>> q;
//
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			std::cin >> board[i][j];
//		}
//	}
//	int cnt = 0;
//	int max = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (vis[i][j] != 1 && board[i][j] == 1)
//			{
//
//				int sum = 0;
//				cnt++;
//				vis[i][j] = 1;
//				q.push({ i,j });
//				while (!q.empty())
//				{
//					std::pair<int, int> cur = q.front();
//					q.pop();
//					sum++;
//					for (int a = 0; a < 4; a++)
//					{
//						int nx = cur.X + dx[a];
//						int ny = cur.Y + dy[a];
//						if (nx < 0 || nx >= n || ny < 0 || ny >= m)
//							continue;
//						if (vis[nx][ny] == 1 || board[nx][ny] != 1)
//							continue;
//						vis[nx][ny] = 1;
//						q.push({ nx,ny });
//					}
//				}
//				if (sum > max)
//					max = sum;
//
//			}
//		}
//	}
//
//	std::cout << cnt << '\n';
//	std::cout << max;
//
//}