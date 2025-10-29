int __fastcall Sha256_Update(int result, unsigned __int8 *a2, int a3)
{
  __int64 v3; // r10
  int v4; // r4
  unsigned __int8 *v5; // r5
  int v6; // r3
  unsigned __int8 *v7; // r8
  int v8; // t1
  int v9; // r1

  v3 = *(_QWORD *)(result + 32);
  if ( a3 )
  {
    v4 = result;
    v5 = a2;
    v6 = v3 & 0x3F;
    v7 = &a2[a3];
    while ( 1 )
    {
      v8 = *v5++;
      result = v8;
      v9 = v6 + 1;
      *(_BYTE *)(v4 + v6 + 40) = v8;
      *(_QWORD *)(v4 + 32) = v3 + 1;
      if ( v6 == 63 )
      {
        result = sub_1371C4((unsigned __int8 *)v4);
        v9 = 0;
      }
      v6 = v9;
      if ( v5 == v7 )
        break;
      v3 = *(_QWORD *)(v4 + 32);
    }
  }
  return result;
}
