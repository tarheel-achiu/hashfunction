/*
 * from https://www.reddit.com/r/cs50/comments/1x6vc8/pset6_trie_vs_hashtable/cf9nlkn/
 */

#include <stdio.h>
#include <string.h>

int hash_func(char* string);

#define HASHTABLE_SIZE 65536

int main() {

    char *word = "bob";
    int result = hash_func(word);
    printf("%i\n", result);
    return 0;
}

int hash_func(char* needs_hashing)
{
    unsigned int hash = 0;
    for (int i=0, n=strlen(needs_hashing); i<n; i++)
        hash = (hash << 2) ^ needs_hashing[i];
    return hash % HASHTABLE_SIZE;
}
