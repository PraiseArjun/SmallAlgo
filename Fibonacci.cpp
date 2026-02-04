// Perfect recursion and overlapping subproblems example fibonacci
// converted to space optimised DP

int n = 10;

int a = 0;
int b = 1;

cout<<a<<endl<<b<<endl;
for (int i = 3; i <=n; i++)
{
  int c = a + b;
  cout<<c<<endl;
  a = b;
  b = c;
}
