// Counting
class DataStream {
public:
    int v, k, cnt = 0;
    DataStream(int value, int key) {
        v = value;
        k = key;
    }
    
    bool consec(int num) {
        if(num != v) cnt = 0;
        else cnt++;
        return cnt >= k;
    }
};

// Sliding Window
class DataStream {
public:
    int vl, k, i = 0, j = 0;
    vector<int> v;
    unordered_map<int, int> m;
    
    DataStream(int value, int key) {
        vl = value;
        k = key;
    }
    
    bool consec(int num) {
        v.push_back(num);
        m[num]++;
        j++;
        if(v.size() < k) return false;
        if(j - i == k) {
            int f = 0;
            if(m.size() == 1 && m.find(vl) != m.end()) f = 1;
            m[v[i]]--;
            if(!m[v[i]]) m.erase(v[i]);
            i++;
            if(f) return true;
        }
        return false;
    }
};