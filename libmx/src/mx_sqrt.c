// good
int mx_sqrt(int x) {
    for (int i = 2; i <= (x / 2); i++)
    {
        if((i + 1000) * (i + 1000) < x) {
            i = i + 1000;
        }
        if(i * i == x) {
            return i;
        }
    }
    return 0; 
}
