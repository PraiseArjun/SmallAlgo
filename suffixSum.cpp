// Suffix sum of a vector

vector<int> v = {4, 7, 3, 1, -6, -4, 9};
int n = v.size();
vector<int> suffixS(n,0);

for (int i = n-1; i>=0; i--)
{
  if (i == n-1)
  {
    suffixS[i] = v[i];
    continue;
  }
  suffixS[i] = suffixS[i+1] + v[i];
}

return suffixS;
