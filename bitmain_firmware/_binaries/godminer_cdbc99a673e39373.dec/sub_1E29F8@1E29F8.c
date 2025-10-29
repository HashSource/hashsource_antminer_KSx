int __fastcall sub_1E29F8(int a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // r9
  unsigned int v4; // r5
  unsigned int v5; // r12
  int v7; // r7
  unsigned int v8; // r6
  unsigned int v9; // r4
  unsigned int v10; // lr
  unsigned int v11; // r0
  unsigned __int64 v12; // kr08_8
  int v13; // r1
  const char *v14; // r2
  int result; // r0
  unsigned __int64 v16; // kr20_8
  __int64 v17; // [sp+0h] [bp-18h] BYREF
  char **v18; // [sp+8h] [bp-10h]
  int v19; // [sp+Ch] [bp-Ch]
  const char *v20; // [sp+10h] [bp-8h]
  int v21; // [sp+14h] [bp-4h]

  v3 = *a3;
  v4 = a3[1];
  v5 = a3[2];
  v7 = 0;
  v8 = *a2;
  v9 = a2[1];
  v10 = a2[2];
  if ( v10 < v5 )
    v7 = -1;
  v11 = *(_QWORD *)a2 != *(_QWORD *)a3;
  if ( __SPAIR64__(v9, v8) < __SPAIR64__(v4, v3) )
    v11 = -1;
  if ( !v11 )
    v11 = v7;
  if ( v11 > 1 )
  {
    sub_1E29F8(&v17, a3, a2);
    v13 = v19;
    v14 = v20;
    if ( v17 )
    {
      *(_DWORD *)(a1 + 8) = v18;
      *(_DWORD *)(a1 + 12) = v13;
      *(_DWORD *)(a1 + 16) = v14;
      *(_QWORD *)a1 = 0;
      return 0;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = v18;
      *(_DWORD *)(a1 + 12) = v13;
      *(_DWORD *)(a1 + 16) = v14;
      *(_QWORD *)a1 = 1;
      return 1;
    }
  }
  else
  {
    if ( v10 >= v5 )
    {
      v12 = __PAIR64__(v9, v8) - __PAIR64__(v4, v3);
    }
    else
    {
      v10 += 1000000000;
      v12 = __PAIR64__(v9, v8) + __PAIR64__(~v4, ~v3);
    }
    result = v12 + (v10 - v5) / 0x3B9ACA00;
    v16 = __CFADD__((_DWORD)v12, (v10 - v5) / 0x3B9ACA00) + (unsigned __int64)HIDWORD(v12);
    if ( HIDWORD(v16) == 1 )
    {
      v18 = &off_2CA1E0;
      v19 = 1;
      v21 = 0;
      LODWORD(v17) = 0;
      v20 = aRustc9eb3afe9e;
      core::panicking::panic_fmt((int)&v17, (int)&off_2CA1E8);
    }
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = result;
    *(_DWORD *)(a1 + 12) = v16;
    *(_DWORD *)(a1 + 16) = (v10 - v5) % 0x3B9ACA00;
  }
  return result;
}
