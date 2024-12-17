#include<iostream>
using namespace std;
template<class T>
void selection_sort()
{
               T a[50];
                int n;
                cout<<"enter no of elements: " ;
                cin>>n;
                for(int i=0;i<n;i++)
                {
                cin>>a[i];
                }
                cout<<"Array: "<<endl;
                for(int i=0;i<n;i++)
                {
                cout<<a[i]<<"\t";
                }
                cout<<endl;
                for(int i=0;i<n-1;i++)
                {
                            int min=i;
                            for(int j=i+1;j<n;j++)
                            {
                                    if(a[j]<a[min])
                                   {
                                   min=j;
                                   }
                            }
                            if (min!=i)
                            {   
                                    T temp;
                                    temp=a[min];
                                    a[min]=a[i];
                                    a[i]=temp;
                             }
                   }
                   cout<<"sorted array: "<<endl;
                   for(int i= 0;i<n;i++)
                   {
                   cout<<a[i]<<"\t";
                   }
                   cout<<endl;
  }
  int main()
  {
        cout<<"\n selection sorting for int"<<endl;
        selection_sort<int>();
        cout<<"\n selection sortiong for float"<<endl;
        selection_sort<float>();
        
        return 0;
   }
