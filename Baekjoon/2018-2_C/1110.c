int main() {
    int n1, n2, a, b, d, cnt = 0;
    scanf("%d", &n1);
    n2 = n1;
    while(1) {
        a = n2 / 10;
        b = n2 % 10;
        d = (a + b) % 10;
        cnt++;
        n2 = b * 10 + d;
        if (n1 == n2) break;
    }
    printf("%d\n", cnt);
}