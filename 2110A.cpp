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
        int n;
        cin >> n;
        vec(v, n);
        f(i, n) cin >> v[i];

        srt(v);

        int mx = v[n - 1];
        int mn = v[0];

        int cnt1 = 0;
        int cnt2 = 0;

       
        if (mx % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 != 0)
                    cnt1++;
                else
                    break;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 == 0)
                    cnt1++;
                else
                    break;
            }
        }


        if (mn % 2 == 0)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (v[i] % 2 != 0)
                    cnt2++;
                else
                    break;
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (v[i] % 2 == 0)
                    cnt2++;
                else
                    break;
            }
        }

        cout << min(cnt1, cnt2) << endl;
    }
}