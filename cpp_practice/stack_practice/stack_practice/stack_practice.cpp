#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
	vector<int> stack;
	vector<int> stack_copy = { 20, 50, 10 };
	vector<int> temp;
	//int num;
public:
	Stack() {}

	/*int getNum() {
		return num;
	}

	void setNum(int num) {
		this->num = num;
	}*/

	void push(int num) {
		stack.push_back(num);
	}

	void pop() {
		stack.pop_back();
	}

	void top() {
		cout << "top에 저장된 정보: " << stack.back() << endl << endl;
	}

	void size() {
		cout << "stack의 사이즈: " << stack.size() << endl << endl;
	}

	bool empty() {
		if (stack.size() > 0) {
			cout << "데이터가 저장되어 있습니다." << endl << endl;
			return true;
		}
		else {
			cout << "데이터가 없습니다." << endl << endl;
			return false;
		}
	}

	void swap() {
		temp = stack;
		stack = stack_copy;
		stack_copy = temp;
	}

	void print() {
		cout << "현재 Stack: ";
		for (int i = 0; i < stack.size(); i++) {
			cout << stack[i] << " ";
		}
		cout << endl << endl;
	}

};

int main() {
	Stack s;

	s.push(1);
	s.push(5);
	s.push(3);
	s.print();
	s.pop();
	s.print();
	s.size();
	s.top();
	s.empty();
	s.swap();
	s.print();

	while (s.empty()) {
		s.print();
		s.pop();
	}
	return 0;
}