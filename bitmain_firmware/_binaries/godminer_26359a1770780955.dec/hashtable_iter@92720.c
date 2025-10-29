int __fastcall hashtable_iter(int a1)
{
  int v1; // r3
  int result; // r0

  v1 = a1 + 20;
  result = *(_DWORD *)(a1 + 24);
  if ( result == v1 )
    return 0;
  return result;
}
