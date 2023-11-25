char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
