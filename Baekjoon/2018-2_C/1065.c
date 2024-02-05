int main() {
    int x, y, z, n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i < 100) sum++;
        else if (i == 1000) continue;
        else {
            x = i % 10;
            y = (i / 10) % 10;
            z = (i / 100) % 10;
            if (z - y == y - x) sum++;
        }
    }
    printf("%d", sum);
}