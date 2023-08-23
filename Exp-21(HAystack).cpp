#include <stdio.h>
#include <string.h>
int findNeedle(const char *haystack, const char *needle)
{
    int haystackLength = strlen(haystack);
    int needleLength = strlen(needle);
    for (int i = 0; i <= haystackLength - needleLength; i++)
	{
        int j;
        for (j = 0; j < needleLength; j++)
		{
            if (haystack[i + j] != needle[j])
			{
                break;
            }
        }
        if (j == needleLength)
		{
            return i;
        }
    }
    return -1; 
}
int main() 
{
    const char *haystack = "Data structers for indexing.";
    const char *needle = "indexing";

    int index = findNeedle(haystack, needle);
    if (index != -1)
	{
        printf("Needle found at index: %d\n", index);
    } else
	{
        printf("Needle not found.\n");
    }
}

