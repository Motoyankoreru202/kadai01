int main(void)
		{	long long n=1000000000;
			long long sum=0;
			for(long long i=1; i<=n; i++){
				sum+=i;
			}
			double avg =(double)sum/n;
			printf("%f\n",avg);
			return 0;
		}
