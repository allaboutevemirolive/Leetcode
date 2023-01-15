import java.util.List;

class A {
    public static void main(String[] args) {
        C C = new C();
        int n = 8; // Example value, replace with desired input
        List<List<String>> ans = C.solveNQueens(n);
        for (List<String> list : ans) {
            for (String s : list) {
                System.out.println(s);
            }
            System.out.println();
        }
    }
}
