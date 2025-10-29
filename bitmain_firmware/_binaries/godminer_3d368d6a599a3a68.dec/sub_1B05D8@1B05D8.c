int __fastcall sub_1B05D8(int *a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r5
  int v5; // r1
  bool v6; // zf
  int v7; // r0
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  if ( *((_BYTE *)a1 + 37) )
    return 0;
  if ( *((_BYTE *)a1 + 36) )
    goto LABEL_4;
  *((_BYTE *)a1 + 36) = 1;
  result = sub_1B05D8(a1);
  v6 = result == 0;
  if ( result )
    v6 = v5 == 0;
  if ( v6 )
  {
    if ( *((_BYTE *)a1 + 37) )
      return 0;
LABEL_4:
    v3 = a1[2];
    sub_1BD9F4(v8, a1 + 2);
    if ( v8[0] )
    {
      v4 = v3 + v8[2];
      a1[1] = v8[1];
      return v4;
    }
    else
    {
      v7 = *a1;
      *((_BYTE *)a1 + 37) = 1;
      return v3 + v7;
    }
  }
  return result;
}
