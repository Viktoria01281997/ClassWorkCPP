#include<iostream>
using namespace std;
template <typename T>
class Stack {
private:
	T* stack=nullptr;
	int count=0;
	int capacity;
public:
	Stack(int capacity) {
		stack = new T[capacity];
		this->capacity = capacity;
		
	}
	Stack (Stack& ct) {
		this->count = ct.count;
		this->capacity = ct.capacity;
		if (stack != nullptr) delete[]stack;
		stack = new T[capacity];
		for (int i = 0; i < count; i++) {
			stack[i] = ct.stack[i];
		}
	}
	void operator =(Stack& ct) {
		this->count = ct.count;
		this->capacity = ct.capacity;
		if (stack != nullptr) delete[]stack;
		stack = new T[capacity];
		for (int i = 0; i < count; i++) {
			stack[i] = ct.stack[i];
		}
	}
	~Stack() {
		if(stack!=nullptr)
		delete[]stack;
	}
	T top() {
		return stack[count - 1];
	}
	bool empty() {
		return !count;
	}
	int size() {
		return this->count;
	}
	void push(T el) {
		if (count >= capacity) return;
		stack[count++] = el;
	}
	T pop() {
		if (count == 0) return NULL;
		count--;
		return stack[count];
	}
	
	
};
template <typename T>
void showStack(Stack<T> stack) {
	while (!stack.empty()) {
		cout << stack.pop();
		
	}
}

template <typename T>
class Queue {
private:
	T* queue = nullptr;
	int count = 0;
	int meaning;
public:
	Queue(int meaning) {
		queue = new T[meaning];
		this->meaning = meaning;
	}
	Queue(Queue& other) {
		this->count = other.count;
		this->meaning = other.meaning;
		if (queue != nullptr)
			delete[]queue;
		//queue = new T[meaning];
		for (int i = 0; i < count; i++) {
			queue[i] = other.queue[i];
		}
	}
	void operator = (Queue& other) {
		this->count = other.count;
		this->meaning = other.meaning;
		if (queue != nullptr)
			delete[]queue;
		queue = new T[meaning];
		for (int i = 0; i < count; i++) {
			queue[i] = other.queue[i];
		}
	}
	bool empty() {				//проверяет, пуст ли базовый контейнер
		return !count;
	}
	T front() {
		return queue[count - 1];
	}
	int size() {				//возвращает количество элементов
		return this->count;
	}
	void push(T* el) {			//	вставляет элемент в конец
		if (count < meaning) return;
		queue[count++] = el;
	}
	T pop() {			//удаляет первый элемент
		T buf = queue[0];
		if (count <= 0) return NULL;
		for (int i = 0; i < count; i++) {
			queue[i] = queue[i + 1];
		}
	}
	void push_range(Queue q) {	
		if (count+q.count>meaning) return;
		for (int i = 0; i < q.count; i++) {
			queue[count++] = q.queue[i];
		}
	}
	~Queue() {

		if (queue != nullptr)
			delete[]queue;
	}
};

template<typename T>
void showQueue(Queue<T> queue) {
	while (queue.empty()) {
		cout << queue.pop();
	}
}

int main() {
	/*Stack<int>stack(3);
	cout << "---push 3 4 6 9" << endl;
	stack.push(3);
	stack.push(4);
	stack.push(6);
	stack.push(9);
	cout << "---pop" << endl;
	cout << stack.pop() << endl;
	cout << "-----showAll----" << endl;
	showStack(stack);*/
	return 0;
}