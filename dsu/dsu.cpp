
void makeset() {
    
    for(int i = 1;i <= n;i++)
        p[i] = i;
}

int find_par(int x) {
    
    if(p[x] == x)
        return x;
    p[x] = find_par(p[x]);
    return p[x];
}

void uni(int x,int y) {
    
    int px = find_par(x);
    int py = find_par(y);
    if(px != py) {
        p[px] = py;
    }
}