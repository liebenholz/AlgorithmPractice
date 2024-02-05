int main() {
    int n;
    float score[1000];
    float max = 0;
    float sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &score[i]);
    for(int i = 0; i < n; i++)
        if(score[i]>max) max = score[i];
    for(int i = 0; i < n; i++)
        sum += score[i]/max*100;
    printf("%.2f", sum/n);
}