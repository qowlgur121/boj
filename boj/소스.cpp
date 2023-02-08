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
//////////////	//중복 삭제
//////////////
//////////////	std::vector<double> vv;
//////////////	vv.push_back(v[0]);
//////////////	for (int i = 1; i < v.size(); i++)
//////////////	{
//////////////		if (v[i] == v[i - 1])
//////////////			continue;
//////////////		vv.push_back(v[i]);
//////////////	}//중복삭제
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
////////////////	//정렬함. 
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
////////////	begin_iter++;	//2번째를 가리키는 iterator, 지금은 3을 가리킴
////////////	l.insert(begin_iter, 2);	//123456	//3의 자리엿던 2번째자리에 2가 들어가면서 3은 3번째 자리가 됨. 그리고 삽입한 원소를 가리키는 iterator를 반환.
////////////	std::cout << *begin_iter<<'\n';	//이터레이터는 뒤로 밀려나가서 3을 가리킴
////////////
////////////	// erase
////////////	end_iter--;	//마지막 원소의 뒤를 가리켰다가 지금은 마지막 원소를 가리킴
////////////	end_iter=l.erase(end_iter);	//6을 삭제. 12345. 삭제한 원소의 다음 원소를 가리키는 iterator를 반환. 
////////////	//주의점 리스트의 erase는 이렇게 반환을 받지 않으면 리스트는 순차접근이 아니기에 다음지시자를 뭘 가리켜야 할지 모른다.그래서 이렇게 받아야함.
////////////
////////////	std::cout << *(--end_iter) << '\n';	//5출력
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
////////	std::vector<int> v(n);	//n개 길이의 벡터 선언, 자동으로 0이 채워짐
////////	std::vector<std::vector<int>> v2(n,std::vector<int>(n,0));	//2차원벡터 0 초기화
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
////////	s1.insert(5);	//5를 넣어도 중복된 값이니 들어가지 않는다.
////////	std::set<int>::iterator it;
////////
////////	for (it = s1.begin(); it != s1.end(); it++)
////////	{
////////		printf("%d", *it);
////////	}
////////	printf("\n\n");
////////	//it = s1.find(7);	//오류
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
//////	std::sort(arr, arr + 10);	//처음위치, 마지막위치+1
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
//#define Y second	// pair에서 first, second를 줄여서 쓰기 위해서 사용
//
//int board[502][502] = 
//{ {1,1,1,0,1,0,0,0,0,0},
// {1,0,0,0,1,0,0,0,0,0},
// {1,1,1,0,1,0,0,0,0,0},
// {1,1,0,0,1,0,0,0,0,0},
// {0,1,0,0,0,0,0,0,0,0},
// {0,0,0,0,0,0,0,0,0,0},
// {0,0,0,0,0,0,0,0,0,0} };	// 1이 파란 칸, 0이 빨간 칸에 대응
//bool vis[502][502];
//int n = 7, m = 10;		//n = 행의 수, m = 열의 수
//int dx[4] = { -1,0,0,1 };	//상하좌우 네 방향을 의미
//int dy[4] = { 0,-1,1,0 };
//
//int main()
//{
//	std::queue<std::pair<int, int>> q;
//	vis[0][0] = 1;	//(0, 0)을 방문했다고 명시
//	q.push(std::make_pair(0, 0));	// 큐에 시작점인 (0, 0)을 삽입.
//
//	while (!q.empty())
//	{
//		std::pair<int,int> cur = q.front();
//		q.pop();	//맨 처음에 큐 넣으니까...절대 비어있는데 pop을 하지 않는다. 맨 밑 보면 push한다.
//		std::cout << '(' << cur.X << ", " << cur.Y << ") -> ";
//		for (int dir = 0; dir < 4; dir++)	// 상하좌우 칸을 살펴볼 것이다.
//		{
//			int nx = cur.X + dx[dir];	//[ ] 안에 [nx] 이런 느낌
//			int ny = cur.Y + dy[dir];	//[ny]
//			if (nx < 0 || nx >= n || ny < 0 || ny >= n)	// 범위 밖일 경우 넘어감, 그리고 이걸 먼저 조건문으로 해야 vis[-1][0] 이런 상황이 안 일어남.
//				continue;
//			if (vis[nx][ny]==1 || board[nx][ny] != 1)	// 이미 방문한 칸이거나 파란 칸이 아닐 경우
//				continue;
//			vis[nx][ny]=1;	//위 조건을 다 넘기면 방문한다고 기록하고 큐에 넣는다.
//			q.push({ nx,ny });//==q.push(std::make_pair(nx, ny));
//			
//		}
//	}
//}
//
