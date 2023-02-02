template <typename T>
class Queue
{
public:
	void push(T);
	void pop();
	T peek();
	int get_size();
	~Queue();
private:
	int size = 0;
	Node* first = nullptr;
	Node* last = nullptr;
};

template <typename T>
void Queue::push(T item)
{
	if (size == 0)
	{
		first = new Node;
		first->value = item;
		last = first;
	}
	else
	{
		Node* time_last = new Node;
		last->pr = time_last;
		last = time_last;
		last->value = item;
	}
	size += 1;
}

template <typename T>
void Queue::pop()
{
	if (size == 0)
	{
		std::cout << "queue is empty" << std::endl;
	}
	else
	{
		Node* for_delete = first;
		first = first->pr;
		delete for_delete;
		size-=1
	}
}

template <typename T>
T Queue::peek()
{
	return first->value;
}

template <typename T>
int Queue::get_size()
{
	return size;
}

template <typename T>
Queue::~Queue()
{
	while (size != 0)
	{
		pop();
	}
}