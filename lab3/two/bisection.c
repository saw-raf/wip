double result(double a, double b, double eps)
{
	int i=0;
	double s;//approximation of zero of a function
	s=(a+b)/2;
	while((abs(f(s))>eps)
	{
		if(f(a)*f(s)<0)
			b=s;
		else
			a=s;
		s=(a+b)/2;
		i++;
	}
	return s;
}
