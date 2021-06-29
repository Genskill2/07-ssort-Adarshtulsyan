void swap_max(int a[], int length, int position)
{
  int temp=a[position];
  int y=position;
  for(int i=position;i<length;i++)
  {
    if(temp<a[i])
    {
      temp=a[i];
      y=i;
    }
  }
  a[y]=a[position];
  a[position]=temp;
  return;
}

void ssort(int a[], int length)
{
  for(int i=0;i<length;i++)
  {
    swap_max(a, length, i);
  }
  return;
}
