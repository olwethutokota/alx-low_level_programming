#include <stdio.h>

/**
 * main - a simple program that outputs unordered
 * combinations of two digit integers without duplicates
 *
 * Return: 0 on success
 */
int main(void)
{
	int ifirst;
	int i;
	int jfirst;
	int j;

	for (ifirst = 48; ifirst < 58; ifirst++)
	{
		for (i = 48; i < 58; i++)
		{
			j = i + 1;
			jfirst = ifirst;
			for (; jfirst < 58; jfirst++)
			{
				for (; j < 58; j++)
				{
