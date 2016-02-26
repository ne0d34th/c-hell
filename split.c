#include<stdio.h>

struct WORD
{
	char *word;
	char *next;
};

struct WORD splitWord(char *word, char splitter)
{
	struct WORD result;
	int search = 0;
	while(*(word+search)!=splitter)
	{
		search++;
	}
	char *newWord;
	newWord = calloc(search+1,sizeof(char));
	for(int i=0;i<search;i++)
	{
		*(newWord+i) = *(word+i);
	}
	*(newWord+search+1) = '\0';
	result.word = newWord;
	result.next = word+search+1;
	return result;
}

int main()
{
	char coba[50] = "aku sakit gigi";

	struct WORD hasil = splitWord(coba, ' ');
	printf("%s\n", hasil.word);
	printf("%s", hasil.next);

	return 0;
}
