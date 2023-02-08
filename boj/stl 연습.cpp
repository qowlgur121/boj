//Å¥

//#include <iostream>
//#include <queue>
//
//int main()
//{
//	std::queue<int> q;
//
//	q.push(1);
//	q.push(2);
//	q.push(3);
//
//	std::cout << q.size() << '\n';
//
//	if (!q.empty())
//	{
//		std::cout << "queue is not empty" << '\n';
//	}
//
//	q.pop();	//2 3
//
//	std::cout << q.front() << '\n';	//2	
//	std::cout << q.back() << '\n';	//3
//}

////½ºÅÃ
//
//#include <iostream>
//#include <stack>
//
//int main()
//{
//
//	std::stack<int> s;
//	
//	s.push(1);	//1
//	s.push(2);	//1 2
//	s.push(3);	//1 2 3
//
//	std::cout << s.size() << '\n';
//
//	if (!s.empty())
//	{
//		std::cout << "stack is not empty!" << '\n';
//	}
//
//	s.pop(); //1 2
//
//	std::cout << s.top() << '\n';	//1
//}

////////µ¦

//#include <iostream>
//#include <deque>
//
//int main()
//{
//	std::deque<int> dq;
//
//	dq.push_front(1);	//1
//	dq.push_back(2);	//1 2
//	dq.push_front(3);	//3 1 2
//	
//	dq.insert(dq.begin() + 1, 5);	//3 5 1 2
//
//	std::cout << dq.size() << '\n';	//4
//
//	if (!dq.empty())
//	{
//		std::cout << "deque is not empty!" << '\n';
//	}
//
//	dq.pop_front();		//5	1 2
//	dq.pop_back();		//5 1
//
//	std::cout << dq.front() << '\n';	//5
//	std::cout << dq.back() << '\n';		//1
//	std::cout << dq[1] << '\n';			//1
//
//	dq.erase(dq.begin() + 1);	//5
//	dq.clear();					//{ }
//
//	return 0;
//}