void rev(string &str, int low, int high)
{
    while (low < high)
    {
        swap(str[low], str[high]);
        low++;
        high--;
    }
}

string solve(string sentence)
{
    int start = 0;
    for (int end = 0; end < sentence.size(); end++)
    {
        if (sentence[end] == ' ')
        {
            rev(sentence, start, end - 1);
            start = end + 1;
        }
    }

    rev(sentence, start, sentence.size() - 1);
    rev(sentence, 0, sentence.size() - 1);

    return sentence;
}