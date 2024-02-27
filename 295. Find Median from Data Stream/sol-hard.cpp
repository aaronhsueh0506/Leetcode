class MedianFinder {
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        left.push(num);

        right.push(-left.top());
        left.pop();
        if(right.size()>left.size()){
          left.push(-right.top());
          right.pop();
        }
    }
    
    double findMedian() {
        return left.size() == right.size() ? 0.5*(left.top()-right.top()) : left.top();
    }
private:
  priority_queue<long> left, right;
};
