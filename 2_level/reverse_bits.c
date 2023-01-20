unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	unsigned char	part_1;
	unsigned char	part_2;

	part_1 = octet >> 4;
	part_2 = octet << 4;
	result = part_1 | part_2;
	return (result);
}
