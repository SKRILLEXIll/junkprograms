#include<bits/stdc++.h>
using namespace std;

int main(){
    int matrix[3][5]={{3,4,3,7,5},{4,5,4,10,7},{6,7,6,15,10}};
    int input_matrix[5]; 
    int complexity_factor;
    int weight_factor;
    float CAF,FP,UFC=0;
    
    
    
    cout<<"User Input - ";
    cin>>input_matrix[0];
    
    cout<<"User Output - ";
    cin>>input_matrix[1];
    
    cout<<"User Inqueries - ";
    cin>>input_matrix[2];
    
    cout<<"User Files - ";
    cin>>input_matrix[3];
    
    cout<<"User Interface - ";
    cin>>input_matrix[4];
    
    cout<<"\n0 - No Influence \n";
    cout<<"1 - Incidental\n";
    cout<<"2 - Moderate\n";
    cout<<"3 - Average\n";
    cout<<"4 - Significant\n";
    cout<<"5 - Essential\n";
   
    cout<<"\nPlease Select The Complexity Adjustment Factor From Above - ";
    cin>>complexity_factor;
    
    
    cout<<"\n0 - Simple\n";
    cout<<"1 - Average\n";
    cout<<"2 - Complex\n";
    cout<<"\nPlease Select The Weight Adjustment Factor - ";
    cin>>weight_factor;
    
    for(int i=0;i<5;i++){
        UFC = UFC+(input_matrix[i]*matrix[weight_factor][i]);
    }
    
    CAF=0.65 + (0.01 * 14*complexity_factor);
    FP = UFC*CAF;
    cout<<"\nThe Final Answers Are - \n";
    cout<<"CAF = "<<CAF<<endl;
    cout<<"UFC = "<<UFC<<endl;
    cout<<"FP = "<<FP<<endl;
    
    return 0;
}

output:

User Input - 50
User Output - 40
User Inqueries - 35
User Files - 6
User Interface - 4

0 - No Influence 
1 - Incidental
2 - Moderate
3 - Average
4 - Significant
5 - Essential

Please Select The Complexity Adjustment Factor From Above - 3
0 - Simple
1 - Average
2 - Complex

Please Select The Weight Adjustment Factor - 1
The Final Answers Are - 
CAF = 1.07
UFC = 628
FP = 671.96
