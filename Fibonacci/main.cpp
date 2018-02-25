#include <iostream>

using namespace std;

void Fibonacci_Char(){
    int N = 1;
    while(N>0){
            cout<<"---------"<<endl;
            cout<<"Ingrese N, 0 para salir."<<endl;
            cin>>N;
            char one = 0;
            char two = 1;
            char Help = 0;
            if(N==2){
                Help = 1;
            }else{
                for(int i = 1; i < N - 1; i++){
                    Help = one+two;
                    one = two;
                    two = Help;
                }
            }
            cout<<Help<<endl;
        }
}

void Fibonacci_ShortInt(){
    int N = 1;
    while(N>0){
            cout<<"---------"<<endl;
            cout<<"Ingrese N, 0 para salir."<<endl;
            cin>>N;
            short one = 0;
            short two = 1;
            short Help = 0;
            if(N==2){
                Help = 1;
            }else{
                for(int i = 1; i < N - 1; i++){
                    Help = one+two;
                    one = two;
                    two = Help;
                }
            }
            cout<<Help<<endl;
        }
}

void Fibonacci_Int(){
    int N = 1;
    while(N>0){
            cout<<"---------"<<endl;
            cout<<"Ingrese N, 0 para salir."<<endl;
            cin>>N;
            int one = 0;
            int two = 1;
            int Help = 0;
            if(N==2){
                Help = 1;
            }else{
                for(int i = 1; i < N - 1; i++){
                    Help = one+two;
                    one = two;
                    two = Help;
                }
            }
            cout<<Help<<endl;
        }
}

void Fibonacci_LongInt(){
    int N = 1;
    while(N>0){
            cout<<"---------"<<endl;
            cout<<"Ingrese N, 0 para salir."<<endl;
            cin>>N;
            long one = 0;
            long two = 1;
            long Help = 0;
            if(N==2){
                Help = 1;
            }else{
                for(int i = 1; i < N - 1; i++){
                    Help = one+two;
                    one = two;
                    two = Help;
                }
            }
            cout<<Help<<endl;
        }
}

void Fibonacci_LongLongInt(){
    int N = 1;
    while(N>0){
            cout<<"---------"<<endl;
            cout<<"Ingrese N, 0 para salir."<<endl;
            cin>>N;
            long long one = 0;
            long long two = 1;
            long long Help = 0;
            if(N==2){
                Help = 1;
            }else{
                for(int i = 1; i < N - 1; i++){
                    Help = one+two;
                    one = two;
                    two = Help;
                }
            }
            cout<<Help<<endl;
        }
}
int main(){

    cout<<"Fibonacci"<<endl;
    cout<<"Que tipo de dato desea utilizar:"<<endl;
    cout<<"1. char"<<endl;
    cout<<"2. short int"<<endl;
    cout<<"3. int"<<endl;
    cout<<"4. long int"<<endl;
    cout<<"5. long long int"<<endl;
    cout<<"6. End"<<endl;
    int Option;
    cin>> Option;
    if(Option==1){
        cout<<"------------Char------------"<<endl;
        Fibonacci_Char();
        main();
        return 0;
    }else if(Option==2){
        cout<<"----------ShortInt----------"<<endl;
        Fibonacci_ShortInt();
        main();
        return 0;
    }else if(Option==3){
        cout<<"-------------Int------------"<<endl;
        Fibonacci_Int();
        main();
        return 0;
    }else if(Option==4){
        cout<<"-----------LongInt----------"<<endl;
        Fibonacci_LongInt();
        main();
        return 0;
    }else if(Option==5){
        cout<<"---------LongLongInt--------"<<endl;
        Fibonacci_LongLongInt();
        main();
        return 0;
    }else if(Option==6){
        return 0;
    }else{
        return 0;
    }
    return 0;
}
// char          2
// short int     24
// int           49
// long int      49
// long long int 99
