#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> v;
    int sereja = 0;
    int dima = 0;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < t; i++)
    {
        if (*v.begin() < *(v.end() - 1))
        {
            if (i % 2 == 0)
                sereja += *(v.end() - 1);
            else
                dima += *(v.end() - 1);

            v.erase(v.end() - 1);
        }
        else
        {
            if (i % 2 == 0)
                sereja += *v.begin();
            else
                dima += *v.begin();

            v.erase(v.begin());
        }
    }

    cout << sereja << " " << dima;
}