int __fastcall std::net::tcp::TcpListener::accept(int a1, int *a2)
{
  int v3; // r7
  int v4; // r4
  int *v5; // r10
  int v6; // r3
  int v7; // r5
  int v8; // r12
  int v9; // lr
  int v10; // r1
  unsigned int v11; // r0
  __int16 v12; // r6
  __int16 v13; // r2
  int result; // r0
  __int16 v15; // r1
  int v16; // r7
  char **v17; // r5
  int v18; // r0
  int v19; // r1
  int v20; // r0
  int v21; // r1
  char **v22; // r2
  const char *v23; // r0
  _DWORD v24[32]; // [sp+0h] [bp-90h] BYREF
  int v25; // [sp+80h] [bp-10h] BYREF
  _BYTE v26[6]; // [sp+84h] [bp-Ch]
  int v27; // [sp+8Ah] [bp-6h]

  v3 = *a2;
  v4 = 128;
  memset(v24, 0, sizeof(v24));
  v25 = 128;
  v5 = (int *)(a1 + 8);
  v7 = accept4(v3, v24, &v25, 0x80000);
  if ( v7 != -1 )
  {
    v10 = LOWORD(v24[0]);
    v11 = v25;
    if ( LOWORD(v24[0]) == 10 )
      goto LABEL_10;
    goto LABEL_3;
  }
  v4 = (int)&v25;
  do
  {
    v17 = (char **)*_errno_location();
    if ( (unsigned __int8)std::sys::unix::decode_error_kind(v17) != 35 )
    {
      v20 = 0;
      v19 = 0;
      goto LABEL_15;
    }
    v18 = accept4(v3, v24, &v25, 0x80000);
  }
  while ( v18 == -1 );
  v7 = v18;
  v10 = LOWORD(v24[0]);
  v11 = v25;
  if ( LOWORD(v24[0]) != 10 )
  {
LABEL_3:
    if ( v10 == 2 )
    {
      if ( v11 >= 0x10 )
      {
        v12 = 0;
        v13 = v24[1];
        result = v27;
        v15 = __rev16(HIWORD(v24[0]));
        *(_WORD *)&v26[4] = v15;
        *(_DWORD *)v26 = v24[1];
        v16 = *(_DWORD *)&v26[2];
        goto LABEL_12;
      }
      v21 = 66;
      v22 = &off_2DEE1C;
      v23 = aAssertionFaile_20;
LABEL_18:
      core::panicking::panic((int)v23, v21, (int)v22);
    }
    close(v7);
    v19 = 2;
    v17 = &off_2DEE00;
    v20 = (_DWORD)&off_2DEE00 << 24;
LABEL_15:
    *v5 = v19 | (v20 << 8);
    *(_DWORD *)(a1 + 12) = v17;
    *(_WORD *)(a1 + 4) = 2;
    return 2;
  }
LABEL_10:
  if ( v11 < 0x1C )
  {
    v21 = 67;
    v22 = &off_2DEE0C;
    v23 = aAssertionFaile_19;
    goto LABEL_18;
  }
  v13 = HIWORD(v24[0]);
  v9 = v24[1];
  v12 = 1;
  v8 = v24[6];
  v16 = v24[2];
  v6 = v24[5];
  result = v24[3];
  v4 = v24[4];
  v15 = __rev16(HIWORD(v24[0]));
LABEL_12:
  *v5 = v16;
  *(_DWORD *)(a1 + 12) = result;
  *(_DWORD *)(a1 + 16) = v4;
  *(_DWORD *)(a1 + 20) = v6;
  *(_WORD *)(a1 + 6) = v13;
  *(_WORD *)(a1 + 4) = v12;
  *(_WORD *)(a1 + 32) = v15;
  *(_DWORD *)(a1 + 24) = v9;
  *(_DWORD *)(a1 + 28) = v8;
  *(_DWORD *)a1 = v7;
  return result;
}
