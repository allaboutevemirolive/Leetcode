from ast import List


class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        def dfs(row, path, diagonal_1, diagonal_2, result):
            if row == n:
                result.append(["".join(["Q" if i == col else "." for i in range(n)]) for col in path])
                return
            for col in range(n):
                if col not in path and row - col not in diagonal_1 and row + col not in diagonal_2:
                    dfs(row + 1, path + [col], diagonal_1 + [row - col], diagonal_2 + [row + col], result)

        result = []
        dfs(0, [], [], [], result)
        return result