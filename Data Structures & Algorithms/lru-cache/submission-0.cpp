class LRUCache {
private:
    unordered_map<int,pair<int,list<int>::iterator>> m;
    list<int> dl;
    int cap;
public:
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if(m.contains(key)){
            dl.push_front(key);
            dl.erase(m[key].second);
            m[key].second = dl.begin();
            return m[key].first;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.contains(key)){
            dl.push_front(key);
            dl.erase(m[key].second);
            m[key] = {value,dl.begin()};
        }
        else{
            dl.push_front(key);
            m[key] = {value,dl.begin()};
            if(dl.size() > cap){
                int k = dl.back();
                dl.pop_back();
                m.erase(k);
            }
        }
    }
};
