//#include <iostream>
//#include <vector>
//#include <tuple>
//#include <algorithm>
//
//bool cmp(std::tuple<int, std::string, int> t1, std::tuple<int, std::string, int> t2)
//{
//
//	if (std::get<0>(t1) == std::get<0>(t2))
//	{
//		return std::get<2>(t1) < std::get<2>(t2);
//	}
//	return std::get<0>(t1) < std::get<0>(t2);
//}
//
//int main()
//{
//	std::vector<std::tuple<int, std::string, int>>v;
//
//	int n;
//	std::cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		std::string s2;
//		std::cin >> x >> s2;
//		v.push_back(std::make_tuple(x, s2,i));
//	}
//	sort(v.begin(), v.end(), cmp);
//
//	for (auto iter = v.begin(); iter != v.end(); ++iter)
//	{
//		std::cout << std::get<0>(*iter) << " " << std::get<1>(*iter) << '\n';
//	}
//}