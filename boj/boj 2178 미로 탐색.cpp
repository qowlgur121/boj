//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//#define X first
//#define Y second 
//
//std::string board[102];
//int dis[102][102];
//int dx[4] = { -1,0,0,1 };
//int dy[4] = { 0,-1,1,0 };
//
//
//int main()
//{
//	std::queue<std::pair<int, int>> q;
//
//	int n, m;
//	std::cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		std::cin >> board[i];
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		std::fill(dis[i], dis[i] + m, -1);
//	}
//
//	dis[0][0] = 0;
//	q.push({ 0,0 });
//
//	while (!q.empty())
//	{
//		std::pair<int, int> cur = q.front();
//		q.pop();
//		for (int a = 0; a < 4; a++)
//		{
//			int nx = cur.X + dx[a];
//			int ny = cur.Y + dy[a];
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
//				continue;
//			if (dis[nx][ny] >=0 || board[nx][ny] == '0')
//				continue;
//			dis[nx][ny] = dis[cur.X][cur.Y] + 1;
//			q.push({ nx,ny });
//		}
//	}
//
//	std::cout << dis[n - 1][m - 1]+1;
//}