int __fastcall sub_798B4(int a1, int a2, void *buf, size_t n)
{
  size_t v6; // r0
  size_t v7; // r6
  int result; // r0
  int v10; // r7
  size_t v11; // r2
  ssize_t v12; // r0
  int v13; // r1
  int v14; // r1
  int v15; // r2
  int v16; // [sp+3h] [bp-Dh]
  unsigned __int8 v17; // [sp+8h] [bp-8h] BYREF
  _BYTE v18[7]; // [sp+9h] [bp-7h]

  v6 = *(_DWORD *)a2;
  v7 = n;
  if ( *(_DWORD *)a2 - *(_DWORD *)(a2 + 8) < n )
  {
    sub_1D2E1C(&v17, a2);
    result = v17;
    if ( v17 != 4 )
    {
      v16 = *(_DWORD *)&v18[3];
      LOBYTE(v16) = v18[3];
      v14 = *(_DWORD *)v18;
      *(_DWORD *)(a1 + 4) = v16;
      *(_DWORD *)(a1 + 1) = v14;
      *(_BYTE *)a1 = result;
      return result;
    }
    v6 = *(_DWORD *)a2;
  }
  if ( v6 > v7 )
  {
    v10 = *(_DWORD *)(a2 + 8);
    memcpy((void *)(*(_DWORD *)(a2 + 4) + v10), buf, v7);
    *(_DWORD *)(a2 + 8) = v10 + v7;
    *(_DWORD *)(a1 + 4) = v7;
    *(_BYTE *)a1 = 4;
    return 4;
  }
  v11 = v7;
  *(_BYTE *)(a2 + 12) = 1;
  if ( v7 >= 0x7FFFFFFF )
    v11 = 0x7FFFFFFF;
  v12 = write(1, buf, v11);
  if ( v12 != -1 )
  {
    v13 = 4;
LABEL_12:
    v15 = v13;
    v7 = v12;
    goto LABEL_13;
  }
  v12 = *_errno_location();
  v13 = 0;
  v15 = 4;
  if ( v12 != 9 )
    goto LABEL_12;
LABEL_13:
  *(_DWORD *)a1 = v15;
  *(_DWORD *)(a1 + 4) = v7;
  *(_BYTE *)(a2 + 12) = 0;
  return 0;
}
