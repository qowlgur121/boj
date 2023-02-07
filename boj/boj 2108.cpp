//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//std::vector<std::pair<int, int>> v_num;
//
//bool cmp(std::pair<int, int> p1, std::pair<int, int> p2)
//{
//	if (p1.second == p2.second)
//		return p1.first < p2.first;
//	return p1.second > p2.second;
//}
//
//int main()
//{
//	int n;
//	std::cin >> n;
//
//	std::vector<int> v;
//	int x;
//	for (int i = 0; i < n; i++)
//	{
//		std::cin >> x;
//		v.push_back(x);
//	}
//	std::sort(v.begin(), v.end());
//
//	double sum = 0;
//	for (auto iter = v.begin(); iter != v.end(); ++iter)
//	{
//		sum += *iter;
//	}
//
//	double avg=round(sum /(double) n);
//	if (avg == -0)
//	{
//		avg = 0;
//	}
//	std::cout << avg << "\n";
//
//	if (n == 1)
//	{
//		std::cout << v[0]<<"\n";
//	}
//	else
//		std::cout << v[(n-1) / 2] << "\n";
//
//	int check=0;
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		check = 0;
//		for (int j = 0; j < v_num.size(); j++)
//		{
//			if (v[i]==v_num[j].first)
//			{
//				v_num[j].second++;
//				check++;
//			}
//		}
//		if (check == 0)
//		{
//			v_num.push_back(std::make_pair(v[i], 1));
//		}
//	}
//
//	std::sort(v_num.begin(), v_num.end(), cmp);
//
//	if (v_num.size() == 1)
//	{
//		std::cout << v_num[0].first << "\n";
//	}
//
//	else
//	{
//		if (v_num[0].second == v_num[1].second)
//		{
//			std::cout << v_num[1].first << "\n";
//		}
//		else
//			std::cout << v_num[0].first << "\n";
//	}
//
//	std::cout << v[n - 1] - v[0] << "\n";
//}
