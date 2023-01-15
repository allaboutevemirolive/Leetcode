class B0052 {
    int count;
    public int totalNQueens(int n) {
        count = 0;
        backtrack(0, 0, 0, 0, n);
        return count;
    }
    private void backtrack(int row, int ld, int col, int rd, int n) {
        if (row == (1 << n) - 1) {
            count++;
            return;
        }
        int pos = (~(row | ld | col | rd)) & ((1 << n) - 1);
        while (pos > 0) {
            int p = pos & -pos;
            pos -= p;
            backtrack((row | p), (ld | p) << 1, (col | p), (rd | p) >> 1, n);
        }
    }
}