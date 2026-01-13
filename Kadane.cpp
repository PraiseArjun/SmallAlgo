/* kadanes algorithm *

vector<int> a = {5,7, -5, 8, 1, -6, 2, 7};
int so_far = 0, ans = INT_MIN;
int n = a.size();
for (int i = 0; i < n; i++)
{
  so_far = a[i] + so_far;
  if (so_far < 0) so_far = 0;
  ans = max(ans, so_far);
}
