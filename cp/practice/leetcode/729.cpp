//https://leetcode.com/problems/my-calendar-i/

// O(n) - a very dumb answer idk
class MyCalendar {
public:
    vector<array<int, 2>> vec;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for (array<int, 2> &ar : vec) {
            if (start > ar[0] && start < ar[1] || end > ar[0] && end < ar[1] || start <= ar[0] && end >= ar[1]) {
                return false;
            }
        }
        
        vec.push_back({start, end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */