# Welcome to Day 3 : Codechef Learning Series - Complexity Analysis
-------------------------------------------------------------------

Resources 
* Watch this video on Big-Oh Notation (here)[https://www.youtube.com/watch?v=__vX2sjlpXU]

Common Mistakes while solcving Problems
---------------------------------------

* int OVERFLOW
```
int main()
{
  int a , b,c;
  scanf(“%d %d %d”,&a,&b,&c);
  int ans = a + b + c;
  printf(“%d”,ans);
  return 0;
}
```
This program won't give correct output for all cases as 3*10^9 cannot be stored in INTS you need long long int or unsigned int (4*10^9)

* Comparing Doubles
```
int main()
{
  float a ;
  scanf(“%f”,&a);
  if(a == 10 ) printf(“YES”);
  return 0;
}
```
float/double don’t have infinite precision. BEWARE ( 6/15 digit precision for them respectively

* Negative Modulo
```
int main()
{
 int a = (10 - 12) % 5;
 if(a == -2) printf(“YES”);
 return 0;
}
```

## Day 3 includes the following Problems

|   Problems                                                             |    Solutions                                                |
| -------------                                                          |  -------------                                              |
| (TEST)[https://www.codechef.com/LRNDSA01/problems/TEST]                | (sol)[https://www.codechef.com/viewsolution/30955976]       |
| (FLOW007)[https://www.codechef.com/LRNDSA01/problems/FLOW007]          | (sol)[https://www.codechef.com/viewsolution/30956169]       |
| (LAPIN)[https://www.codechef.com/LRNDSA01/problems/LAPIN]              | (sol)[https://www.codechef.com/viewsolution/30961518]       |
| (ZCO14003)[https://www.codechef.com/LRNDSA01/problems/ZCO14003]        | (sol)[https://www.codechef.com/viewsolution/30962221]       |
| (CARVANS)[https://www.codechef.com/LRNDSA01/problems/CARVANS]          | (sol)[https://www.codechef.com/viewsolution/30962832]       |
| (FCTRL)[https://www.codechef.com/LRNDSA01/problems/FCTRL]              | (sol)[https://www.codechef.com/viewsolution/30976558]       |
| (CONFLIP)[https://www.codechef.com/LRNDSA01/problems/CONFLIP]          | (sol)[https://www.codechef.com/viewsolution/30977388]       |
| (LADDU)[https://www.codechef.com/LRNDSA01/problems/LADDU]              | (sol)[https://www.codechef.com/viewsolution/30980312]       |
| (MULTHREE)[https://www.codechef.com/LRNDSA01/problems/MULTHREE]        | (sol)[https://www.codechef.com/viewsolution/31001718]       |


