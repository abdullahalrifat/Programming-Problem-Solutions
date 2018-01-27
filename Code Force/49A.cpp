#include<cstdio>
#include<cstring>
int main()
{
    char in[105];
    bool ans = false;
    int c,len;
    while ((c = getchar()) != EOF)
    {
        ans = false;
        gets(in);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        {
            ans = true;
        }
        else if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
            ans = false;
        }
        for (int i = 0; in[i] != '\0'; i++)
        {
            if (in[i] == 'A' || in[i] == 'E' || in[i] == 'I' || in[i] == 'O' || in[i] == 'U' || in[i] == 'Y' || in[i] == 'a' || in[i] == 'e' || in[i] == 'i' || in[i] == 'o' || in[i] == 'u' || in[i] == 'y')
            {
                ans = true;
            }
            else if ((in[i] >= 65 && in[i] <= 90) || (in[i] >= 97 && in[i] <= 122))
            {
                ans = false;
            }
        }

        if (ans == true)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}