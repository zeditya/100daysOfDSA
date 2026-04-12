 int u = -1;
        for(int i = 0; i < n; i++) {
            if(!mstSet[i] && (u == -1 || key[i] < key[u])) {
                u = i;
            }
        }

        mstSet[u] = 1;
        totalCost += key[u];

        for(int v = 0; v < n; v++) {
            if(!mstSet[v]) {
                int dist = manhattan(points[u], points[v]);
                if(dist < key[v]) {
                    key[v] = dist;
                }
            }
        }
    }

    free(key);
    free(mstSet);

    return totalCost;
}