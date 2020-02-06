

#include<iostream>
using namespace std;

class Matrix{
    private:
    int m,n,o,p;
    int **matrix1;
    int **matrix2;
    int **multipliedmatrix;
    
    public:
    void setDimension(int m,int n,int o,int p){
        this->m=m;
        this->n=n;
        this->o=o;
        this->p=p;
         matrix1=new int *[m];
         matrix2=new int*[o];
         multipliedmatrix=new int*[m];
         for(int i=0;i<m;i++){
            matrix1[i]=new int[0];
            multipliedmatrix[i]=new int[p];
         }
         for(int i=0;i<o;i++){
            matrix2[i]=new int[p];

         }
         inputEntry(m,o,p);

    }
    void inputEntry(int m,int o,int p){
        cout<<"enter an elements of a matrix1 \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<o;j++){
            cin>>matrix1[i][j];

        }

    }
    cout<<"enter an element of matrix 2 \n";
    for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            cin>>matrix2[i][j];
        }
    }
    }
    void matrixMultiplication(){
    if(n==o){
          for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            this->multipliedmatrix[i][j]=0;
            for(int k=0;k<o;k++){
                this->multipliedmatrix[i][j]+=this->matrix1[i][k]*this->matrix2[k][j];

            }
        }
    }



    }else{
        cout<<"given order of matrix cannot be multiplied\n";
    }
  
}
    void printMultipliedMatrix(){
        cout<<"multiplied matrix \n";
        for(int i=0;i<m;i++){
            for(int j=0;j<p;j++){
                cout<<this->multipliedmatrix[i][j]<<"  ";
    }
    cout<<endl;
}
}

};





int main(){

    int m,n,o,p;

    cout<<"enter order of matrix 1  ";
    cin>>m>>n;

    cout<<"enter order  of matrix 2  ";
    cin>>o>>p;

     Matrix matrix;
     matrix.setDimension(m,n,o,p);
     
    matrix.matrixMultiplication();
    matrix.printMultipliedMatrix();

   

   


    return 0;
}







