//#include <iostream>
#include<cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
//struct Consume{
//
//    union{
//    }cons;
//    int Consum[12][4];
//};

const int is_null = NULL;
const int is_cross = NULL;

void printfRes(int res[][4]){
    res[0][0] = 1;
    printf("-----------------------------------------------\n");
    for(int i = 1;i<13;++i){
        for(int j = 0;j<4;++j){
            printf(" %d ",res[i][j]);
        }
        printf("\n");
    }

    printf("-----------------------------------------------\n");
}

int not_null(int data){
    return data != is_null;
}

int is_NULL(int data){
    return data == is_null;
}

int  getData(int sour[][4],int i,int j){

    if(is_NULL(sour[i][j])){
        switch(j){
            case 1:
                sour[i][j] =

            case 2:

            case 3:

                    return sour[i][j] =getData(sour,i+1,3) -  sour[i][1]+sour[i][2];

        }

    }

}


void processData(int sour[][4],int dest[][4]){

    int j = 0;
    for(int i =1;i<13;++i){
        if(not_null(sour[i][1]) && not_null(sour[i][2]) ){
            sour[i][0] = sour[i][1] - sour[i][2];
        }else if(is_NULL(sour[i][1] && is_NULL(sour[i][2]))){
            printf("Wrong Could Resolve row:%d,line:%d\n",i,j);
            exit(0);
        }else if(is_NULL(sour[i][1])){
            if(not_NULL(sour[i][3])){
                if(not_null(sour[i-1][3]))){

                }else if(not_null(sour[i-1][3]))
            }
        }else{

        }

    }
    for(int i = 12;i;--i){
        for(int j = 1;j < 4;++j){

        }
    }



}

int main()
{
    int Consum[13][4];
    //1 收入
    //2 消费
    //3 余额
    //0
    int RealConsum[13][4];

    memset(RealConsum,0,52 * sizeof( int ));
    memset(Consum,0,sizeof(int) * 52);

    for(int i = 1;i<13;++i){
        scanf("%d%d%d",&Consum[i][1],&Consum[i][3],&Consum[i][3]);
    }
    processData(Consum,RealConsum);
    printfRes(Consum);
    printfRes(RealConsum);
    //printf("%d\n",Consum[0][0]);

/** \brief
 *
 * \param
 * \param
 1 1 1
 1 1 1
 1 1 1
 1 1 1
 1 1 1
 1 1 1
 1 1 1
 1 1 1
 1 1 1
 1 1 1
 1 1 1
 1 1 1


 * \return
 *
 */




    //system("pause" );
    return 0;
}
