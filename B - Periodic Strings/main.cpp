


#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

    int N;
    int period=1;
    int flag = 1;

    cin >> N;

    int x = N-1;

    while(N != 0){



        string s;
        cin >> s;
        
        int tam = s.size();

        for (int i=1; i<=tam; i++){

            if (tam%i == 0){
                
                for (int j=i; j<tam; j++){

                    if (s[j%i] != s[j])
                        flag = 0;
                }

                if (flag == 1){
                    cout << period << endl;
                    if(x!=0){
                        cout << endl;
                        x--;
                    }
                    break;
                }
                flag = 1;
            }
            period++;
        }


        period=1;


    N--;
    }

    return 0;
}

/*
#include <string>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
char s[100];
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%s", s);
        int len = strlen(s);
        int k = 1;

        for (int i = 1; i <= len; i++) // Try from the period of 1
        {
            if (len % i == 0) // If the period is the first Must be divisible
            {
                for (int j = i; j < len; j++) // Then judge one by one from the first cycle after
                {
                    if (s[j % i] != s[j]) // The remainder in front can represent the first period
                        k = 0;
                }
                if (k == 1)
                {
                    printf("%d\n", i);
                    break;
                }
                k = 1; // Attention should be paid to restore k=1 here
            }
        }
    }
    return 0;
}

/*

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

    int N;
    int period=0;

    cin >> N; // quantidade de casos de teste

    while(N != 0){
        string s;
        cin >> s;
        
        for (int i=0; i<s.size(); i++){
            if(s[0] == s[i+1]){
                period = i+1;
                break;
            }
        }
        
        cout << period << endl;


    N--;
    }

    return 0;
}
*/