#include<bits/stdc++.h>
using namespace std;

void pattern1(int N){

    for(int i = 0; i < N; i++){

        for(int j = 0; j < N; j++){
            cout << " * " ;
        }
        cout << endl;
    }
}

void pattern2(int N){
    for(int i = 0; i<N; i++){
        for(int j = 0 ; j <= i ;j++ ){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int N){
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl; 
    }
}

void pattern4(int N){
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int N){
    for( int i=0; i<N; i++){
        for(int j=N; j>i; j--){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int N){
    for(int i=0; i<N; i++ ){
        for(int j=1; j < N-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int N){
    for(int i=0; i <N; i++){
        for(int j=0; j < N-i-1; j++){
            cout << " ";
        }

        for(int j=0; j<2*i +1; j++ ){
            cout << "*";
        }

        for(int j=0; j<N-i-1; j++ ){
            cout <<" ";
        }
        cout << endl;
    }
}

void pattern8(int N){
    for(int i=0; i <N; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }

        for(int j=0; j<2*N -(2*i +1); j++){
            cout << "*";
        }

        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int N){
   for(int i=0; i<N; i++){
        for(int j=0; j<N-i-1; j++){
            cout << " ";
        }

        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }

        for(int j=0; j<N-i-1; j++){
            cout << " ";
        }
    cout << endl; 
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }

        for(int j=0; j<2*N -(2*i+1); j++){
            cout << "*";
        }

        for(int j=0; j<i; j++){
            cout << " ";
        }
    cout << endl;
    }
}

void pattern10(int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<=i; j++){
            cout <<"* ";
        }
    cout << endl;
    }

    for(int i=0; i<N-1; i++){
        for(int j=N-1; j>i; j--){
            cout << "* ";
        }
    cout << endl;
    }
    
}

void pattern11(int N){
    for(int i=0; i<N; i++){
        for(int j=0; j-1<i; j++){
            if ((i + j)%2 == 0){
                cout << "1 ";
            }
            else{
                cout <<"0 ";
            }
        }
    cout << endl;
    }
}

void pattern11_1(int N){
    int start = 1;
    for(int i=0; i<N; i++){
        if(i%2 ==0) start = 1;
        else start = 0;
        for (int j=0; j<=i; j++){
            cout << start;
            start = 1 - start;
        }
    cout << endl;
    }
}

void pattern12(int N){
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        for(int j=1; j<=2*(N-i); j++){
            cout << " ";
        }

        for(int j=i; j>=1; j--){
            cout << j;
        }
    cout << endl;
    }
    
}

void pattern13(int N){
    int num = 1;
    for(int i = 1; i<=N; i++){
        for(int j = 1; j<=i; j++){
            cout << num << " ";
            num++;
        }
    cout << endl;
    }
    
}

void pattern14(int N){
    for(int i = 0; i<N; i++){
        char c = 'A';
        for(int j = 0; j<=i; j++){
            
            cout << c;
            c = c + 1;
        }
    cout << endl;    
    }
}

void pattern15(int N){
    for(int i = 0; i<N; i++){
        char c = 'A';
        for (int j = N; j >i ; j--){
            cout << c;
            c++;
        }
    cout << endl;
    }
}

void pattern16(int N){
    
    for(int i = 0; i<N; i++){
        char c = 'A' + i;
        for(int j = 0; j<=i; j++){
            cout << c;
        }
        //c++;
    cout << endl;
    }
}

void pattern17(int N){
    for(int i = 0; i<N; i++){
        //space
        for(int j = 0; j < N-i-1; j++){
            cout << " ";
        }

        //char
        char ch = 'A';
        int breakpoint = (2*i + 1) / 2; 
        for(int j = 1; j<= 2*i + 1; j++){
            cout << ch;
            if (j <= breakpoint) ch++;
            else ch--;
            
        }
        //ch = ch + (2*i + 1)/2 + 1;
        //space
        for(int j = 0; j<N-i-1; j++){
            cout << " ";
        }
    cout << endl;
    }
}

void pattern18(int N){
    for(int i = 0; i<N; i++ ){
        char ch = 'E';
        char start = ch -i;
        for(int j = 0; j<= i; j++){
            cout << start << " ";
            start++;
        }
    cout << endl;   
    }
}

void pattern19(int N){
    for(int i = 0; i<2*N; i++){
        //stars
        if (i<N){
            for(int j = 1; j<=N-i; j++){
                cout << "*";
            }

            //space
            for(int j = 0; j <2*i; j++){
                cout << " ";
            }

            for(int j = 1; j<=N-i; j++){
                cout << "*";
            }
        }
        else{
            for(int j = 0; j<=i-N; j++){
                cout << "*";
            }

            // for(int j = 0; j <=2*(2*N-i-1); j++){
            //     cout <<" ";
            // }

            int inS = 2*(2*N-i-1);
            for(int j = 0; j<inS; j++){
                cout << " ";
            }

            for(int j = 0; j<=i-N; j++){
                cout << "*";
            }
        }
    cout << endl;
    } 
}

void pattern20(int N){
    for(int i = 0; i<N; i++){
        //stars
        for(int j = 0; j<=i; j++){
            cout << "*";
        }
        
        //space
        for(int j = 0; j < 2*(N-i-1); j++){
            cout << " ";
        }
        //star
        for(int j = 0; j<=i; j++){
            cout << "*";
        }
    cout << endl;
    }
    for(int i = 1; i<N; i++){    
        for(int j = 0; j<N-i; j++){
            cout << "*";
        }
        
        //space
        for(int j = 1; j <=2*i; j++){
            cout << " ";
        }
        //star
        for(int j = 0; j<N-i; j++){
            cout << "*";
        }
    cout << endl;
    }
}

void pattern21(int N){
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N;j++){
            if (i == 0 || j == 0 || i == N-1 || j == N-1){
                cout << "*";
            }
            else cout << " ";
        }
    cout << endl;
    }
}

void pattern22(int N){
    for(int i = 0; i < 2*N-1; i++){
        for(int j = 0; j < 2*N-1; j++){
            int top = i;
            int left = j;
            int right = (2*N - 2) - j;
            int bottom = (2*N - 2) - i;

            cout << (N - min( min(top,bottom) , min(left, right))) << " ";
        }
    cout << endl;    
    }
}

int main(){
    int N;
    cin >> N;

    pattern22(N);

    return 0;
}