#include <bits/stdc++.h>
using namespace std;
const int dy[] = {0, 0, 1, -1};
const int dx[] = {1, -1, 0, 0};
std::string arr[5];
bool chks[1 << 25];
int sum = 0;
void Check(int cnt, int scnt, int mask)
{
  chks[mask] = true;
  if(cnt == 7)
  {
    if(scnt >= 4)
      sum++;
    return;
  }
  for(int i = 0; i < 25; i++)
  {
    if((mask & (1 << i)) == 0) continue;
    int y = i/5;
    int x = i%5;
    for(int dir = 0; dir < 4; dir++)
    {
      int ny = y + dy[dir];
      int nx = x + dx[dir];
      int num = ny * 5 + nx;
      if(ny < 0 || nx < 0 || ny >= 5 || nx >= 5) continue;
      if(chks[mask | (1 << num)]) continue;
      Check(cnt + 1, scnt + (arr[ny][nx] == 'S' ? 1 : 0), mask | (1 << num)); 
    }
  }
}
int main() 
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);
  for(int i = 0; i < 5; i++)
    std::cin >> arr[i];
  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      Check(1, (arr[i][j] == 'S' ? 1 : 0), 1 << (i * 5 + j));
    }
  }
  std::cout << sum;
  return 0;
}

----------------


#include <bits/stdc++.h>
using namespace std;
const int dy[] = {0, 0, 1, -1};
const int dx[] = {1, -1, 0, 0};
std::string arr[5];
bool visited[5][5];
int Check(int num, int cnt, int* combi)
{
  int ret = 0;
  if(cnt >= 7)
  {
    std::memset(visited, true, sizeof(visited));
    int scnt = 0, ycnt = 0;
    for(int i = 0; i < 7; i++)
    {
      int y = combi[i] / 5;
      int x = combi[i] % 5;
      scnt += arr[y][x] == 'S' ? 1 : 0;
      ycnt += arr[y][x] == 'Y' ? 1 : 0;
      visited[y][x] = false;
    }
    if(ycnt > scnt)
      return 0;
    int visitcnt = 1;
    std::queue<std::pair<int, int>> q;
    q.push({combi[0]/5, combi[0]%5});
    visited[combi[0]/5][combi[0]%5] = true;
    while(q.size())
    {
      int y = q.front().first;
      int x = q.front().second;
      q.pop();
      for(int dir = 0; dir < 4; dir++)
      {
        int ny = y + dy[dir];
        int nx = x + dx[dir];
        if(ny < 0 || nx < 0 || ny >= 5 || nx >= 5 || visited[ny][nx]) 
          continue;
        visited[ny][nx] = true;
        visitcnt++;
        q.push({ny, nx});
      }
    }
    if(visitcnt < 7)
      return 0;
    return 1;
  }
  for(int i = num; i < 25; i++)
  {
    combi[cnt] = i;
    ret += Check(i+1, cnt+1, combi);
  }
  return ret;
}
int main() 
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);
  for(int i = 0; i < 5; i++)
    std::cin >> arr[i];
  int combi[8];
  std::cout << Check(0, 0, combi);
  return 0;
}