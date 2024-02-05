int main() {
    int m, d;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    char *day[] = { "SUN" ,"MON", "TUE", "WED", "THU", "FRI", "SAT" };
    scanf("%d %d", &m, &d);
    for(int i = 0; i < m - 1; i++)
        d += month[i];
    printf("%s", day[d%7]);
}