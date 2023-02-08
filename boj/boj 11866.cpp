//#include <iostream>
//#include <algorithm>
//#include <list>
//
//int main()
//{
//	int n;
//	std::cin >> n;
//	int k;
//	std::cin >> k;
//	std::list<int> l;
//
//	for (int i = 1; i <= n; i++)
//	{
//		l.push_back(i);
//	}
//
//	while (!q.empty())
//	{
//		for (int i = 0; i < k - 1; i++)
//		{
//			q.push(q.front());
//			q.pop();
//		}
//	}
//
//
//	std::cout << "<";
//	auto iter = l.begin();
//	auto tmp = l.begin();
//
//	for (int i = 0; i < n; i++)
//	{
//		std::cout << *iter<<", ";
//		tmp = iter;
//		if()
//		iter = l.erase(iter);
//		iter = tmp;
//		--tmp;
//		for (int i = 0; i < 2; i++)
//		{
//			if (iter == tmp)
//			{
//				iter = l.begin();
//				continue;
//			}
//			iter++;
//		}
//	}
//	std::cout << ">";
//
//	return 0;
//}
