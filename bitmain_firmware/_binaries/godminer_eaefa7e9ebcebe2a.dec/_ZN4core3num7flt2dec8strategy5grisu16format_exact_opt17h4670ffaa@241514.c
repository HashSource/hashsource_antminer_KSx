int __fastcall core::num::flt2dec::strategy::grisu::format_exact_opt(
        _DWORD *a1,
        __int64 *a2,
        int a3,
        unsigned int a4,
        int a5)
{
  __int64 v6; // r2
  int v7; // r0
  unsigned int v8; // r1
  unsigned int v9; // r7
  unsigned int v10; // r1
  int v11; // r5
  int v12; // r2
  int v13; // r8
  int v14; // r0
  unsigned int v15; // r0
  int v16; // r1
  unsigned int v17; // r2
  unsigned int *v18; // r6
  signed int v19; // r7
  unsigned __int64 v20; // kr00_8
  unsigned __int64 v21; // kr18_8
  __int64 v22; // kr20_8
  __int16 v23; // r12
  unsigned __int64 v24; // r0
  unsigned __int16 v25; // lr
  bool v26; // cf
  unsigned int v27; // r0
  int v28; // r5
  unsigned int v29; // r1
  int v30; // r2
  unsigned int v31; // r7
  unsigned int v32; // r8
  int v33; // r9
  int v34; // r5
  unsigned int v35; // r6
  int v36; // r3
  int v37; // r4
  unsigned int v38; // r2
  __int64 v39; // r8
  unsigned int v40; // r11
  unsigned int v41; // r10
  int v42; // r4
  int v43; // r0
  __int64 v44; // r0
  unsigned int v45; // r2
  unsigned int v46; // r3
  unsigned int v48; // r0
  unsigned int v49; // r2
  unsigned int v50; // r1
  unsigned int v51; // r3
  int v52; // r3
  int v53; // r0
  unsigned int v54; // r2
  int v55; // lr
  unsigned int v56; // r1
  __int64 v57; // r4
  unsigned int v58; // kr10_4
  unsigned int v59; // r4
  unsigned int v60; // r7
  int v61; // [sp+20h] [bp-34h]
  int v62; // [sp+24h] [bp-30h]
  int v63; // [sp+28h] [bp-2Ch]
  unsigned int v64; // [sp+2Ch] [bp-28h]
  _DWORD *v65; // [sp+30h] [bp-24h]
  unsigned int v66; // [sp+34h] [bp-20h]
  int v67; // [sp+38h] [bp-1Ch]
  int v68; // [sp+3Ch] [bp-18h]
  char v69; // [sp+40h] [bp-14h]
  int v70; // [sp+44h] [bp-10h]
  char v71; // [sp+48h] [bp-Ch]

  v6 = *a2;
  if ( !*a2 )
    core::panicking::panic((int)aAssertionFaile_32, 28, (int)&off_2E3D64);
  if ( HIDWORD(v6) > 0x1FFFFFFF )
    core::panicking::panic((int)aAssertionFaile_40, 36, (int)&off_2E3D74);
  if ( !a4 )
    core::panicking::panic((int)aAssertionFaile_39, 33, (int)&off_2E3D84);
  v7 = *((unsigned __int16 *)a2 + 12);
  v8 = *((_DWORD *)a2 + 1);
  if ( !HIDWORD(v6) )
  {
    v8 = v6;
    v7 -= 32;
  }
  v9 = v8;
  if ( v8 < 0x10000 )
    v7 -= 16;
  if ( HIDWORD(v6) )
    HIDWORD(v6) = v6;
  if ( v8 < 0x10000 )
    v9 = (v8 << 16) | HIWORD(HIDWORD(v6));
  if ( v9 < 0x1000000 )
    v7 -= 8;
  if ( v8 < 0x10000 )
    HIDWORD(v6) <<= 16;
  LODWORD(v6) = v9;
  if ( v9 < 0x1000000 )
    LODWORD(v6) = (v9 << 8) | HIBYTE(HIDWORD(v6));
  if ( (unsigned int)v6 < 0x10000000 )
    v7 -= 4;
  if ( v9 < 0x1000000 )
    HIDWORD(v6) <<= 8;
  v10 = v6;
  if ( (unsigned int)v6 < 0x10000000 )
    v10 = (16 * v6) | (HIDWORD(v6) >> 28);
  if ( v10 < 0x40000000 )
    v7 -= 2;
  if ( (unsigned int)v6 < 0x10000000 )
    HIDWORD(v6) *= 16;
  v11 = v10;
  if ( v10 < 0x40000000 )
  {
    v11 = (4 * v10) | (HIDWORD(v6) >> 30);
    HIDWORD(v6) *= 4;
  }
  v12 = ~(v11 >> 31);
  v13 = v7 + v12;
  v14 = (unsigned __int64)(2068695443LL * (int)&elf_hash_chain[20 * (__int16)(-96 - (v7 + v12)) + 1138]) >> 32;
  v15 = (v14 >> 10) + ((unsigned int)v14 >> 31);
  if ( v15 >= 0x51 )
    core::panicking::panic_bounds_check(v15, 81, (int)&off_2E3C94);
  v16 = (v11 << (v11 > -1)) | (HIDWORD(v6) >> 1 >> ((v11 > -1) ^ 0x1F));
  v17 = HIDWORD(v6) << (v11 > -1);
  v18 = &core::num::flt2dec::strategy::grisu::CACHED_POW10[4 * v15];
  v19 = v18[1];
  v20 = *v18 * (unsigned __int64)(unsigned int)v16;
  v21 = (unsigned int)v19 * (unsigned __int64)v17;
  v22 = v19 * (__int64)v16 + SHIDWORD(v20) + SHIDWORD(v21);
  v23 = *((_WORD *)v18 + 5);
  v24 = (unsigned int)v20 + ((*v18 * (unsigned __int64)v17) >> 32) + (unsigned int)v21;
  v25 = -64 - (v13 + *((_WORD *)v18 + 4));
  v26 = __CFADD__(__CFADD__((_DWORD)v24, 0x80000000), (_DWORD)v22);
  LODWORD(v24) = __CFADD__((_DWORD)v24, 0x80000000) + (_DWORD)v22;
  v26 |= __CFADD__(HIDWORD(v24), (_DWORD)v24);
  v27 = HIDWORD(v24) + v24;
  v28 = (65472 - (v13 + *((unsigned __int16 *)v18 + 4))) & 0x3F;
  v29 = v26 + HIDWORD(v22);
  v30 = v28 - 32;
  v70 = v28 - 32;
  v31 = (v27 >> v28) | (v29 << (32 - v28));
  v32 = 1u >> (32 - v28);
  if ( v28 - 32 >= 0 )
  {
    v31 = v29 >> v30;
    v32 = 1 << v30;
  }
  v33 = 1 << v28;
  v69 = 32 - v28;
  if ( v30 >= 0 )
    v33 = 0;
  v68 = v33 - 1;
  v71 = v28;
  v67 = v33 - 1;
  if ( v31 >= 0x2710 )
  {
    v36 = 1000000;
    if ( v31 >= 0xF4240 )
    {
      v35 = 100000000;
      if ( v31 >= 0x5F5E100 )
      {
        v34 = 9;
        if ( v31 >= 0x3B9ACA00 )
          v35 = 1000000000;
        else
          v34 = 8;
      }
      else
      {
        v34 = 7;
        if ( v31 < 0x989680 )
          v34 = 6;
        else
          v36 = 10000000;
        v35 = v36;
      }
    }
    else
    {
      v35 = (unsigned int)&elf_hash_chain[4398];
      v34 = 5;
      if ( v31 < (unsigned int)&elf_hash_chain[4398] )
      {
        v34 = 4;
        v35 = 10000;
      }
    }
  }
  else if ( v31 >= 0x64 )
  {
    v34 = 3;
    v35 = 1000;
    if ( v31 < 0x3E8 )
    {
      v34 = 2;
      v35 = 100;
    }
  }
  else
  {
    v34 = v31 > 9;
    v35 = 10;
    if ( v31 < 0xA )
      v35 = 1;
  }
  v37 = (__int16)(v34 - v23 + 1);
  if ( v37 <= (__int16)a5 )
  {
    v44 = sub_26C8C0(v27, v29, 10, 0);
    v45 = v35 >> v69;
    if ( v70 >= 0 )
      v45 = v35 << v70;
    v46 = v35 << v71;
    if ( v70 >= 0 )
      v46 = 0;
    return sub_241B20(a1, a3, a4, 0, v37, a5, v44, HIDWORD(v44), v46, v45, v33, v32);
  }
  else
  {
    v64 = v32;
    v61 = v25;
    v63 = v33;
    LODWORD(v39) = v27 & v68;
    v38 = a4;
    HIDWORD(v39) = v29 & v67;
    LOWORD(v40) = -13107;
    v65 = a1;
    if ( v37 - (__int16)a5 < a4 )
      v38 = (__int16)(v37 - a5);
    v41 = v38 - 1;
    v62 = (__int16)(v34 - v23 + 1);
    v42 = 0;
    HIWORD(v40) = -13108;
    v66 = v38;
    while ( 1 )
    {
      v43 = sub_26CF70(v31, v35);
      if ( a4 == v42 )
        core::panicking::panic_bounds_check(a4, a4, (int)&off_2E3DA4);
      v31 -= v43 * v35;
      *(_BYTE *)(a3 + v42) = v43 + 48;
      if ( v41 == v42 )
      {
        v48 = v31 >> v69;
        v49 = v35 >> v69;
        v50 = v35 << v71;
        if ( v70 >= 0 )
          v48 = v31 << v70;
        v51 = v31 << v71;
        if ( v70 >= 0 )
        {
          v50 = 0;
          v49 = v35 << v70;
          v51 = 0;
        }
        return sub_241B20(v65, a3, a4, v66, v62, a5, v51 + v39, (__PAIR64__(v48, v51) + v39) >> 32, v50, v49, v63, v64);
      }
      if ( v34 == v42 )
        break;
      ++v42;
      v26 = v35 >= 0xA;
      v35 = (unsigned int)((v35 * (unsigned __int64)v40) >> 32) >> 3;
      if ( !v26 )
        core::panicking::panic((int)aAttemptToDivid, 25, (int)&off_2E3D94);
    }
    v52 = v42 + 1;
    v53 = a4;
    v54 = 1;
    v55 = (v61 - 1) & 0x3F;
    if ( v42 + 1 > a4 )
      v53 = v42 + 1;
    v56 = 0;
    while ( 1 )
    {
      HIDWORD(v57) = (v54 >> v55) | (v56 << (32 - v55));
      if ( v55 - 32 >= 0 )
        HIDWORD(v57) = v56 >> (v55 - 32);
      LODWORD(v57) = v56 >> v55;
      if ( v55 - 32 >= 0 )
        LODWORD(v57) = 0;
      if ( v57 )
        break;
      if ( v53 == v52 )
        core::panicking::panic_bounds_check(v53, a4, (int)&off_2E3DB4);
      v58 = v54;
      v54 *= 10;
      v59 = (unsigned __int64)(10 * v39) >> 32;
      v56 = (10 * __PAIR64__(v56, v58)) >> 32;
      v60 = ((unsigned int)(10 * v39) >> v71) | (v59 << v69);
      if ( v70 >= 0 )
        v60 = v59 >> v70;
      *(_BYTE *)(a3 + v52++) = v60 + 48;
      LODWORD(v39) = (10 * v39) & v68;
      HIDWORD(v39) = v59 & v67;
      if ( v66 == v52 )
        return sub_241B20(v65, a3, a4, v66, v62, a5, v39, HIDWORD(v39), v63, v64, v54, v56);
    }
    *v65 = 0;
    return 0;
  }
}
