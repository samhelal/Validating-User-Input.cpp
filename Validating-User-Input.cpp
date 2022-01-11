/*10. 4.20 (Validating User Input) The examination-results program of Fig. 4.14
assumes that any value input by the user that’s not a 1 must be a 2. Modify the
application to validate its inputs. On any input, if the value entered is other
than 1 or 2, keep looping until the user enters a correct value. 
( c++ how to program )*/

#include<iostream>
using namespace std ;

int main(){
    unsigned int passes(0) , failures(0), studentCounter(1) ;

    while(studentCounter<=10){
        cout<<"Enter result (1 = pass , 2 = fail): " ;
        int result(0);
        cin>>result;
        if(result<=2){
        if(result==1){
            passes++ ;
            studentCounter++ ;
        }
        if(result==2){
            failures++ ;
            studentCounter++ ;
        }
        }
        else{
            cout << "Please enter correct value(1 = pass , 2 = fail):\n" ;
        }

    }
    cout << "Passed:"<<passes << "\nFailed:"<<failures<<endl ;
    if(passes>8){
        cout << "Bouns to instructor!"<<endl ;
    }
}