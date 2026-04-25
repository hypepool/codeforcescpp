/*

      ██   ██ ██    ██ ██████  ███████
      ██   ██ ██    ██ ██  ██  ██
      ███████ ████████ ██████  █████
      ██   ██    ██    ██      ██
      ██   ██    ██    ██      ███████

*/
#include <bits/stdc++.h>
using namespace std;

#define tt    \
    int t;    \
    cin >> t; \
    while (t--)
#define f(i, a) for (int i = 0; i < a; i++)
#define fr(i, bg, a) for (int i = bg; i <= a; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define endd cout << endl
#define vec(v, n) vector<int> v(n)
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define minv(v) *min_element((v).begin(), (v).end())
#define maxv(v) *max_element((v).begin(), (v).end())
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
int main()
{
    optimize();
    tt
    {
        int n, flg = 1, cnt1 = 0;
        cin >> n;
        vec(v, n);
        f(i, n)
        {
            cin >> v[i];
            if (v[i] == 1)
                cnt1++;
        }
        if (cnt1 == n)
        {
            yes;
            continue;
        }

        f(i, n - 1)
        {
            if (v[i] == 0 && v[i + 1] == 0)
            {
                yes;
                flg = 0;
                break;
            }
        }
        if (flg)
            no;
    }
}