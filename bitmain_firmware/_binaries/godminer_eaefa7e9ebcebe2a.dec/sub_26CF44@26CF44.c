int __fastcall sub_26CF44(unsigned int a1, unsigned int a2, unsigned int *a3, int a4)
{
  if ( a1 >= a2 )
  {
    ++a4;
    a1 -= a2;
  }
  *a3 = a1;
  return a4;
}
