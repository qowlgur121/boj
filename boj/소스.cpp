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
////	//중복 삭제
////
////	std::vector<double> vv;
////	vv.push_back(v[0]);
////	for (int i = 1; i < v.size(); i++)
////	{
////		if (v[i] == v[i - 1])
////			continue;
////		vv.push_back(v[i]);
////	}//중복삭제
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
//////	//정렬함. 
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
//	begin_iter++;	//2번째를 가리키는 iterator, 지금은 3을 가리킴
//	l.insert(begin_iter, 2);	//123456	//3의 자리엿던 2번째자리에 2가 들어가면서 3은 3번째 자리가 됨. 그리고 삽입한 원소를 가리키는 iterator를 반환.
//	std::cout << *begin_iter<<'\n';	//이터레이터는 뒤로 밀려나가서 3을 가리킴
//
//	// erase
//	end_iter--;	//마지막 원소의 뒤를 가리켰다가 지금은 마지막 원소를 가리킴
//	end_iter=l.erase(end_iter);	//6을 삭제. 12345. 삭제한 원소의 다음 원소를 가리키는 iterator를 반환. 
//	//주의점 리스트의 erase는 이렇게 반환을 받지 않으면 리스트는 순차접근이 아니기에 다음지시자를 뭘 가리켜야 할지 모른다.그래서 이렇게 받아야함.
//
//	std::cout << *(--end_iter) << '\n';	//5출력
//
//	for (auto c : l)std::cout << c << ' ';
//}