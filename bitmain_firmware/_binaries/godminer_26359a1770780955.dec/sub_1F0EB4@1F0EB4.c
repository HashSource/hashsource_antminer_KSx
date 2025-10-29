int __fastcall sub_1F0EB4(int *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r1
  int v6; // r7
  int v7; // t1
  int v10; // r8
  int v11; // r4
  int v12; // r10
  int v13; // r3
  int v14; // r2
  _DWORD *v15; // r9
  _DWORD *v16; // r0
  _DWORD *v17; // r2
  unsigned int v18; // r5
  int result; // r0
  int v20; // r1
  int v21; // r7
  _DWORD *v22; // r0
  unsigned int v23; // r4
  int v24; // r0
  int v25; // r1
  int v26; // r1
  int v27; // r10
  int v28; // r11
  int v29; // r0
  int v30; // r1
  int v31; // r2
  int v32; // [sp+0h] [bp-10h]
  int fd; // [sp+4h] [bp-Ch]
  int v34; // [sp+8h] [bp-8h]
  _DWORD v36[2]; // [sp+14h] [bp+4h] BYREF
  _DWORD v37[5]; // [sp+1Ch] [bp+Ch] BYREF
  unsigned int v38; // [sp+30h] [bp+20h] BYREF
  int v39; // [sp+34h] [bp+24h]
  int v40; // [sp+38h] [bp+28h]

  v7 = *(_DWORD *)(a2 + 56);
  v5 = a2 + 56;
  v6 = v7;
  v36[0] = a4;
  v10 = v7 - 4;
  v11 = *(_DWORD *)(v5 - 8);
  if ( v7 != 4 )
    v10 = v5;
  v12 = v11 - 4;
  v34 = v6;
  if ( v11 != 4 )
    v12 = v5 - 8;
  v13 = 1;
  if ( a5 )
    v13 = a3;
  v14 = *(_DWORD *)(v5 - 16);
  v15 = v36;
  v36[1] = 1;
  if ( v14 != 4 )
    v13 = v14;
  v16 = v36;
  if ( !a5 )
    v16 = v37;
  if ( v14 == 4 )
    v17 = v16;
  else
    v17 = (_DWORD *)(v5 - 12);
  sub_1F123C(&v38, v13, *v17, 1);
  v18 = v38;
  if ( v38 == 3 )
  {
    result = v39;
    v20 = v40;
    a1[3] = 3;
    *a1 = result;
    a1[1] = v20;
    if ( a3 != 3 )
      return result;
    return close(a4);
  }
  v21 = a3;
  fd = v40;
  v22 = v36;
  if ( v11 != 4 )
    v22 = (_DWORD *)(v12 + 4);
  v32 = v39;
  v37[2] = v39;
  if ( v11 == 4 )
    v11 = a3;
  v37[1] = v38;
  sub_1F123C(&v38, v11, *v22, 0);
  v23 = v38;
  if ( v38 == 3 )
  {
    v24 = v39;
    v25 = v40;
    a1[3] = 3;
    *a1 = v24;
    a1[1] = v25;
  }
  else
  {
    v26 = v34;
    v27 = v39;
    v28 = v40;
    if ( v34 == 4 )
      v26 = v21;
    else
      v15 = (_DWORD *)(v10 + 4);
    v37[4] = v39;
    v37[3] = v38;
    sub_1F123C(&v38, v26, *v15, 0);
    result = v38;
    if ( v38 != 3 )
    {
      a1[8] = v39;
      v31 = v40;
      *a1 = fd;
      a1[1] = v28;
      a1[2] = v31;
      a1[3] = v18;
      a1[4] = v32;
      a1[5] = v23;
      a1[6] = v27;
      a1[7] = result;
      if ( v21 != 3 )
        return result;
      return close(a4);
    }
    v29 = v39;
    v30 = v40;
    a1[3] = 3;
    *a1 = v29;
    a1[1] = v30;
    if ( v28 != -1 )
      close(v28);
    if ( v23 >= 2 )
      close(v27);
  }
  result = fd;
  if ( fd != -1 )
    result = close(fd);
  if ( v18 >= 2 )
    result = close(v32);
  if ( v21 == 3 )
    return close(a4);
  return result;
}
