//////////////#include <iostream>
//////////////#include <vector>
//////////////#include <algorithm>
//////////////
//////////////double arr[1000001];
//////////////
//////////////int main()
//////////////{
//////////////	int n;
//////////////	std::cin >> n;
//////////////	std::vector<double> v;
//////////////	std::vector<double> v_index;
//////////////	double x;
//////////////	for (int i = 0; i < n; i++)
//////////////	{
//////////////		std::cin >> x;
//////////////		v.push_back(x);
//////////////		v_index.push_back(x);
//////////////	}
//////////////	std::sort(v.begin(), v.end());
//////////////
//////////////	//�ߺ� ����
//////////////
//////////////	std::vector<double> vv;
//////////////	vv.push_back(v[0]);
//////////////	for (int i = 1; i < v.size(); i++)
//////////////	{
//////////////		if (v[i] == v[i - 1])
//////////////			continue;
//////////////		vv.push_back(v[i]);
//////////////	}//�ߺ�����
//////////////
//////////////	for (int i = 0; i < v_index.size(); i++)
//////////////	{
//////////////		for (int j = 0; j < vv.size(); j++)
//////////////		{
//////////////			if (v_index[i] == vv[j])
//////////////				std::cout << j << " ";
//////////////		}
//////////////	}
//////////////
//////////////}
//////////////
////////////////#include <iostream>
////////////////#include <vector>
////////////////#include <algorithm>
////////////////
////////////////std::vector<std::pair<double,int>> v;
////////////////int main()
////////////////{
////////////////	int n;
////////////////	std::cin >> n;
////////////////	double x;
////////////////	for (int i = 0; i < n; i++)
////////////////	{
////////////////		std::cin >> x;
////////////////		v.push_back(std::make_pair(x, 0));
////////////////		v
////////////////	}
////////////////	sort(v.begin(), v.end());
////////////////	//������. 
////////////////	for
////////////////	{
////////////////		v[i].first
////////////////	}
////////////////	v[v[i].first]
////////////////
////////////////
////////////////}
////////////
////////////#include <iostream>
////////////#include <list>
////////////
////////////int main()
////////////{
////////////	std::list<int> l;
////////////
////////////	l.push_back(5);
////////////	l.push_back(6);
////////////	l.push_back(7);
////////////
////////////	l.pop_back();
////////////
////////////	l.push_front(4);
////////////	l.push_front(3);
////////////	l.push_front(1);
////////////	l.push_front(0);
////////////
////////////	l.pop_front();
////////////
////////////	std::cout << "list front value: " << l.front() << '\n';
////////////	std::cout << "list and value: " << l.back() << '\n';
////////////
////////////	std::cout << "list size: " << l.size() << '\n';
////////////
////////////	std::cout << "is it empty?: " << (l.empty() ? "Yes" : "No") << '\n';
////////////
////////////	std::list<int>::iterator begin_iter = l.begin();
////////////	std::list<int>::iterator end_iter = l.end();
////////////	//134567
////////////
////////////	// insert
////////////	begin_iter++;	//2��°�� ����Ű�� iterator, ������ 3�� ����Ŵ
////////////	l.insert(begin_iter, 2);	//123456	//3�� �ڸ����� 2��°�ڸ��� 2�� ���鼭 3�� 3��° �ڸ��� ��. �׸��� ������ ���Ҹ� ����Ű�� iterator�� ��ȯ.
////////////	std::cout << *begin_iter<<'\n';	//���ͷ����ʹ� �ڷ� �з������� 3�� ����Ŵ
////////////
////////////	// erase
////////////	end_iter--;	//������ ������ �ڸ� �����״ٰ� ������ ������ ���Ҹ� ����Ŵ
////////////	end_iter=l.erase(end_iter);	//6�� ����. 12345. ������ ������ ���� ���Ҹ� ����Ű�� iterator�� ��ȯ. 
////////////	//������ ����Ʈ�� erase�� �̷��� ��ȯ�� ���� ������ ����Ʈ�� ���������� �ƴϱ⿡ ���������ڸ� �� �����Ѿ� ���� �𸥴�.�׷��� �̷��� �޾ƾ���.
////////////
////////////	std::cout << *(--end_iter) << '\n';	//5���
////////////
////////////	for (auto c : l)std::cout << c << ' ';
////////////}
//////////
//////////#include <iostream>
//////////#include <queue>
//////////
//////////int main()
//////////{
//////////	std::queue<int> q;
//////////
//////////	q.push(1);
//////////	q.push(2);
//////////	q.push(3);
//////////
//////////	std::cout << q.size() << '\n';
//////////
//////////	if (!q.empty())
//////////	{
//////////		std::cout << "queue is not empty" << '\n';
//////////	}
//////////
//////////	q.pop();	//2 3
//////////
//////////	std::cout << q.front() << '\n';	//2	
//////////	std::cout << q.back() << '\n';	//3
//////////}
////////
//////////#include <vector>
//////////#include <algorithm>
//////////int main()
//////////{
//////////	std::vector<int> v1 = { 1, 2, 3 };
//////////	std::vector<std::pair<int, char>> v2;
//////////	v1.push_back(4);
//////////	v1.pop_back();
//////////	v2.push_back(std::make_pair(1, 'a'));
//////////}
////////
//////////#include <iostream>
//////////#include <vector>
//////////
//////////int main()
//////////{
//////////	std::vector<std::vector<int>> v;
//////////	std::vector<int> tv;
//////////	int n;
//////////	std::cin >> n;
//////////	for (int i = 0; i < n; i++)
//////////	{
//////////		for (int j = 0; j < 3; j++)
//////////		{
//////////			int temp;
//////////			scanf("%d", &temp);
//////////			tv.push_back(temp);
//////////		}
//////////		v.push_back(tv);
//////////		tv.clear();
//////////	}
//////////}
////////
////////#include <iostream>
////////#include <vector>
////////
////////int main()
////////{
////////	int n;
////////	std::cin >> n;
////////	std::vector<int> v(n);	//n�� ������ ���� ����, �ڵ����� 0�� ä����
////////	std::vector<std::vector<int>> v2(n,std::vector<int>(n,0));	//2�������� 0 �ʱ�ȭ
////////
////////	for (int i = 0; i < n; i++)
////////	{
////////		std::cout << v[i] << " ";
////////	}std::cout << '\n';
////////	
////////	for (int i = 0; i < n; i++)
////////	{
////////		for (int j = 0; j < v2[i].size(); j++)
////////		{
////////			std::cout << v2[i][j] << " ";
////////		}std::cout << '\n';
////////	}
////////}
//////
////////#include <queue>
////////
////////int main()
////////{
////////	std::queue<int> q1;
////////	std::queue<std::pair<int, char>> q2;
////////	q1.push(4);
////////	q1.pop();
////////	q2.push(std::make_pair(1, 'a'));
////////}
//////
////////#include <stack>
////////
////////int main()
////////{
////////	std::stack<int> s1;
////////	std::stack<std::pair<int, char>> s2;
////////	s1.push(4);
////////	s1.pop();
////////	s2.push(std::make_pair(1, 'a'));
////////}
//////
////////#include <iostream>
////////#include <set>
////////
////////int main()
////////{
////////	std::set<int> s1;
////////	s1.insert(1);
////////	s1.insert(2);
////////	s1.insert(6);
////////	s1.insert(5);
////////	s1.insert(4);
////////	s1.insert(3);
////////	s1.insert(5);	//5�� �־ �ߺ��� ���̴� ���� �ʴ´�.
////////	std::set<int>::iterator it;
////////
////////	for (it = s1.begin(); it != s1.end(); it++)
////////	{
////////		printf("%d", *it);
////////	}
////////	printf("\n\n");
////////	//it = s1.find(7);	//����
////////	//printf("%d\n\n", *it);
////////	
////////	it = s1.find(6);
////////	printf("%d\n\n", *it);
////////}
//////
//////#include <iostream>
//////#include <map>
//////
//////int main()
//////{
//////	std::map<char, int> m1;
//////	m1.insert(std::make_pair('a', 1));
//////	m1.insert(std::make_pair('b', 2));
//////	m1.insert(std::make_pair('c', 3));
//////	m1.insert(std::make_pair('d', 4));
//////	m1.insert(std::make_pair('e', 5));
//////	
//////	m1['e'] = 6;
//////	m1['f'] = 7;
//////	std::map<char, int>::iterator it;
//////	for (it = m1.begin(); it != m1.end(); it++)
//////	{
//////		printf("<%c %d>", (*it).first, (*it).second);
//////	}printf("\n\n");
//////	it = m1.find('c');
//////	printf("%d\n\n", (*it).second);
//////	it = m1.find('d');
//////	printf("%d\n\n", (*it).second);
//////	m1.erase('a');
//////	m1.erase('c');
//////	for (it = m1.begin(); it != m1.end(); it++)
//////	{
//////		printf("<%c %d>", (*it).first, (*it).second);
//////	}
//////	printf("\n\n");
//////}
////
//////#include <iostream>
//////#include <vector>
//////#include <algorithm>
//////
//////bool cmp(int a, int b)
//////{
//////	return a > b;
//////}
//////
//////int main()
//////{
//////	int arr[10]= { 9, 3, 5, 4, 1, 10, 8, 6, 7, 2 };
//////	std::vector<int> v;
//////
//////	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//////	{
//////		v.push_back(arr[i]);
//////	}
//////
//////	std::sort(v.begin(), v.end());
//////	for (int i = 0; i < v.size(); i++)
//////	{
//////		std::cout << v[i] << ' ';
//////	}
//////
//////	std::cout << "\n\n";
//////	std::sort(v.begin(), v.end(), cmp);
//////	for (int i = 0; i < v.size(); i++)
//////	{
//////		std::cout << v[i] << ' ';
//////	}
//////	std::cout << "\n\n";
//////
//////	std::sort(arr, arr + 10);	//ó����ġ, ��������ġ+1
//////
//////	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//////	{
//////		std::cout << arr[i] << ' ';
//////	}
//////}
////
////#include <iostream>
////#include <algorithm>
////#include <map>
////#include <vector>
////
////bool cmp(std::pair<int, int>p1, std::pair<int, int> p2)
////{
////	if (p1.second == p2.second)return p1.first < p2.first;
////	return p1.second < p2.second;
////}
////
////int main()
////{
////	std::map<int, int> m;
////	m.insert(std::make_pair(1, 43));
////	m.insert(std::make_pair(4, 3));
////	m.insert(std::make_pair(3, 5));
////	m.insert(std::make_pair(6, 7));
////	m.insert(std::make_pair(5, 4));
////	m.insert(std::make_pair(2, 5));
////
////	std::vector<std::pair<int, int>> v(m.begin(), m.end());
////
////	for (auto num : m)
////	{
////		v.push_back(std::make_pair(num.first,num.second));
////	}
////
////	for (auto num : v)
////	{
////		std::cout << "key: " << num.first << " l value: " << num.second<<'\n';
////	}std::cout << '\n';
////	
////	std::sort(v.begin(), v.end(), cmp);
////
////	for (auto num : v)
////	{
////		std::cout << "key: " << num.first << " l value: " << num.second<<'\n';
////	}
////
////
////}
//
//
////bfs
//
//#include <iostream>
//#include <queue>
//#define X first
//#define Y second	// pair���� first, second�� �ٿ��� ���� ���ؼ� ���
//
//int board[502][502] = 
//{ {1,1,1,0,1,0,0,0,0,0},
// {1,0,0,0,1,0,0,0,0,0},
// {1,1,1,0,1,0,0,0,0,0},
// {1,1,0,0,1,0,0,0,0,0},
// {0,1,0,0,0,0,0,0,0,0},
// {0,0,0,0,0,0,0,0,0,0},
// {0,0,0,0,0,0,0,0,0,0} };	// 1�� �Ķ� ĭ, 0�� ���� ĭ�� ����
//bool vis[502][502];
//int n = 7, m = 10;		//n = ���� ��, m = ���� ��
//int dx[4] = { -1,0,0,1 };	//�����¿� �� ������ �ǹ�
//int dy[4] = { 0,-1,1,0 };
//
//int main()
//{
//	std::queue<std::pair<int, int>> q;
//	vis[0][0] = 1;	//(0, 0)�� �湮�ߴٰ� ���
//	q.push(std::make_pair(0, 0));	// ť�� �������� (0, 0)�� ����.
//
//	while (!q.empty())
//	{
//		std::pair<int,int> cur = q.front();
//		q.pop();	//�� ó���� ť �����ϱ�...���� ����ִµ� pop�� ���� �ʴ´�. �� �� ���� push�Ѵ�.
//		std::cout << '(' << cur.X << ", " << cur.Y << ") -> ";
//		for (int dir = 0; dir < 4; dir++)	// �����¿� ĭ�� ���캼 ���̴�.
//		{
//			int nx = cur.X + dx[dir];	//[ ] �ȿ� [nx] �̷� ����
//			int ny = cur.Y + dy[dir];	//[ny]
//			if (nx < 0 || nx >= n || ny < 0 || ny >= n)	// ���� ���� ��� �Ѿ, �׸��� �̰� ���� ���ǹ����� �ؾ� vis[-1][0] �̷� ��Ȳ�� �� �Ͼ.
//				continue;
//			if (vis[nx][ny]==1 || board[nx][ny] != 1)	// �̹� �湮�� ĭ�̰ų� �Ķ� ĭ�� �ƴ� ���
//				continue;
//			vis[nx][ny]=1;	//�� ������ �� �ѱ�� �湮�Ѵٰ� ����ϰ� ť�� �ִ´�.
//			q.push({ nx,ny });//==q.push(std::make_pair(nx, ny));
//			
//		}
//	}
//}
//
