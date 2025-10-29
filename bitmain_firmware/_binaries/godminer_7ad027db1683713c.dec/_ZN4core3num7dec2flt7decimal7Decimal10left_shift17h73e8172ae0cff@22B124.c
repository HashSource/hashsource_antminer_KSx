unsigned int __fastcall core::num::dec2flt::decimal::Decimal::left_shift(unsigned int result, char a2)
{
  int v2; // r2
  unsigned int v3; // r4
  int v4; // r10
  unsigned __int16 *v5; // r1
  unsigned int v6; // r0
  unsigned __int16 v7; // r7
  int v8; // r8
  unsigned int v9; // r1
  char *v10; // r3
  unsigned int v11; // r0
  int v12; // r7
  bool v13; // zf
  unsigned int v14; // r6
  unsigned int v15; // r5
  int v16; // r5
  __int64 v17; // r0
  int v18; // r11
  unsigned int v19; // r8
  __int64 v20; // r2
  unsigned __int64 v21; // kr00_8
  unsigned __int64 v22; // r2
  int v23; // r1
  unsigned int v24; // r4
  unsigned int v25; // r5
  unsigned int v26; // r6
  unsigned __int64 v27; // r2
  unsigned int v28; // [sp+0h] [bp-Ch]
  unsigned int v29; // [sp+4h] [bp-8h]
  unsigned int v30; // [sp+8h] [bp-4h]

  v2 = *(_DWORD *)(result + 768);
  if ( v2 )
  {
    v3 = result;
    v4 = a2 & 0x3F;
    v5 = (unsigned __int16 *)((char *)&unk_29DA62 + 2 * v4);
    v6 = *v5 & 0x7FF;
    if ( v6 >= 0x51D )
      core::slice::index::slice_start_index_len_fail(v6, 1308, (int)&off_2CEB04);
    v7 = v5[1];
    v8 = *v5 >> 11;
    v9 = 1308 - v6;
    v10 = (char *)&unk_29DAE4 + v6;
    v11 = (v7 & 0x7FF) - v6;
    v12 = 0;
    while ( 1 )
    {
      v13 = v11 == v12;
      if ( v11 != v12 )
        v13 = v9 == v12;
      if ( v13 )
        break;
      if ( v2 == v12 )
      {
        --v8;
        break;
      }
      if ( v12 == 768 )
        core::panicking::panic_bounds_check(768, 768, (int)&off_2CEB14);
      v14 = (unsigned __int8)v10[v12];
      v15 = *(unsigned __int8 *)(v3 + v12++);
      if ( v15 != v14 )
      {
        if ( v15 < v14 )
          --v8;
        break;
      }
    }
    v16 = v2 - 1;
    v30 = v3;
    v28 = v3 + v8;
    v17 = 0;
    v29 = v2 - 1;
    do
    {
      if ( v29 >> 8 > 2 )
        core::panicking::panic_bounds_check(v16, 768, (int)&off_2CEAB4);
      v18 = v8;
      v19 = v8 + v16;
      LODWORD(v20) = *(unsigned __int8 *)(v3 + v16);
      HIDWORD(v20) = (unsigned int)v20 >> (32 - v4);
      if ( v4 - 32 >= 0 )
        HIDWORD(v20) = (_DWORD)v20 << (v4 - 32);
      LODWORD(v20) = (_DWORD)v20 << v4;
      if ( v4 - 32 >= 0 )
        LODWORD(v20) = 0;
      v21 = v20 + v17;
      LODWORD(v17) = sub_25A4F8(v21, HIDWORD(v21), 0xAu);
      v22 = -10 * v17 + v21;
      if ( v19 < 0x300 )
      {
        *(_BYTE *)(v28 + v16) = v22;
      }
      else if ( v22 )
      {
        *(_BYTE *)(v3 + 776) = 1;
      }
      --v16;
      v8 = v18;
    }
    while ( v16 != -1 );
    if ( v21 >= 0xA )
    {
      v24 = v18 - 1;
      do
      {
        v25 = HIDWORD(v17);
        v26 = v17;
        LODWORD(v17) = sub_25A4F8(v17, HIDWORD(v17), 0xAu);
        v27 = -10 * v17 + __PAIR64__(v25, v26);
        if ( v24 < 0x300 )
        {
          *(_BYTE *)(v30 + v24) = v27;
        }
        else if ( v27 )
        {
          *(_BYTE *)(v30 + 776) = 1;
        }
        --v24;
      }
      while ( __PAIR64__(v25, v26) >= 0xA );
    }
    result = *(_DWORD *)(v30 + 768) + v18;
    v23 = *(_DWORD *)(v30 + 772) + v18;
    if ( result >= 0x300 )
      result = 768;
    *(_DWORD *)(v30 + 768) = result;
    *(_DWORD *)(v30 + 772) = v23;
    if ( result )
    {
      --result;
      do
      {
        if ( *(_BYTE *)(v30 + result) )
          break;
        *(_DWORD *)(v30 + 768) = result--;
      }
      while ( result != -1 );
    }
  }
  return result;
}
