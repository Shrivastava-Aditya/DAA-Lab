
#include <stdio.h>
#include <time.h>
int sum(int arr[],int n){
    clock_t t;
   int result = 0;
   t = clock ();
   for(int i=0;i<n;i++)
   {
       result+=arr[i];
   }
   t = clock () - t;
   double time_taken = ((double)t)/CLOCKS_PER_SEC;
   printf("this function took %f seconds to execute \n", time_taken);
   return result;
}
int summation(int arr[],int n,int sum)
{
     clock_t t;
   int result = 0;
   t = clock ();
   if(n==0)
        return sum;
    sum+=arr[n-1];
    summation(arr,n-1,sum);
   t = clock () - t;
   double time_taken = ((double)t)/CLOCKS_PER_SEC;
   printf("this function took %f seconds to execute \n", time_taken);
}
int threesum(int arr[],int n)
{
    clock_t t;
    t = clock();
    int count = 0;
    if(n<3){return 0;}
    if(n==3 && arr[0]+arr[1]+arr[2]!=0){return 0;}
    
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            for(int k=2;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    count++;
                }
            }
        }
    }
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("this function took %f seconds to execute \n", time_taken);
    return count;
    
}
int power(int num,int p){
    clock_t t;
    t = clock();
    int init = num;
    for(int i=1;i<p;i++){
        num*=init;
    }
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
   printf("this function took %f seconds to execute \n", time_taken);
    return num;
}
int squareTrick(int a,int b)
{
    clock_t t;
    t = clock();
    if(b>1)
    {
        return squareTrick(a,b-1)*a;
    }
    if(b==0){
        return squareTrick(a,b-1)*1;
    }
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("this function took %f seconds to execute \n", time_taken);
    return a;
}
int main()
{
    int arr[]={4,5,-9,1,6};
    
    printf("%d",threesum(arr,5));
    
    return 0;
}
