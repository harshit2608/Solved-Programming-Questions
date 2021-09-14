long long multiplyTwoLists(Node *l1, Node *l2)
{
    const unsigned long long m = 1000000007;
    // string str1="",str2="";
    long long n1 = 0, n2 = 0;
    while (l1 || l2)
    {
        if (l1)
        {
            // str1+=to_string(l1->data);
            n1 = ((n1 * 10) + l1->data) % m;
            l1 = l1->next;
        }
        if (l2 != nullptr)
        {
            // str2+=to_string(l2->data);
            n2 = ((n2 * 10) + l2->data) % m;
            l2 = l2->next;
        }
    }

    // long long a = stoll(str1);
    // long long b = stoll(str2);
    // return ((a%m) * (b%m)%m);
    return ((n1 % m) * (n2 % m)) % m;
}