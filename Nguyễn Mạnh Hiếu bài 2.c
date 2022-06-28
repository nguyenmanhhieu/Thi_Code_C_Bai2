//
//  main.c
//  bai 2 thi code c
//
//  Created by Hiếu Hee on 28/06/2022.
//

#include<stdio.h>
int isEvenNumber(int number);
int display(int n, int m);

// hàm main
int main(){
    int n,m;
    printf("+ n: ");
    scanf("%d",&n);
    printf("+ m: ");
    scanf("%d",&m);
    printf("The even number between %d and %d \n",n,m);
    display(n,m);
    return 0;
    
}
// gọi hàm
int isEvenNumber(int number){
    if(number%2==0)
    return 1;
    else return 0;
}
int display(int n, int m){
    int i;
    for(i=n+1;i<m;i++){
        if(isEvenNumber(i)==1)
        printf("%d \n",i);
    }
    return 0;
}

