#include<iostream>
using namespace std;
class matrix{
  int rows;
  int columns;
  int **array;
  public:
 
  matrix(int rows,int columns){
      this->rows=rows;
      this->columns=columns;
      this->array=NULL;
  }
  void setMatrix(){
      array=new int*[rows];
      for(int i=0;i<rows;i++){
        array[i]=new int[columns];
        for(int j=0;j<columns;j++){
            int b;
            cin>>b;
            array[i][j]=b;
        }
    }
  }
  void showMatrix(){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<this->array[i][j]<< " ";
        }
        cout<<endl;
    }
  }
  matrix operator+(const matrix& B){
      matrix answer(3,4);
      answer.array=new int*[rows];
      for(int i=0;i<3;i++){
        answer.array[i]=new int[4];
        for(int j=0;j<4;j++){
           answer.array[i][j]=this->array[i][j]+B.array[i][j];
        }
    }
      return answer;
      
  }

 
};
int main(){
       int p=5;
        matrix A(3,4);
        matrix B(3,4);
        A.setMatrix();
        B.setMatrix();
        cout<<"**************A matrix***********"<<endl;
        A.showMatrix();
        cout<<"**************B matrix***********"<<endl;
        B.showMatrix();
        cout<<"*******Summation***********"<<endl;
       (A+B).showMatrix();
     
}