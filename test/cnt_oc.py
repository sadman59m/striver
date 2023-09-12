var = "this is a string"


def cntOc(ss):
    cnt_dic = {}
    for ch in ss:
        if ch in cnt_dic and ch != " ":
            cnt_dic[ch] += 1
        elif ch != " ":
            cnt_dic[ch] = 1
    return cnt_dic


if __name__ == "__main__":
    print(cntOc(var))
