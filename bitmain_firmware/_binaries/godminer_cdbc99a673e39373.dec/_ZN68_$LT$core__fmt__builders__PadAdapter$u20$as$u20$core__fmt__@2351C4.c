int __fastcall <core::fmt::builders::PadAdapter as core::fmt::Write>::write_str(int *a1, int a2, unsigned int a3)
{
  unsigned int v5; // r10
  unsigned int v6; // r4
  int v7; // r9
  int (__fastcall *v8)(int); // r3
  unsigned int v9; // r2
  int v10; // r1
  unsigned int v11; // r0
  bool *v12; // r6
  unsigned int v13; // r8
  unsigned int v14; // r11
  bool v15; // r0
  bool *v17; // [sp+0h] [bp-34h]
  int v18; // [sp+4h] [bp-30h]
  int v19; // [sp+8h] [bp-2Ch]

  v19 = *a1;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v18 = a1[1];
  v17 = (bool *)a1[2];
  do
  {
    if ( v7 )
      return 0;
    if ( v6 > a3 )
      goto LABEL_19;
    while ( 1 )
    {
      v9 = a3 - v6;
      if ( a3 - v6 >= 8 )
        break;
      v10 = 0;
      if ( !v9 )
        goto LABEL_18;
      while ( *(_BYTE *)(a2 + v6 + v10) != 10 )
      {
        if ( v9 == ++v10 )
          goto LABEL_18;
      }
LABEL_15:
      v11 = v6 + v10;
      v6 += v10 + 1;
      if ( v11 < a3 && *(_BYTE *)(a2 + v11) == 10 )
      {
        v12 = v17;
        v7 = 0;
        v13 = v6;
        v14 = v6;
        goto LABEL_20;
      }
      if ( v6 > a3 )
        goto LABEL_19;
    }
    if ( core::slice::memchr::memchr_aligned(10, a2 + v6) == 1 )
      goto LABEL_15;
LABEL_18:
    v6 = a3;
LABEL_19:
    v12 = v17;
    v7 = 1;
    v13 = v5;
    v14 = a3;
    if ( v5 == a3 )
      return 0;
LABEL_20:
    if ( *v12 && (*(int (__fastcall **)(int, const char *, int))(v18 + 12))(v19, asc_2A05C9, 4) )
      break;
    v15 = 0;
    if ( v14 != v5 )
      v15 = *(_BYTE *)(v14 + a2 - 1) == 10;
    v8 = *(int (__fastcall **)(int))(v18 + 12);
    *v12 = v15;
    v5 = v13;
  }
  while ( !v8(v19) );
  return 1;
}
