int __fastcall be256_target_to_diff_base(int a1)
{
  int v1; // lr
  int v2; // r0
  int v3; // r1
  int v4; // r12
  int v5; // t1
  int v6; // r3
  int v7; // r2

  v1 = a1 - 1;
  v2 = a1 + 31;
  v3 = 0;
LABEL_2:
  v5 = *(unsigned __int8 *)++v1;
  v4 = v5;
  v6 = 7;
  while ( 1 )
  {
    v7 = v4 >> v6--;
    if ( (v7 & 1) != 0 )
      return v3;
    v3 = (unsigned __int8)(v3 + 1);
    if ( v6 == -1 )
    {
      if ( v1 != v2 )
        goto LABEL_2;
      return v3;
    }
  }
}
