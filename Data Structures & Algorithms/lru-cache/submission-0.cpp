class LRUCache {
   public:
    list<int> l;
    unordered_map<int, pair<int, list<int>::iterator>> mp;
    int c;
    LRUCache(int capacity) { c = capacity; }

    int get(int key) {
        if(mp.find(key) != mp.end()){
            l.erase(mp[key].second);
            l.push_front(key);
            mp[key].second = l.begin();
            return mp[key].first;
        }return -1;
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            // exisiting
            l.erase(mp[key].second);
        } else if (c == l.size()) {
            // new key
            mp.erase(l.back());
            l.pop_back();
        }
        l.push_front(key);
        mp[key].first = value;
        mp[key].second = l.begin();
    }
};
