int __fastcall sub_8BF10(int a1)
{
  if ( (unsigned __int8)(a1 - 48) <= 9u )
    return a1 - 48;
  if ( (unsigned int)(a1 - 97) > 5 )
    return sub_8BE88(a1);
  return a1 - 87;
}
