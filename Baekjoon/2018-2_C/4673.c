int main() {
    int a, b, c, d, i, temp, result;
    char count[10001] = {0};
    for(i = 1; i <= 10000; i++) {
        a = i % 10;
        b = (i / 10) % 10;
        c = (i / 100) % 10;
        d = (i / 1000) % 10;
        result = a + b + c + d + i;
        if(result<=10000) count[result]++;
    }
    for(i = 1; i <= 10000; i++) 
        if(count[i] == 0) printf("%d\n", i);
}