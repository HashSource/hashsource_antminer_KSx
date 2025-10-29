int __fastcall sub_123EF0(int result, _DWORD *a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // r8
  _DWORD *v5; // r4
  int v6; // r9
  int v7; // r5
  int i; // r6

  v4 = (_DWORD *)(result + 4);
  v5 = a2;
  v6 = result;
  v7 = a3;
  for ( i = a3 + 1; v5 != v4; v5 = (_DWORD *)v5[1] )
  {
    if ( !v5[3] )
      v7 = i++;
    result = sub_123EF0(v6, *v5, v7, a4);
  }
  if ( *a4 == -1 )
    *a4 = i;
  return result;
}
