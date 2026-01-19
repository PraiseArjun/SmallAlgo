// Find prefix sum of a vector

vector<int> v = {4, 7, 3, 1, -6, -4, 9};
int n = v.size();
vector<int> prefixS(n,0);

for (int i = 0; i<n; i++)
{
  if (i == 0)
  {
    prefixS[i] = v[i];
    continue;
  }
  prefixS[i] = prefixS[i-1] + v[i];
}

return prefixS;


