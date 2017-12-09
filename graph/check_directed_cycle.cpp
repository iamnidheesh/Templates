// if (!flag) cout<<"cycle"

void dfs(int x) {
	if(flag == false)
		return;
	vis[x] = 1;
	for(int i = 0;i < adj[x].size();i++) {
		int v = adj[x][i];
		if(!vis[v])
			dfs(v);
		else if(vis[v] == 1){
			flag = false;
			return;
		}
	}
	vis[x] = 2;  // recursion stack
	toporder.push_back(x); // reverse this for topological order

}