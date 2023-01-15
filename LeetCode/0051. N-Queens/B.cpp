class Solution
{
public:
  vector<vector<string>> solveNQueens(int n)
  {
    vector<vector<string>> result;
    vector<int> path;
    unordered_set<int> diag1, diag2;
    dfs(0, n, path, diag1, diag2, result);
    return result;
  }

  void dfs(int row, int n, vector<int> &path, unordered_set<int> &diag1, unordered_set<int> &diag2, vector<vector<string>> &result)
  {
    if (row == n)
    {
      vector<string> solution;
      for (int i = 0; i < n; i++)
      {
        string row_str(n, '.');
        row_str[path[i]] = 'Q';
        solution.push_back(row_str);
      }
      result.push_back(solution);
      return;
    }

    for (int col = 0; col < n; col++)
    {
      if (path.empty() || path.back() != col && diag1.count(row - col) == 0 && diag2.count(row + col) == 0)
      {
        path.push_back(col);
        diag1.insert(row - col);
        diag2.insert(row + col);
        dfs(row + 1, n, path, diag1, diag2, result);
        diag1.erase(row - col);
        diag2.erase(row + col);
        path.pop_back();
      }
    }
  }
};
