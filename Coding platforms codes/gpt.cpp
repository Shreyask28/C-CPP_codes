#include <stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);

    for(long long i = 0; i < n; i++){   // use < n (not <= n)
        int sum = 0;                   // reset sum for each row


        for (int j = 0; j < 7; j++){
            int a;
            scanf("%d", &a);

            if (j < 6) {
                a *= -1;
            

            sum += a; 
            }  // add to sum
        }

        printf("%d\n", sum);   // print sum for this row
    }

    return 0;
}