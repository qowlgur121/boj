////#include <iostream>
////#include <vector>
////#include <algorithm>
////
////double arr[1000001];
////
////int main()
////{
////	int n;
////	std::cin >> n;
////	std::vector<double> v;
////	std::vector<double> v_index;
////	double x;
////	for (int i = 0; i < n; i++)
////	{
////		std::cin >> x;
////		v.push_back(x);
////		v_index.push_back(x);
////	}
////	std::sort(v.begin(), v.end());
////
////	//�ߺ� ����
////
////	std::vector<double> vv;
////	vv.push_back(v[0]);
////	for (int i = 1; i < v.size(); i++)
////	{
////		if (v[i] == v[i - 1])
////			continue;
////		vv.push_back(v[i]);
////	}//�ߺ�����
////
////	for (int i = 0; i < v_index.size(); i++)
////	{
////		for (int j = 0; j < vv.size(); j++)
////		{
////			if (v_index[i] == vv[j])
////				std::cout << j << " ";
////		}
////	}
////
////}
////
//////#include <iostream>
//////#include <vector>
//////#include <algorithm>
//////
//////std::vector<std::pair<double,int>> v;
//////int main()
//////{
//////	int n;
//////	std::cin >> n;
//////	double x;
//////	for (int i = 0; i < n; i++)
//////	{
//////		std::cin >> x;
//////		v.push_back(std::make_pair(x, 0));
//////		v
//////	}
//////	sort(v.begin(), v.end());
//////	//������. 
//////	for
//////	{
//////		v[i].first
//////	}
//////	v[v[i].first]
//////
//////
//////}
//
//#include <iostream>
//#include <list>
//
//int main()
//{
//	std::list<int> l;
//
//	l.push_back(5);
//	l.push_back(6);
//	l.push_back(7);
//
//	l.pop_back();
//
//	l.push_front(4);
//	l.push_front(3);
//	l.push_front(1);
//	l.push_front(0);
//
//	l.pop_front();
//
//	std::cout << "list front value: " << l.front() << '\n';
//	std::cout << "list and value: " << l.back() << '\n';
//
//	std::cout << "list size: " << l.size() << '\n';
//
//	std::cout << "is it empty?: " << (l.empty() ? "Yes" : "No") << '\n';
//
//	std::list<int>::iterator begin_iter = l.begin();
//	std::list<int>::iterator end_iter = l.end();
//	//134567
//
//	// insert
//	begin_iter++;	//2��°�� ����Ű�� iterator, ������ 3�� ����Ŵ
//	l.insert(begin_iter, 2);	//123456	//3�� �ڸ����� 2��°�ڸ��� 2�� ���鼭 3�� 3��° �ڸ��� ��. �׸��� ������ ���Ҹ� ����Ű�� iterator�� ��ȯ.
//	std::cout << *begin_iter<<'\n';	//���ͷ����ʹ� �ڷ� �з������� 3�� ����Ŵ
//
//	// erase
//	end_iter--;	//������ ������ �ڸ� �����״ٰ� ������ ������ ���Ҹ� ����Ŵ
//	end_iter=l.erase(end_iter);	//6�� ����. 12345. ������ ������ ���� ���Ҹ� ����Ű�� iterator�� ��ȯ. 
//	//������ ����Ʈ�� erase�� �̷��� ��ȯ�� ���� ������ ����Ʈ�� ���������� �ƴϱ⿡ ���������ڸ� �� �����Ѿ� ���� �𸥴�.�׷��� �̷��� �޾ƾ���.
//
//	std::cout << *(--end_iter) << '\n';	//5���
//
//	for (auto c : l)std::cout << c << ' ';
//}