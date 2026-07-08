class MyHashSet {
public:
    vector<int> hash;

    MyHashSet() {
        hash.resize(1000001, 0);
    }

    void add(int key) {
        hash[key] = 1;
    }

    void remove(int key) {
        hash[key] = 0;
    }

    bool contains(int key) {
        return hash[key];
    }
};