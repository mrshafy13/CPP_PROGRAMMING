//{ Driver Code Starts
//Initial Template for C++
//Initial Template for C++

//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8;
int numbers[mx];


#define memset(a, b) memset(a,b,sizeof(a));
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n";



multiset<int> multisetInsert(int arr[],int n); //Function to insert elements of array into a multiset and return a multiset


void multisetDisplay(multiset<int>s); //function to print the elements of the multiset


void multisetErase(multiset<int>&s,int x); //function to erase x from multiset if it exists


// } Driver Code Ends
//User function Template for C++


multiset<int> multisetInsert(int arr[],int n)
{
    multiset<int>s;
   //Insert elements into a multiset
    for(int i = 0; i<n; i++)
    {
        s.insert(arr[i]);
    }
    
    return s;
    
}


void multisetDisplay(multiset<int>s)
{
    //Multiset display print elements
    for(auto u : s)
    {
        cout << u << " ";
    }
    cout<<endl;
}


void multisetErase(multiset<int>&s,int x)
{
    //If and else condition to erase x from multiset
    bool f= 0;
    for(auto u: s)
    {
        if(u == x)
        {
            s.erase(x);
            f = 1;
            break;
        }
    }
    if(f == 1)
    cout<<"erased "<<x;
    else
    cout<<"not found";
    
    
    cout<<endl;
}

//{ Driver Code Starts.

int main() 
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n]; //array of size n
        for(int i=0;i<n;i++)
        cin>>arr[i]; //Input the array
        
        multiset<int>s=multisetInsert(arr,n); //call the insert function that returns a multiset
        multisetDisplay(s);// display the inserted multiset
        int x;
        cin>>x; //x element that needs to be erased from multiset
        
        multisetErase(s,x); //try to erase x from multiset
        multisetDisplay(s); //print the multiset after erase operation
        
        
    }
	return 0;
}




// } Driver Code Ends