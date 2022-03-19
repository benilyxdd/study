// https://leetcode.com/problems/implement-queue-using-stacks/

// O(?)
class MyQueue {
 public:
  stack<int> a, b;

  MyQueue() {}

  void push(int x) {
    while (!a.empty()) {
      int top = a.top();
      a.pop();
      b.push(top);
    }
    b.push(x);
    while (!b.empty()) {
      int top = b.top();
      b.pop();
      a.push(top);
    }
  }

  int pop() {
    if (!a.empty()) {
      int top = a.top();
      a.pop();
      return top;
    }
    return -1;  // impossble
  }

  int peek() {
    if (!a.empty()) {
      int top = a.top();
      return top;
    }
    return -1;  // impossible
  }

  bool empty() { return a.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
        b.push(x);
 */