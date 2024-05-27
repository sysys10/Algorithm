#include <cstdlib>
#include <iostream>
#include <algorithm>

int compare(const void*a,const void*b){
    return *(int *)a-*(int *)b;
}
int N[500001],M[500001];
int main(){

    int n,m;
    
    std::cin>>n;

    for(int i=0;i<n;i++)
        std::cin>>N[i];

    std::cin>>m;
    for(int i=0;i<m;i++)
        std::cin>>M[i];

    qsort(N,n,sizeof(int),compare);

    for(int i=0;i<m;i++)
        std::cout<<std::upper_bound(N,N+n,M[i])-std::lower_bound(N,N+n,M[i])<<' ';

}