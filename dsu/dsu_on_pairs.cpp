
void makeset() {
    
    for(int i = 1;i <= n;i++)
        for(int j = 1;j <= n;j++)
            p[i][j] = make_pair(i,j);
}

pair <int,int> find_par(pair <int,int> x) {
    
    if(p[x.first][x.second] == x)
        return x;
    p[x.first][x.second] = find_par(p[x.first][x.second]);
    return p[x.first][x.second];
}

void uni(pair <int,int> x,pair <int,int> y) {
    
    pair <int,int> px = find_par(x);
    pair <int,int> py = find_par(y);
    if(px != py) {
        p[px.first][px.second] = py;
    }
}