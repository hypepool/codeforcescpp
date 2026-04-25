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
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        if (k < a && k < b)
        {
            cout << "0" << endl;
        }
        else
        {
            if (x < y)
            {
                int ax = 0, bx = 0;
                if (k >= a)
                    ax = (k - a) / x + 1;

                int temp = k - (ax * x);
                if (temp >= b)
                    bx = (temp - b) / y + 1;

                cout << ax + bx << endl;
            }
            else
            {
                int ax = 0, bx = 0;
                if (k >= b)
                    ax = (k - b) / y + 1;

                int temp = k - (ax * y);
                if (temp >= a)
                    bx = (temp - a) / x + 1;

                cout << ax + bx << endl;
            }
        }
    }
}
