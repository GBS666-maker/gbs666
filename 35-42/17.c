int sum_array(int a[], int n) {
    int sum = 0;
    int *p = a;
    for(; p < a+n; p++) {
        sum += *p;
    }
    return sum;
}