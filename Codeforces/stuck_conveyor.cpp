#include <bits/stdc++.h>
using namespace std;

char grid[110][110];
int n;
vector<pair<int, int>> snake;
map<pair<int, int>, char> getChar = {
    {{1, 0}, 'v'},
    {{-1, 0}, '^'},
    {{0, 1}, '>'},
    {{0, -1}, '<'}
};

pair<pair<int, int>, char> getBeltAndDir(pair<int, int> p) {
    if(p.first == -1) return {p, 'X'};
    pair<int, int> q = p;

    if(p.first == 0) q.first++;
    if(p.second == 0) q.second++;
    if(p.first > n) q.first--;
    if(p.second > n) q.second--;

    return {q, getChar[{p.first - q.first, p.second - q.second}]};
}

pair<pair<int, int>, char> query(int idx) {

    cout << "? " << snake[idx].first << ' ' << snake[idx].second << endl;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j)
            cout << grid[i][j];
        cout << endl;
    }

    int i, j; cin >> i >> j;

    return getBeltAndDir({i, j});
}

void fillGrid() {
    for(int i = 0; i < n * n; ++i) {
        int dx = snake[i + 1].first - snake[i].first;
        int dy = snake[i + 1].second - snake[i].second;

        grid[snake[i].first][snake[i].second] = getChar[{dx, dy}];
    }
}

int main() {
    cin >> n;

    for(int i = 1; i <= n; ++i)
        if(i % 2 == 0)
            for(int j = n; j >= 1; --j)
                snake.emplace_back(i, j);
        else
            for(int j = 1; j <= n; ++j)
                snake.emplace_back(i, j);

    snake.emplace_back(n + 1, (n % 2 ? n : 1));
    fillGrid();

    auto ans = query(0);

    if(ans.second != 'X') {

        snake.pop_back();
        reverse(snake.begin(), snake.end());
        snake.emplace_back(0, 1);
        fillGrid();

        ans = query(0);
    }

    if(ans.second == 'X') {

        int id = 0;
        for(int j = 13; j >= 0; --j)
            if(id + (1 << j) < n * n && query(id + (1 << j)).second == 'X')
                id += (1 << j);

        ans.first = snake[id];

        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= n; ++j)
                if(i < ans.first.first) grid[i][j] = '^';
                else if(i > ans.first.first) grid[i][j] = 'v';
                else grid[i][j] = j < ans.first.second ? '<' : '>';
            
        ans.second = query(id).second;
    }

    cout << "! " << ans.first.first << ' ' << ans.first.second << ' ' << ans.second << endl;
}