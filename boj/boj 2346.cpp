//#include <iostream>
//#include <list>
//
//int main()
//{
//	int n;
//	std::cin >> n;
//
//	std::list<int> l;
//	std::list<int> l_index;
//	int x;
//	for (int i = 0; i < n; i++)
//	{
//		std::cin >> x;
//		l.push_back(x);
//		l_index.push_back(i);
//	}
//	
//	auto iter = l.begin();
//	auto iter_index = l_index.begin();
//	int pr;
//	int index = 1;
//
//	while (n>0)
//	{
//		std::cout << index << ' ';
//		pr = *iter;
//		iter = l.erase(iter);
//		if (pr > 0)
//		{
//			for (int i = 0; i < pr; i++)
//			{
//				if (iter == l.end())
//				{
//					iter = l.begin();
//					
//				}
//					
//				++iter;
//				++index;
//			}
//		}
//		else
//		{
//			for (int i = pr; i < 0; i++)
//			{
//				if (iter == l.begin())
//				{
//					iter = l.end();
//
//				}
//				--iter;
//				--index;
//			}
//		}
//		--n;
//	}
//
//}
//
//#include <iostream>
//#include <list>
//
//int main()
//{
//	int n;
//	std::cin >> n;
//
//	std::list<std::pair<int, int>> l;
//
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		std::cin >> x;
//		l.push_back(std::make_pair(x, i + 1));
//	}
//	while (true)
//	{
//		int cnt = l.front().first;
//		std::cout << l.front().second << " ";
//		l.pop_front();
//		if (l.empty())break;
//		if (cnt > 0)
//		{
//			for (int i = 0; i < cnt - 1; i++)
//			{
//				l.push_back(l.front());
//				l.pop_front();
//			}
//		}
//		else
//		{
//			for (int i = cnt; i < 0; i++)
//			{
//				l.push_front(l.back());
//				l.pop_back();
//			}
//		}
//
//	}
//
//}
