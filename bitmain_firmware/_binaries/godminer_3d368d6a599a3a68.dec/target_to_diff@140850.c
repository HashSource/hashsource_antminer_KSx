int __fastcall target_to_diff(int a1, int a2)
{
  int v2; // r12
  int result; // r0
  int v4; // r1
  int v5; // r3
  int v6; // r2
  int v7; // t1

  if ( a2 <= 0 )
    return 0;
  v2 = a1 - 1;
  result = 0;
  v4 = v2 + a2;
LABEL_3:
  v5 = 7;
  v7 = *(unsigned __int8 *)++v2;
  v6 = v7;
  while ( v6 >> v5-- == 0 )
  {
    ++result;
    if ( v5 == -1 )
    {
      if ( v2 != v4 )
        goto LABEL_3;
      return result;
    }
  }
  return result;
}
