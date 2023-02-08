//#include <iostream>
//#include <queue>
//
//int main()
//{
//	int n;
//	std::cin >> n;
//	std::queue<int> q;
//
//	for (int i = 1; i <= n; i++)
//	{
//		q.push(i);
//	}
///*
//4
//1 2 3 4
//*/
//	while (true)
//	{
//		if (q.size() == 1)
//		{
//			break;
//		}
//		q.pop();
//		if (q.size() == 1)
//		{
//			break;
//		}
//		int x = q.front();
//		q.pop();
//		q.push(x);
//
//	}
//
//	std::cout << q.front();
//}