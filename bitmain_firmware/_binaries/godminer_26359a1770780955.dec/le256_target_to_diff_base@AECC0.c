int __fastcall le256_target_to_diff_base(int a1)
{
  int v1; // lr
  int v2; // r1
  int v3; // r12
  int v4; // t1
  int v5; // r3
  int v6; // r2

  v1 = a1 + 32;
  v2 = 0;
LABEL_2:
  v4 = *(unsigned __int8 *)--v1;
  v3 = v4;
  v5 = 7;
  while ( 1 )
  {
    v6 = v3 >> v5--;
    if ( (v6 & 1) != 0 )
      return v2;
    v2 = (unsigned __int8)(v2 + 1);
    if ( v5 == -1 )
    {
      if ( v1 != a1 )
        goto LABEL_2;
      return v2;
    }
  }
}
