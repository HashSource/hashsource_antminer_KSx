int __fastcall sub_238424(int a1, int a2)
{
  int *v2; // r0
  int v3; // r4
  unsigned int v4; // t1
  unsigned int v5; // r9
  unsigned __int8 *v6; // r11
  unsigned __int8 *v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r0
  int v10; // r5
  int v11; // r3
  int v12; // lr
  int v13; // r12
  int v14; // r6
  int v15; // r2
  int v16; // r4
  int v17; // r7
  unsigned int v18; // r2
  int v19; // r12
  int v20; // r1
  __int16 v21; // r3
  unsigned __int8 *v22; // r0
  unsigned int v23; // r0
  unsigned int v24; // r5
  unsigned int v25; // r4
  unsigned int v26; // r7
  unsigned int v27; // r6
  __int16 v28; // r3
  unsigned __int8 *v29; // r6
  int v30; // r0
  __int16 v31; // r1
  unsigned __int8 *v32; // r7
  int v33; // r5
  unsigned int v34; // r6
  unsigned int i; // r7
  unsigned __int16 v36; // r4
  unsigned __int8 *v37; // r4
  _WORD *v38; // r4
  int v39; // t1
  unsigned __int16 v40; // r1
  int v41; // r0
  int *v44; // [sp+4h] [bp-A8h]
  int v46; // [sp+Ch] [bp-A0h]
  int v47; // [sp+10h] [bp-9Ch]
  int v48; // [sp+14h] [bp-98h]
  int v49; // [sp+18h] [bp-94h]
  int v50; // [sp+1Ch] [bp-90h]
  int v51; // [sp+20h] [bp-8Ch]
  int v52; // [sp+24h] [bp-88h]
  _DWORD s[16]; // [sp+28h] [bp-84h] BYREF
  _DWORD v54[3]; // [sp+68h] [bp-44h]
  int v55; // [sp+74h] [bp-38h]
  int v56; // [sp+78h] [bp-34h]
  int v57; // [sp+7Ch] [bp-30h]
  int v58; // [sp+80h] [bp-2Ch]
  int v59; // [sp+84h] [bp-28h]
  int v60; // [sp+88h] [bp-24h]
  int v61; // [sp+8Ch] [bp-20h]
  int v62; // [sp+90h] [bp-1Ch]
  int v63; // [sp+94h] [bp-18h]
  int v64; // [sp+98h] [bp-14h]
  int v65; // [sp+9Ch] [bp-10h]
  int v66; // [sp+A0h] [bp-Ch]
  int v67; // [sp+A4h] [bp-8h]
  int v68; // [sp+A8h] [bp-4h]

  v4 = *(_DWORD *)(a1 + 10484);
  v2 = (int *)(a1 + 10484);
  v3 = v4;
  if ( v4 > 2 )
LABEL_43:
    core::panicking::panic_bounds_check(v3, 3, (int)&off_2EE234);
  v44 = v2;
  while ( 2 )
  {
    v5 = *(_DWORD *)(a1 + 4 * v3 + 10504);
    memset(s, 0, sizeof(s));
    v6 = (unsigned __int8 *)(a1 + 3488 * v3);
    v54[1] = 0;
    v54[0] = 0;
    memset(v6, 0, 0xC80u);
    if ( v5 > 0x120 )
      core::slice::index::slice_end_index_len_fail();
    if ( v5 )
    {
      v7 = v6 + 3200;
      v8 = v5;
      do
      {
        v9 = *v7;
        if ( v9 > 0xF )
          core::panicking::panic_bounds_check(v9, 16, (int)&off_2EE254);
        --v8;
        ++v7;
        ++s[v9];
      }
      while ( v8 );
      v52 = s[15];
      v51 = s[14];
      v50 = s[13];
      v49 = s[12];
      v10 = s[1];
      v11 = s[2];
      v12 = s[3];
      v13 = s[4];
      v14 = s[8];
      v48 = s[11];
      v15 = s[5];
      v16 = s[6];
      v17 = s[7];
      v47 = s[10];
      v46 = s[9];
    }
    else
    {
      v14 = 0;
      v52 = 0;
      v51 = 0;
      v50 = 0;
      v49 = 0;
      v48 = 0;
      v47 = 0;
      v46 = 0;
      v17 = 0;
      v16 = 0;
      v15 = 0;
      v13 = 0;
      v12 = 0;
      v11 = 0;
      v10 = 0;
    }
    v54[2] = 2 * v10;
    v55 = 2 * (v11 + 2 * v10);
    v56 = 2 * (v12 + v55);
    v57 = 2 * (v13 + v56);
    v58 = 2 * (v15 + v57);
    v59 = 2 * (v16 + v58);
    v60 = 2 * (v17 + v59);
    v61 = 2 * (v14 + v60);
    v62 = 2 * (v46 + v61);
    v63 = 2 * (v47 + v62);
    v64 = 2 * (v48 + v63);
    v65 = 2 * (v49 + v64);
    v66 = 2 * (v50 + v65);
    v67 = 2 * (v51 + v66);
    v68 = 2 * (v52 + v67);
    if ( v68 != 0x10000
      && (unsigned int)(v52 + v51 + v50 + v49 + v48 + v47 + v46 + v14 + v17 + v16 + v15 + v13 + v12 + v11 + v10) > 1 )
    {
      return 6913;
    }
    if ( !v5 )
      goto LABEL_40;
    v18 = 0;
    v19 = 0xFFFF;
    do
    {
      v20 = v18;
      if ( v18 <= 0x120 )
        v20 = 288;
      while ( 1 )
      {
        if ( v18 == v20 )
          core::panicking::panic_bounds_check(v20, 288, (int)&off_2EE264);
        v21 = v18;
        v22 = &v6[v18++];
        v23 = v22[3200];
        if ( !v23 )
          goto LABEL_17;
        if ( v23 >= 0x11 )
          core::panicking::panic_bounds_check(v23, 17, (int)&off_2EE274);
        v24 = v54[v23];
        v25 = 0;
        v54[v23] = v24 + 1;
        v26 = 0;
        do
        {
          v27 = v26;
          ++v25;
          v26 = v24 & 1 | (2 * v26);
          v24 >>= 1;
        }
        while ( v25 < v23 );
        if ( v23 >= 0xB )
          break;
        if ( !(v26 >> 10) )
        {
          v28 = v21 | ((_WORD)v23 << 9);
          v29 = &v6[2 * v26];
          v30 = 1 << (v23 & 0x1F);
          do
          {
            v26 += v30;
            *(_WORD *)v29 = v28;
            v29 += 2 * v30;
          }
          while ( v26 < 0x400 );
        }
LABEL_17:
        if ( v18 >= v5 )
          goto LABEL_40;
      }
      v32 = &v6[2 * (v26 & 0x3FF)];
      v31 = *(_WORD *)v32;
      if ( !*(_WORD *)v32 )
      {
        *(_WORD *)v32 = v19;
        v33 = v19 - 2;
        v31 = v19;
        v34 = (2 * v27) >> 9;
        if ( v23 >= 0xC )
          goto LABEL_30;
LABEL_37:
        v19 = v33;
        goto LABEL_38;
      }
      v33 = v19;
      v34 = (2 * v27) >> 9;
      if ( v23 < 0xC )
        goto LABEL_37;
LABEL_30:
      for ( i = 11; i < v23; ++i )
      {
        v36 = ((v34 >> 1) & 1) + ~v31;
        if ( v36 >> 6 > 8u )
          core::panicking::panic_bounds_check((__int16)v36, 576, (int)&off_2EE284);
        v37 = &v6[2 * (__int16)v36];
        v39 = *((unsigned __int16 *)v37 + 1024);
        v38 = v37 + 2048;
        v31 = v39;
        if ( v39 )
        {
          v19 = v33;
        }
        else
        {
          v19 = v33 - 2;
          *v38 = v33;
          v31 = v33;
          v33 -= 2;
        }
        v34 >>= 1;
      }
LABEL_38:
      v40 = ((v34 >> 1) & 1) + ~v31;
      if ( v40 >= 0x240u )
        core::panicking::panic_bounds_check((__int16)v40, 576, (int)&off_2EE294);
      *(_WORD *)&v6[2 * (__int16)v40 + 2048] = v21;
    }
    while ( v18 < v5 );
LABEL_40:
    v41 = *v44;
    if ( *v44 )
    {
      if ( v41 != 2 )
      {
        v3 = v41 - 1;
        *v44 = v41 - 1;
        if ( (unsigned int)(v41 - 1) >= 3 )
          goto LABEL_43;
        continue;
      }
      *(_DWORD *)(a2 + 12) = 0;
      return 2561;
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
      return 3073;
    }
  }
}
