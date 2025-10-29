void __fastcall sub_1FFAB8(int *a1, int *a2)
{
  int *v2; // r11
  void *v4; // r6
  size_t v5; // r7
  int v6; // r4
  _DWORD *v7; // r10
  int v8; // r8
  unsigned int v9; // r11
  int v10; // r9
  int v11; // r7
  int v12; // r6
  int v13; // r0
  unsigned __int64 v14; // kr00_8
  const void *bytes_at_until; // r0
  int v16; // r1
  _BYTE *bytes_at; // r0
  int v18; // r1
  _BYTE *v20; // r5
  int v21; // r9
  int v22; // r1
  int v23; // r0
  size_t v24; // r10
  int v25; // r8
  int v26; // r9
  _DWORD *v27; // r0
  int *v28; // r12
  void *v29; // r3
  int v30; // r4
  int v31; // r5
  void *v32; // r6
  size_t v33; // r7
  _BYTE *v34; // r10
  int is_file; // r0
  int v36; // r1
  void *v37; // r0
  void *v38; // r6
  int v39; // r11
  size_t v40; // r2
  size_t v41; // r6
  void *v42; // r6
  size_t v43; // r7
  bool v44; // r1
  _BYTE *v51; // r0
  signed int v52; // r1
  int v53; // r0
  _BOOL4 v54; // r0
  int v55; // r11
  void *v56; // r5
  const void *v57; // r0
  int v58; // r1
  int v59; // r1
  char *v60; // r0
  void **v61; // r4
  int v62; // r5
  void *v63; // [sp+10h] [bp-254h]
  size_t v64; // [sp+14h] [bp-250h]
  void *v65; // [sp+18h] [bp-24Ch]
  int v66; // [sp+18h] [bp-24Ch]
  int *v67; // [sp+1Ch] [bp-248h]
  int *v68; // [sp+20h] [bp-244h]
  void *v69; // [sp+24h] [bp-240h]
  size_t v70; // [sp+28h] [bp-23Ch]
  size_t n; // [sp+2Ch] [bp-238h]
  size_t na; // [sp+2Ch] [bp-238h]
  int v73; // [sp+30h] [bp-234h] BYREF
  void *v74; // [sp+34h] [bp-230h]
  int v75; // [sp+38h] [bp-22Ch]
  int v76; // [sp+3Ch] [bp-228h]
  void *addr; // [sp+40h] [bp-224h]
  size_t len; // [sp+44h] [bp-220h]
  int v79; // [sp+48h] [bp-21Ch] BYREF
  void *v80; // [sp+4Ch] [bp-218h]
  size_t v81; // [sp+50h] [bp-214h]
  _BYTE v82[100]; // [sp+54h] [bp-210h] BYREF
  _DWORD src[23]; // [sp+B8h] [bp-1ACh] BYREF
  int v84[3]; // [sp+114h] [bp-150h] BYREF
  _DWORD v85[20]; // [sp+120h] [bp-144h] BYREF
  _DWORD v86[20]; // [sp+170h] [bp-F4h] BYREF
  _BYTE dest[80]; // [sp+1C0h] [bp-A4h] BYREF
  size_t v88[21]; // [sp+210h] [bp-54h] BYREF

  v2 = a2;
  v4 = (void *)a2[1];
  v5 = a2[2];
  sub_1FB14C(&v79, v4, v5);
  if ( !v79 )
  {
    v22 = *v2;
    a1[2] = 0;
    if ( v22 )
      _rust_dealloc(v4);
    return;
  }
  v76 = 0;
  v75 = 0;
  v74 = (void *)4;
  v73 = 0;
  v69 = v80;
  v70 = v81;
  sub_200428(v88);
  if ( !v88[6] )
  {
    v81 = 0;
    goto LABEL_84;
  }
  v64 = v5;
  v65 = v4;
  v67 = a1;
  v68 = v2;
  src[0] = v88[0];
  src[1] = v88[1];
  src[2] = v88[2];
  src[3] = v88[3];
  src[4] = v88[4];
  src[5] = v88[5];
  src[7] = v88[7];
  src[8] = v88[8];
  src[9] = v88[9];
  src[10] = v88[10];
  src[11] = v88[11];
  src[12] = v88[12];
  src[13] = v88[13];
  src[14] = v88[14];
  src[15] = v88[15];
  src[16] = v88[16];
  src[17] = v88[17];
  src[18] = v88[18];
  src[19] = v88[19];
  src[6] = v88[6];
  if ( !v88[7] )
    goto LABEL_24;
  v6 = src[0];
  if ( !src[0] )
  {
    v23 = 40 * src[7];
    do
      v23 -= 40;
    while ( v23 );
    goto LABEL_24;
  }
  v7 = (_DWORD *)(v88[6] + 16);
  v8 = src[2];
  v9 = src[3];
  v10 = src[4];
  v11 = src[5];
  n = src[1];
  v12 = 40 * src[7];
  while ( 1 )
  {
    v13 = *(v7 - 4);
    v14 = __CFADD__(v8, v13) + (unsigned __int64)v9;
    if ( !HIDWORD(v14) )
    {
      bytes_at_until = (const void *)<&[u8] as object::read::read_ref::ReadRef>::read_bytes_at_until(
                                       v6,
                                       n,
                                       v8 + v13,
                                       v14,
                                       v10,
                                       v11,
                                       0);
      if ( bytes_at_until )
      {
        if ( v16 == 17 && !bcmp(bytes_at_until, aGnuDebugaltlin, 0x11u) )
          break;
      }
    }
    v12 -= 40;
    v7 += 10;
    if ( !v12 )
      goto LABEL_24;
  }
  if ( *(v7 - 3) == 8 )
    goto LABEL_24;
  bytes_at = (_BYTE *)<&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(src[14], src[15], *v7, 0, v7[1], 0);
  _ZF = bytes_at == 0;
  v20 = bytes_at;
  if ( bytes_at )
  {
    v6 = v18;
    _ZF = v18 == 0;
  }
  if ( _ZF )
  {
LABEL_24:
    memcpy(dest, src, sizeof(dest));
    v88[6] = 0;
    v2 = v68;
    sub_1FA51C(&v79, (int)&v73, dest, (int)v88);
    a1 = v67;
    v24 = v81;
    if ( v81 )
      goto LABEL_25;
LABEL_84:
    v59 = v75;
    v60 = (char *)v74;
    _ZF = v75 == 0;
    a1[2] = 0;
    if ( !_ZF )
    {
      v61 = (void **)(v60 + 4);
      v62 = 12 * v59;
      do
      {
        if ( *(v61 - 1) )
          _rust_dealloc(*v61);
        v62 -= 12;
        v61 += 3;
      }
      while ( v62 );
    }
    if ( v73 )
      _rust_dealloc(v74);
    if ( v76 )
      munmap(addr, len);
    munmap(v69, v70);
    if ( *v2 )
      goto LABEL_26;
    return;
  }
  v21 = 0;
  while ( bytes_at[v21] )
  {
    if ( v6 == ++v21 )
      goto LABEL_24;
  }
  v34 = &bytes_at[v21 + 1];
  if ( v21 && *bytes_at == 47 )
  {
    is_file = std::path::Path::is_file((int)bytes_at, v21);
    if ( is_file )
    {
      if ( v21 <= -1 )
        alloc::raw_vec::capacity_overflow(is_file, v36);
      v37 = (void *)_rust_alloc(v21);
      if ( !v37 )
        alloc::alloc::handle_alloc_error();
      v38 = v37;
      memcpy(v37, v20, v21);
      v39 = v21;
      v40 = v21;
      goto LABEL_71;
    }
    goto LABEL_68;
  }
  std::sys::unix::fs::canonicalize((int)v88, v65, v64);
  if ( v88[0] )
  {
    if ( LOBYTE(v88[1]) == 3 )
    {
      v41 = v88[2];
      (**(void (__fastcall ***)(_DWORD))(v88[2] + 4))(*(_DWORD *)v88[2]);
      if ( *(_DWORD *)(*(_DWORD *)(v41 + 4) + 4) )
        _rust_dealloc(*(void **)v41);
      _rust_dealloc((void *)v41);
    }
    goto LABEL_41;
  }
  v42 = (void *)v88[2];
  if ( v88[2] )
  {
    v43 = v88[1];
    v86[2] = v88[3];
    v86[1] = v88[2];
    v86[0] = v88[1];
    if ( v88[3] )
      v44 = *(_BYTE *)v88[2] == 47;
    else
      v44 = 0;
    BYTE2(v88[7]) = v44;
    v88[1] = v88[3];
    LOBYTE(v88[2]) = 6;
    v88[0] = (size_t)v42;
    LOWORD(v88[7]) = 512;
    <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)dest, (int)v88);
    _R0 = dest[8];
    if ( dest[8] == 10 )
      goto LABEL_50;
    _R1 = 5;
    __asm { UQSUB8          R0, R0, R1 }
    if ( (unsigned int)(unsigned __int8)_R0 - 2 > 2 || (v51 = std::path::Components::as_path((int)v88)) == 0 )
    {
LABEL_50:
      v85[1] = 0;
      if ( !v43 )
        goto LABEL_69;
LABEL_51:
      _rust_dealloc(v42);
      goto LABEL_69;
    }
    v63 = v51;
    na = v52;
    if ( v52 )
    {
      if ( v52 <= -1 )
        alloc::raw_vec::capacity_overflow(v51, v52);
      v66 = _rust_alloc(v52);
      if ( !v66 )
        alloc::alloc::handle_alloc_error();
      memcpy((void *)v66, v63, na);
      v88[2] = na;
      v88[1] = v66;
      v53 = *(unsigned __int8 *)(na + v66 - 1);
      v88[0] = na;
      v54 = v53 != 47;
    }
    else
    {
      v54 = 0;
      v88[2] = 0;
      v66 = 1;
      v88[1] = 1;
      v88[0] = 0;
    }
    if ( !v21 || (v55 = 0, *v20 != 47) )
    {
      if ( !v54 )
      {
        v55 = na;
        goto LABEL_59;
      }
      sub_79AB0(v88, na, 1);
      na = v88[0];
      v66 = v88[1];
      v55 = v88[2] + 1;
      *(_BYTE *)(v88[1] + v88[2]) = 47;
    }
    v88[2] = v55;
LABEL_59:
    if ( na - v55 < v21 )
    {
      sub_79AB0(v88, v55, v21);
      v55 = v88[2];
      v66 = v88[1];
    }
    memcpy((void *)(v66 + v55), v20, v21);
    v56 = (void *)v88[1];
    v88[2] = v55 + v21;
    if ( !std::path::Path::is_file(v88[1], v55 + v21) )
    {
      if ( v88[0] )
        _rust_dealloc(v56);
      if ( v43 )
        _rust_dealloc(v42);
LABEL_68:
      sub_201380(v85, v34, ~v21 + v6);
      goto LABEL_69;
    }
    v85[0] = v88[0];
    v85[1] = v88[1];
    v85[2] = v88[2];
    if ( !v43 )
      goto LABEL_69;
    goto LABEL_51;
  }
LABEL_41:
  v85[1] = 0;
LABEL_69:
  v38 = (void *)v85[1];
  if ( !v85[1] )
    goto LABEL_24;
  v39 = v85[0];
  v40 = v85[2];
LABEL_71:
  src[22] = v40;
  src[21] = v38;
  src[20] = v39;
  sub_1FB14C(v84, v38, v40);
  if ( v84[0] != 1 )
    goto LABEL_79;
  if ( v76 == 1 )
    core::panicking::panic((int)aAssertionFaile_21, 36, (int)&off_2E1E94);
  len = v84[2];
  addr = (void *)v84[1];
  v76 = 1;
  sub_200428(v85);
  if ( !v85[6] )
    goto LABEL_79;
  memcpy(v86, v85, sizeof(v86));
  v57 = (const void *)sub_20111C(v86);
  if ( !v57 || ~v58 + v6 != v21 || bcmp(v57, v34, ~v21 + v6) )
  {
    if ( v86[16] )
      _rust_dealloc((void *)v86[17]);
LABEL_79:
    if ( v39 )
      _rust_dealloc(v38);
    goto LABEL_24;
  }
  memcpy(dest, src, sizeof(dest));
  memcpy(v88, v85, 0x50u);
  sub_1FA51C(&v79, (int)&v73, dest, (int)v88);
  if ( v39 )
    _rust_dealloc(v38);
  v2 = v68;
  a1 = v67;
  v24 = v81;
  if ( !v81 )
    goto LABEL_84;
LABEL_25:
  v25 = v79;
  v26 = (int)v80;
  memcpy(a1 + 3, v82, 0x64u);
  v27 = a1 + 30;
  v28 = a1;
  v29 = v74;
  v30 = v75;
  v31 = v76;
  v32 = addr;
  v33 = len;
  *v27 = v73;
  v27[1] = v29;
  v27[2] = v30;
  v27[3] = v31;
  v27[4] = v32;
  v27[5] = v33;
  v28[28] = (int)v69;
  v28[29] = v70;
  *v28 = v25;
  v28[1] = v26;
  v28[2] = v24;
  if ( *v2 )
LABEL_26:
    _rust_dealloc((void *)v2[1]);
}
