//Task 1
#include <iostream>

using namespace std;

int main(){
    int x;
    cout << "Enter any number"<<endl;
    cin>>x;

    cout<<"Factors of "<<x<<" are : "<<endl;

    for (int i = 1; i <= x; i++) {
        if (x%i==0) {
            cout<<i<<endl;
        }
    }

    return 0;
}
//Task 3
#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter any number "<<endl;
    cin>>x;
    if (x > 10 && x <=20){
        cout<<"1";}
        
    else{cout<<"0";}
    return 0;
//Task 4
#include <iostream>
using namespace std;

int main()
{
    int N, factors, i, j;
    cout<<"Enter any Number"<<endl;
    cin>>N;

    i = N;
    while (i >= 2) {
        factors = 0;

        j = 1;
        while (j <= i) {
            if (i%j==0) {
                factors++;
            }
            j++;
        }

        if (factors==2) {
            cout<<"The highest prime number lower than your Number is: "<<i;
            break;
        }

        i--;
    }
    return 0;
}
//Task 5
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2, reversed;
    reversed = "";
    cout<<"Enter 1st String: ";
    cin>>str1;
    cout<<"Enter 2nd String: ";
    cin>>str2;

    if (str1 == str2) {
        for (int i = 0; i < str1.length(); i++) {
            reversed = str1[i] + reversed;
        }
        cout<<"Strings are equal. Reversed string is: ";
        cout<<reversed;
    }
    else {
        cout<<"Strings are unequal";
    }
    return 0;
}
//Task 6
#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor, remainder, quotient;
    cout<<"Enter Dividend Greater than Divisor"<<endl;
    cout<<"Enter The dividend"<<endl;
    cin>>dividend;
    cout<<"Enter The divisor"<<endl;
    cin>>divisor;

    if (dividend < divisor) {
        cout<<"Please Enter a dividend greater than divisor.";
        return 1;
    }
    remainder = dividend;

    for (int i = 1; i <= dividend; i++) {
        remainder -= divisor;

        if (remainder < divisor) {
            quotient = i;
            break;
        }
    }

    cout<<dividend<<" / "<<divisor<<" = "<<quotient;
    return 0;
}
//Task 7
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "HHHHHeeeeellllLLLLooooo"; 
    string result = "";
    for(int i = 0; i < str1.length(); i++){
        bool isDuplicate = false;
        for(int j = 0;j <result.length(); j++){
            if (str1[i] == result[j]){
                isDuplicate = true;
                
            }
        }
        if (isDuplicate == false){
            result += str1[i];
        }
    }
    cout << result << endl;

    return 0;
}
//Task 8
#include <iostream>
using namespace std;

int main()
{
    int newA[8], a[5] = {1,2,3,4,5};
    cout<<"Current array is: {";
    for (int i = 0; i<5; i++) {
        cout<<a[i];
        if (i==4)
            continue;
        cout<<", ";
    }
    cout<<"}\n";

    for (int i = 0; i<5; i++) {
        newA[i] = a[i];
    }

    cout<<"Enter 3 integers which will be added to the array: "<<endl;
    for (int i = 5; i<8; i++)
        cin>>newA[i];

    cout<<"Printing elements of array"<<endl;
    for (int i = 0; i<8; i++) {
        cout<<newA[i]<<" ";
    }
    return 0;
}
//Task 9
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, X, sum, arr[10];

    cout<<"Enter 10 integers for array: ";
    for (int i = 0; i<10; i++) {
        cin>>arr[i];
    }

    bool found = false;
    cout<<"Enter integer X: ";
    cin>>X;

    cout<<"Triplets are: ";
    for (int i = 0; i<10; i++) {
        for (int j = 0; j<10; j++) {
            if (i == j)
                continue;

            for (int z = 0; z<10; z++) {
                if (z == i || z == j)
                    continue;

                sum = arr[i] + arr[j] + arr[z];
                if (sum == X) {
                    cout<<" ("<<arr[i]<<", "<<arr[j]<<", "<<arr[z]<<")";
                    found = true;
                }
            }
        }
    }
    if (found == false) {
        cout<<"No Triplet Found";
    }
    return 0;
}
//Task 10
#include <iostream>
using namespace std;


int main() {
	#define MAX 6
int arr[MAX] ;
   int temp;
   int i,j;
   for(i=0;i<MAX;i++)
   {
   	cout<<"Enter the Number " <<i<<endl;
   	cin>>arr[i];
   }
   cout<<"Your Array is \n[";
      for(i = 0; i < MAX; i++) {
      cout << arr[i] << " ";
   }
   cout << "]" <<endl;
      for(i = 0; i < MAX-1; i++) { 
      
     
      for(j = 0; j < MAX-1-i; j++) {

         if(arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            
}

}
}
cout<<"Sorted Array is "<<endl;
  cout << "[";

   for(i = 0; i < MAX; i++) {
      cout << arr[i] << " ";
   }
   cout << "]" << std::endl;

	return 0;
}