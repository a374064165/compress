int length(unsigned char i)//��i�����ü�λ����ʾ
{
	int k = 0;
	while (i != 0)
	{
		i = i >> 1;
		k++;
	}
	return k;
}


void Traceback(int n, int& m, unsigned int s[], unsigned int l[])
{
	if (n == 0)
		return;
	Traceback(n - l[n], m, s, l);
	s[m++] = n - l[n];  //����Ϊs[]���鸳ֵ�������洢�ֶ�λ��  
}
