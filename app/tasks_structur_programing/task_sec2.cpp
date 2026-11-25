#include<iostream>
#include<array>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"enter three numbers :"<<endl;
    cout<<"enter one numbers :====>";
    cin>>num1;
    cout<<"enter two numbers :====>";
    cin>>num2;
    cout<<"enter three numbers====> :";
    cin>>num3;
    // ? solve 1 
    // if (num1<num2 && num1<num3)
    // {
    //     cout<<num1<<" , ";
    //     if (num2<num3)
    //     {
    //         cout<<num2<<" , "<<num3;
    //     }else{
    //         cout<<num2<<" , "<<num3;
    //     }
        
    // }else  if (num2<num1 && num2<num3)
    // {
    //     cout<<num2<<" , ";
    //     if (num1<num3)
    //     {
    //         cout<<num1<<" , "<<num3;
    //     }else{
    //         cout<<num3<<" , "<<num1;
    //     }
        
    // }else 
    // {
    //     cout<<num3<<" , ";
    //     if (num2<num1)
    //     {
    //         cout<<num2<<" , "<<num1;
    //     }else{
    //         cout<<num1<<" , "<<num2;
    //     }
        
    // }
    // todo solve 2;
    if (num1<num2 && num1<num3 && num2<num3)
    {
        cout<<num1<<" , "<<num2<<" , "<<num3<<endl;
    } 
    else if (num2<num1&& num2<num3&&num3<num1)
    {
        cout<<num2<<" , "<<num3<<" , "<<num1<<endl;
    }else if(num3<num2&&  num3< num1 && num2<num1)
    {
        cout<<num3<<" , "<<num2<<" , "<<num1<<endl;
    }else if (num1<num2 && num1<num3 && num3<num2)
    {
        cout<<num1<<" , "<<num3<<" , "<<num2<<endl;
    } else if (num2<num1&& num2<num3&&num1<num3)
    {
        cout<<num2<<" , "<<num1<<" , "<<num3<<endl;
    }else 
    {
        cout<<num3<<" , "<<num1<<" , "<<num2<<endl;
    }
    // *solve 3
    //!Q
        // int n,check;
        // array<int,100> nums;
        // cout<<"enter number of digit :";
        // cin>>n;
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<"enter the num "<<i+1<< "===> ";
        //     cin>>nums[i];
        // }
        // for (int k = 0; k < n; k++)
        // {
        //     for (int l = 0; l < n; l++)
        //     {
        //         if (l==k)
        //         {
        //             continue;
        //         }

        //         if (nums[k]<=nums[l])
        //         {
        //             cout<<nums[k]<<" , ";
        //             break;
        //         }
                
        //     }
            
            
        // }
        
        
    return 0;
}