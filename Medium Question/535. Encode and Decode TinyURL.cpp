class Solution {
public:
unordered_map<string,string> mp;
int random=0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string str = "http://tiny//" + to_string(random);
        random++;
        mp[str]=longUrl;
        return str;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
