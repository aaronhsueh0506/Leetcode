class Logger {
public:
    Logger() {
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
        if(!m.count(message) || timestamp-10>=m[message]){
            m[message] = timestamp;
            return true;
        }
        return false;
    }

private:
    unordered_map<string, int> m;
};
