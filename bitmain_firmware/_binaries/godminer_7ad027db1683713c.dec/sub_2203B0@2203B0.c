_WORD *__fastcall sub_2203B0(int a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // lr
  unsigned int *v5; // r5
  unsigned int v6; // r12
  bool v7; // cf
  unsigned int v8; // r2
  unsigned int v9; // r3
  bool v10; // cf
  int v11; // r1
  unsigned int v12; // r1
  unsigned __int8 *v13; // r1
  unsigned int v14; // r1
  _WORD *result; // r0
  int v16; // r0
  char **v17; // r2

  if ( a3 < 3 )
    core::panicking::panic((int)aAssertionFaile_27, 51, (int)&off_2CE084);
  if ( !a4 )
    core::panicking::panic((int)aAssertionFaile_28, 33, (int)&off_2CE094);
  if ( a4 > 0x8000 )
    core::panicking::panic((int)aAssertionFaile_29, 53, (int)&off_2CE0A4);
  v5 = a2 + 0x4000;
  v6 = a2[0x4000];
  v7 = v6 >= 0x10000;
  a2[16386] += a3;
  if ( v6 < 0x10000 )
  {
    v4 = a3 - 3;
    *((_BYTE *)a2 + v6) = a3 - 3;
    v6 = *v5 + 1;
    *v5 = v6;
    v7 = v6 >= 0x10000;
  }
  if ( v7 )
  {
    v16 = v6;
    v17 = &off_2CDFE4;
    goto LABEL_23;
  }
  v8 = a4 - 1;
  *((_BYTE *)a2 + v6) = a4 - 1;
  v9 = *v5 + 1;
  *v5 = v9;
  if ( v9 >= 0x10000 )
  {
    v17 = &off_2CDFE4;
    goto LABEL_22;
  }
  *((_BYTE *)a2 + v9) = BYTE1(v8);
  v9 = a2[16385];
  ++*v5;
  v10 = v9 >= 0x10000;
  if ( v9 < 0x10000 )
  {
    *((_BYTE *)a2 + v9) >>= 1;
    v9 = a2[16385];
    v10 = v9 >= 0x10000;
  }
  if ( v10 )
  {
    v17 = &off_2CDFF4;
LABEL_22:
    v16 = v9;
LABEL_23:
    core::panicking::panic_bounds_check(v16, 0x10000, (int)v17);
  }
  *((_BYTE *)a2 + v9) |= 0x80u;
  v11 = a2[16387] - 1;
  v5[3] = v11;
  if ( !v11 )
  {
    v12 = *v5;
    v5[3] = 8;
    *v5 = v12 + 1;
    v5[1] = v12;
  }
  v13 = (unsigned __int8 *)&unk_29C864 + (v8 >> 8);
  if ( v8 < 0x200 )
    v13 = (unsigned __int8 *)&unk_29C464 + v8;
  ++*(_WORD *)(a1 + 2 * *v13 + 576);
  if ( v4 >= 0x100 )
    core::panicking::panic_bounds_check(v4, 256, (int)&off_2CE0B4);
  v14 = word_29C120[v4];
  if ( v14 >= 0x120 )
    core::panicking::panic_bounds_check(word_29C120[v4], 288, (int)&off_2CE0C4);
  result = (_WORD *)(a1 + 2 * v14);
  ++*result;
  return result;
}
