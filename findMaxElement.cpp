// Find maximum element in a given array

vector<> v = { 7, -6, 9, 34, 3, 54, 12, -6, -3, 13};
int maxe = v[0];
int n = v.size();

for (int i = 0; i < n; i++)
{
  if (v[i] > maxe)
    maxe = v[i];
}

return maxe;
