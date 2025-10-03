#include <iostream>
int main(){
    float n1,n2,ans;
    std:: cout<<"Enter value of number 1 & 2: ";
    std::cin>>n1>>n2;
    try{
        if(n2==0){
            throw n2;
        }
        else{
            ans=n1/n2;
            std::cout<<"Answer = " <<ans<<"\n";
        }
    }
    catch(float num){
        std::cout << "\nERROR : division by " << num << "\n";
    }
}

//Output:
Enter value of number 1 & 2: 
//19
//2
//Answer = 9.5
