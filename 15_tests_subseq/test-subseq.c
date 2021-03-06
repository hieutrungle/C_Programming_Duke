#include<stdio.h>
#include<stdlib.h>
size_t maxSeq(int * array, size_t n);

int main (){

  int arr[]={};
  size_t ans1=maxSeq(arr,0);
  if (ans1 != 0) {
    printf("fail test1\n");
    return EXIT_FAILURE;
  }

  int   arr1[]={ 1, 2, 1, 3, 5, 7, 2, 4, 6, 9};
  ans1=maxSeq(arr1,10);
  if (ans1 != 4 ) {
    printf("fail test2\n");
    return EXIT_FAILURE;
  }

  int arr2[]={1,2,3,4};
  size_t ans2=maxSeq(arr2,4);
  if (ans2 != 4) {
    printf("fail test3\n");
    return EXIT_FAILURE;
  }

  int arr5[]={1,2,2,4};
  ans2=maxSeq(arr5,4);
  if (ans2 != 2 ) {
    printf("fail test4\n");
    return EXIT_FAILURE;
  }
  
  int ar[]={3,-4,5,6};
  ans2=maxSeq(ar,4);
  if (ans2 != 3) {
    printf("fail test5\n");
    return EXIT_FAILURE;
  }
  
  int ar1[]={10,9,7,6};
  ans2=maxSeq(ar1,4);
  if (ans2 != 1) {
    printf("fail test6\n");
    return EXIT_FAILURE;
  }

  printf("Success!\n");
  return EXIT_SUCCESS;


}
