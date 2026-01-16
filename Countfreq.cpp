// Find frequency of an element in an array

int ele = 6;
vector<> v = {6, 5, 8, -2, 6, 6, 9, 100};

unordered_map<int,int> mp;
int n = v.size();

for(int i = 0; i<n; i++)
{
  mp[v[i]]++;
}
return mp[ele];
