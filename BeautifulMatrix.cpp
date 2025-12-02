#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int m[5][5],k,l,r,c;
    
    for(int i=0;i<5;i++)
    {     
        for(int j=0;j<5;j++)
            { 
                cin>>m[i][j]; 
                
            }
        
    }
            
        

    for(int i=0;i<5;i++)
    {    
        for(int j=0;j<5;j++)
        {
             if(m[i][j]==1)    
              { 
                  k=i+1;l=j+1;
              }
        }
        
    }    
    if(k>3)
    {r=k-3;
    }else{
    r=3-k;}
    
    if(l>3)
    {c=l-3;}
    else{
    c=3-l;}
    system("clear");
    cout<<r+c;
}  