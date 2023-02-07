//#include <iostream>
//#include <list>
//
//int main()
//{
//	std::ios::sync_with_stdio(0);
//	std::cin.tie(0);
//	/*char c[100000];
//	std::cin >> c;*/
//	std::string init;
//	std::cin >> init;
//	std::list<char> L;
//
//	for (auto c : init)L.push_back(c);
//	auto cursor = L.end();
//
//	/*for (int i = 0; c[i] = '\0'; i++)
//	{
//		l.push_back(c[i]);
//	}*/
//	int n;
//	
//	char a;
//	std::cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		std::cin >> a;
//		if (a == 'P')
//		{
//			char add;
//			std::cin >> add;
//			L.insert(cursor, add);
//			//커서를 옮기고 왼쪽에 추가함.
//		}
//		else if (a == 'L')
//		{
//			if (cursor != L.begin())cursor--;
//		}
//		else if (a == 'D')
//		{
//			if (cursor != L.end())cursor++;
//		}
//		else
//		{
//			if (cursor != L.begin())
//			{
//				cursor--;
//				cursor = L.erase(cursor);
//			}
//		}
//	}
//	for (auto c : L)std::cout << c;
//}