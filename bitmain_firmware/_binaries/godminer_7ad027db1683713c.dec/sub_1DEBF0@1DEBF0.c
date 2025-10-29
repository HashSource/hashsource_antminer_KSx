int __fastcall sub_1DEBF0(int *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r1
  int v6; // t1
  int v9; // r4
  int v10; // r3
  unsigned int v11; // r5
  int result; // r0
  int v13; // r1
  int v14; // r7
  unsigned int v15; // r4
  int v16; // r0
  int v17; // r1
  int v18; // r1
  int v19; // r10
  int v20; // r11
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // [sp+0h] [bp-10h]
  int fd; // [sp+4h] [bp-Ch]
  int v26; // [sp+8h] [bp-8h]
  int v28; // [sp+30h] [bp+20h] BYREF
  int v29; // [sp+34h] [bp+24h]
  int v30; // [sp+38h] [bp+28h]

  v6 = *(_DWORD *)(a2 + 56);
  v5 = a2 + 56;
  v9 = *(_DWORD *)(v5 - 8);
  v26 = v6;
  v10 = 1;
  if ( a5 )
    v10 = a3;
  if ( *(_DWORD *)(v5 - 16) != 4 )
    v10 = *(_DWORD *)(v5 - 16);
  sub_1DEF78((int)&v28, v10);
  v11 = v28;
  if ( v28 == 3 )
  {
    result = v29;
    v13 = v30;
    a1[3] = 3;
    *a1 = result;
    a1[1] = v13;
    if ( a3 != 3 )
      return result;
    return close(a4);
  }
  v14 = a3;
  fd = v30;
  v24 = v29;
  if ( v9 == 4 )
    v9 = a3;
  sub_1DEF78((int)&v28, v9);
  v15 = v28;
  if ( v28 == 3 )
  {
    v16 = v29;
    v17 = v30;
    a1[3] = 3;
    *a1 = v16;
    a1[1] = v17;
  }
  else
  {
    v18 = v26;
    v19 = v29;
    v20 = v30;
    if ( v26 == 4 )
      v18 = v14;
    sub_1DEF78((int)&v28, v18);
    result = v28;
    if ( v28 != 3 )
    {
      a1[8] = v29;
      v23 = v30;
      *a1 = fd;
      a1[1] = v20;
      a1[2] = v23;
      a1[3] = v11;
      a1[4] = v24;
      a1[5] = v15;
      a1[6] = v19;
      a1[7] = result;
      if ( v14 != 3 )
        return result;
      return close(a4);
    }
    v21 = v29;
    v22 = v30;
    a1[3] = 3;
    *a1 = v21;
    a1[1] = v22;
    if ( v20 != -1 )
      close(v20);
    if ( v15 >= 2 )
      close(v19);
  }
  result = fd;
  if ( fd != -1 )
    result = close(fd);
  if ( v11 >= 2 )
    result = close(v24);
  if ( v14 == 3 )
    return close(a4);
  return result;
}
