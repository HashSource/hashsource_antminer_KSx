int __fastcall <std::net::ip_addr::Ipv6Addr as core::fmt::Display>::fmt(unsigned __int16 *a1, int a2)
{
  unsigned int v5; // r1
  unsigned int v6; // r10
  unsigned int v7; // r12
  unsigned int v8; // lr
  unsigned int v9; // r8
  unsigned int v10; // r7
  unsigned int v11; // r6
  int v12; // r0
  int v13; // r1
  unsigned int v14; // r2
  unsigned int v15; // r11
  int v16; // r3
  unsigned int v17; // r5
  int v18; // r0
  unsigned int v19; // r1
  unsigned int v20; // r4
  unsigned int v21; // r3
  _BOOL4 v22; // r2
  unsigned int v23; // r7
  int v24; // r5
  unsigned int v25; // r0
  bool v26; // zf
  char **v27; // r0
  unsigned int v28; // r0
  unsigned int v29; // r1
  unsigned int v30; // r1
  int v31; // r3
  unsigned int v32; // [sp+8h] [bp-5Ch]
  unsigned int v33; // [sp+Ch] [bp-58h]
  unsigned __int16 *v34; // [sp+10h] [bp-54h] BYREF
  unsigned int v35; // [sp+14h] [bp-50h] BYREF
  _DWORD v36[10]; // [sp+18h] [bp-4Ch] BYREF
  unsigned int **v37; // [sp+40h] [bp-24h] BYREF
  void *v38; // [sp+44h] [bp-20h]
  unsigned int *v39; // [sp+48h] [bp-1Ch] BYREF
  int v40; // [sp+4Ch] [bp-18h] BYREF
  __int16 v41; // [sp+50h] [bp-14h]
  __int16 v42; // [sp+52h] [bp-12h]
  char **v43; // [sp+54h] [bp-10h]
  int v44; // [sp+58h] [bp-Ch]
  unsigned int ***v45; // [sp+5Ch] [bp-8h]
  int v46; // [sp+60h] [bp-4h]

  v34 = a1;
  if ( core::fmt::Formatter::precision(a2) == 1 || core::fmt::Formatter::width(a2) == 1 )
  {
    v38 = sub_1AD2DC;
    v37 = (unsigned int **)&v34;
    v43 = &off_2DE980;
    v44 = 1;
    v45 = &v37;
    v46 = 1;
    v35 = 0;
    v39 = &v35;
    v40 = 0;
    if ( core::fmt::write(&v39, &off_2DE068, &v40) )
      core::result::unwrap_failed((int)&unk_2A4DCA, 43, (int)&v40, (int)&off_2DE318, (int)&off_2DED38);
    if ( v35 >= 0x28 )
      core::slice::index::slice_end_index_len_fail();
    return core::fmt::Formatter::pad(a2, v36, v35);
  }
  v5 = a1[6];
  v33 = a1[7];
  v6 = a1[4];
  HIWORD(v44) = __rev16(v33);
  v7 = a1[3];
  LOWORD(v44) = __rev16(v5);
  v8 = a1[2];
  LOWORD(v43) = __rev16(v6);
  v9 = a1[1];
  v42 = __rev16(v7);
  v10 = *a1;
  v41 = __rev16(v8);
  HIWORD(v40) = __rev16(v9);
  v11 = *((_DWORD *)a1 + 3);
  v32 = v5;
  LOWORD(v40) = __rev16(v10);
  v12 = *((_DWORD *)a1 + 1);
  v13 = *(_DWORD *)a1;
  v14 = *((_DWORD *)a1 + 2);
  v15 = a1[5];
  v16 = *(_DWORD *)a1 | v14;
  v17 = __rev16(v15);
  HIWORD(v43) = v17;
  if ( !(v16 | v12 | v11 ^ 0x1000000) )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, ::a1, 3);
  if ( !(v16 | v12 | v11) )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, asc_2A611D, 2);
  if ( v13 | (unsigned __int16)v14 | v12 )
    goto LABEL_11;
  v25 = bswap32(HIWORD(v14) | (v11 << 16));
  v26 = HIWORD(v25) == 0;
  if ( HIWORD(v25) )
    v26 = HIWORD(v25) == 0xFFFF;
  if ( !v26 )
  {
LABEL_11:
    v18 = 1;
    if ( !v10 )
      v18 = 2;
    v19 = __clz(v10);
    v20 = v18;
    if ( v9 )
      v20 = v19 >> 5;
    v21 = 1;
    v22 = v9 == 0 && v10 != 0;
    v23 = 0;
    if ( v8 )
    {
      v24 = 0;
      v21 = 0;
      if ( v7 )
      {
LABEL_17:
        v24 = 0;
        goto LABEL_37;
      }
    }
    else
    {
      v24 = v22;
      if ( v9 )
        v24 = 2;
      else
        v21 = v18 + 1;
      if ( v21 > v20 )
      {
        v22 = v24;
        v20 = v21;
      }
      if ( v7 )
        goto LABEL_17;
    }
    v23 = v21 + 1;
    if ( !v21 )
      v24 = 3;
    if ( v21 >= v20 )
      v22 = v24;
    if ( v23 > v20 )
      v20 = v21 + 1;
LABEL_37:
    v28 = 0;
    if ( v6 )
    {
      v24 = 0;
      v29 = 0;
      if ( v15 )
        goto LABEL_39;
    }
    else
    {
      v29 = v23 + 1;
      if ( !v23 )
        v24 = 4;
      if ( v23 >= v20 )
        v22 = v24;
      if ( v29 > v20 )
        v20 = v23 + 1;
      if ( v15 )
      {
LABEL_39:
        v24 = 0;
        v30 = 0;
        if ( v32 )
          goto LABEL_40;
        goto LABEL_59;
      }
    }
    v28 = v29 + 1;
    if ( !v29 )
      v24 = 5;
    if ( v29 >= v20 )
      v22 = v24;
    if ( v28 > v20 )
      v20 = v29 + 1;
    v30 = 0;
    if ( v32 )
    {
LABEL_40:
      v24 = 0;
      if ( v33 )
        goto LABEL_41;
      goto LABEL_66;
    }
LABEL_59:
    v30 = v28 + 1;
    if ( !v28 )
      v24 = 6;
    if ( v28 >= v20 )
      v22 = v24;
    if ( v30 > v20 )
      v20 = v28 + 1;
    if ( v33 )
    {
LABEL_41:
      v24 = v22;
      if ( v20 > 1 )
      {
LABEL_42:
        if ( sub_1D7F68(a2, &v40, v24, v33) || <core::fmt::Formatter as core::fmt::Write>::write_str(a2, asc_2A611D, 2) )
          return 1;
        if ( v20 + v24 >= 9 )
          core::slice::index::slice_start_index_len_fail();
        return sub_1D7F68(a2, (char *)&v40 + 2 * v20 + 2 * v24, 8 - (v20 + v24), v31);
      }
      return sub_1D7F68(a2, &v40, 8, v33);
    }
LABEL_66:
    if ( !v30 )
      v24 = 7;
    if ( v30 < v20 )
      v24 = v22;
    if ( v30 + 1 > v20 )
      v20 = v30 + 1;
    if ( v20 > 1 )
      goto LABEL_42;
    return sub_1D7F68(a2, &v40, 8, v33);
  }
  v39 = (unsigned int *)(bswap32((unsigned __int16)bswap32(v11)) | (unsigned __int16)v11);
  if ( v17 )
  {
    if ( v17 != 0xFFFF )
      core::panicking::panic((int)aInternalErrorE_0, 40, (int)&off_2DED18);
    v27 = &off_2DED28;
  }
  else
  {
    v27 = &off_2DED30;
  }
  v36[2] = 1;
  v36[4] = 1;
  v36[3] = &v37;
  v35 = 0;
  v38 = <std::net::ip_addr::Ipv4Addr as core::fmt::Display>::fmt;
  v37 = &v39;
  v36[1] = v27;
  return core::fmt::Formatter::write_fmt(a2, &v35);
}
