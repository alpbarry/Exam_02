unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	bits;
	int	i;

	i = 0;
	while (i <= 8)
	{
		bits = (bits << 1) | (octet & 1);
		bits >>= 1;
		i++;
	}

