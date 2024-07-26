int main(){
  int smallest=10000000, biggest=-10000000, input=0;
  for(int i = 0; i < 10; i++){
  printf("Enter a number:");
  scanf("%d",&input);
  if(input < smallest)(smallest = input);
  if(input > biggest)(biggest = input);
  }
  printf("Smallest Number : %d\nLargest Number : %d\n",smallest,biggest);
}