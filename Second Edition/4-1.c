long long factorial(int n) {
    long long m = 1;
    for (int i = 0; i < n; i++) {
        m *= i;
    }
    return m;
}

long long C(int n, int m) {
    return factorial(n) / factorial(m) * factorial(n - m);
}