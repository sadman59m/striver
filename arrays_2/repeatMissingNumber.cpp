vector<int> Solution::repeatedNumber(const vector<int> &A)
{
    int sz = A.size();
    vector<int> tmp = A;
    sort(tmp.begin(), tmp.end());
    vector<int> ans;

    long long total_sum = (sz * (sz + 1)) / 2;
    long long found_sum = 0;
    for (int i = 0; i < sz; ++i)
        found_sum += tmp[i];
    long long repeat, miss;
    for (int i = 1; i < sz; ++i)
    {
        if (tmp[i] == tmp[i - 1])
        {
            repeat = tmp[i];
        }
    }

    found_sum -= repeat;

    miss = total_sum - found_sum;

    ans.push_back(repeat);
    ans.push_back(miss);

    return ans;
}
