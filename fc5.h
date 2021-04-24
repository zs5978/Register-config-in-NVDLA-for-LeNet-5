#include"nvdla.h"
int fc5(){
int i,j;
int k;
int s[10];
int t[84];
for(i=0;i<84;i++){
t[i] = reg_read8(0x81500000+i);
}
k = 0;
for(i=0;i<10;i++){
s[i]=0;
for(j=0;j<84;j++){s[i] = s[i] + t[i]*fc5_weight[j][i];
}
if(s[i] > s[k]) k = i;
}
for(i = 0;i<10;i++){
printf("%d ",s[i]);}
printf("\n");
return k;
}
