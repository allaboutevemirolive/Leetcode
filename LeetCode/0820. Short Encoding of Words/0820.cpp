struct TrieNode {
  vector<shared_ptr<TrieNode>> children;
  int depth = 0;
  TrieNode() : children(26) {}
};

class Solution {
 public:
  int minimumLengthEncoding(vector<string>& words) {
    int ans = 0;
    shared_ptr<TrieNode> root = make_shared<TrieNode>();
    vector<shared_ptr<TrieNode>> heads;

    for (const string& word : unordered_set<string>(begin(words), end(words)))
      heads.push_back(insert(root, word));

    for (shared_ptr<TrieNode> head : heads)
      if (all_of(begin(head->children), end(head->children),
                 [](const auto& child) { return child == nullptr; }))
        ans += head->depth + 1;

    return ans;
  }

 private:
  shared_ptr<TrieNode> insert(shared_ptr<TrieNode> root, const string& word) {
    shared_ptr<TrieNode> node = root;
    for (const char c : string(rbegin(word), rend(word))) {
      const int i = c - 'a';
      if (!node->children[i])
        node->children[i] = make_shared<TrieNode>();
      node = node->children[i];
    }
    node->depth = word.length();
    return node;
  }
};
