void __fastcall sub_1EB594(int *a1, int *a2)
{
  int *v2; // r11
  _BYTE *v4; // r6
  size_t v5; // r7
  int v6; // r4
  unsigned int *v7; // r10
  int v8; // r8
  unsigned int v9; // r11
  unsigned int v10; // r9
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
  unsigned int v24; // r10
  int v25; // r8
  int v26; // r9
  int *v27; // r0
  int *v28; // r12
  void *v29; // r3
  int v30; // r4
  int v31; // r5
  void *v32; // r6
  size_t v33; // r7
  _BYTE *v34; // r10
  _BYTE *v35; // r0
  _BYTE *v36; // r6
  int v37; // r11
  size_t v38; // r2
  unsigned int v39; // r6
  void *v40; // r6
  unsigned int v41; // r7
  bool v42; // r1
  _BYTE *v49; // r0
  signed int v50; // r1
  int v51; // r0
  _BOOL4 v52; // r0
  int v53; // r11
  void *v54; // r5
  const char *v55; // r0
  int v56; // r1
  int v57; // r1
  char *v58; // r0
  void **v59; // r4
  int v60; // r5
  void *v61; // [sp+10h] [bp-254h]
  size_t v62; // [sp+14h] [bp-250h]
  _BYTE *v63; // [sp+18h] [bp-24Ch]
  int v64; // [sp+18h] [bp-24Ch]
  int *v65; // [sp+1Ch] [bp-248h]
  int *v66; // [sp+20h] [bp-244h]
  void *v67; // [sp+24h] [bp-240h]
  unsigned int v68; // [sp+28h] [bp-23Ch]
  size_t n; // [sp+2Ch] [bp-238h]
  unsigned int na; // [sp+2Ch] [bp-238h]
  int v71; // [sp+30h] [bp-234h] BYREF
  void *v72; // [sp+34h] [bp-230h]
  int v73; // [sp+38h] [bp-22Ch]
  int v74; // [sp+3Ch] [bp-228h]
  void *addr; // [sp+40h] [bp-224h]
  size_t len; // [sp+44h] [bp-220h]
  int v77; // [sp+48h] [bp-21Ch] BYREF
  void *v78; // [sp+4Ch] [bp-218h]
  unsigned int v79; // [sp+50h] [bp-214h]
  _BYTE v80[100]; // [sp+54h] [bp-210h] BYREF
  _DWORD src[23]; // [sp+B8h] [bp-1ACh] BYREF
  int v82; // [sp+114h] [bp-150h] BYREF
  void *v83; // [sp+118h] [bp-14Ch]
  size_t v84; // [sp+11Ch] [bp-148h]
  int v85[20]; // [sp+120h] [bp-144h] BYREF
  _DWORD v86[20]; // [sp+170h] [bp-F4h] BYREF
  int dest[20]; // [sp+1C0h] [bp-A4h] BYREF
  unsigned int v88[21]; // [sp+210h] [bp-54h] BYREF

  v2 = a2;
  v4 = (_BYTE *)a2[1];
  v5 = a2[2];
  sub_1E6C28(&v77, v4, v5);
  if ( !v77 )
  {
    v22 = *v2;
    a1[2] = 0;
    if ( v22 )
      _rust_dealloc(v4);
    return;
  }
  v74 = 0;
  v73 = 0;
  v72 = (void *)4;
  v71 = 0;
  v67 = v78;
  v68 = v79;
  sub_1EBF04((int *)v88, (int)v78, v79);
  if ( !v88[6] )
  {
    v79 = 0;
    goto LABEL_84;
  }
  v62 = v5;
  v63 = v4;
  v65 = a1;
  v66 = v2;
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
  v7 = (unsigned int *)(v88[6] + 16);
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
    v2 = v66;
    sub_1E5FF8(&v77, (unsigned int *)&v71, dest, (int *)v88);
    a1 = v65;
    v24 = v79;
    if ( v79 )
      goto LABEL_25;
LABEL_84:
    v57 = v73;
    v58 = (char *)v72;
    _ZF = v73 == 0;
    a1[2] = 0;
    if ( !_ZF )
    {
      v59 = (void **)(v58 + 4);
      v60 = 12 * v57;
      do
      {
        if ( *(v59 - 1) )
          _rust_dealloc(*v59);
        v60 -= 12;
        v59 += 3;
      }
      while ( v60 );
    }
    if ( v71 )
      _rust_dealloc(v72);
    if ( v74 )
      munmap(addr, len);
    munmap(v67, v68);
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
    if ( std::path::Path::is_file(bytes_at, v21) )
    {
      if ( v21 <= -1 )
        alloc::raw_vec::capacity_overflow();
      v35 = (_BYTE *)_rust_alloc(v21);
      if ( !v35 )
        alloc::alloc::handle_alloc_error();
      v36 = v35;
      memcpy(v35, v20, v21);
      v37 = v21;
      v38 = v21;
      goto LABEL_71;
    }
    goto LABEL_68;
  }
  std::sys::unix::fs::canonicalize((int)v88, v63, v62);
  if ( v88[0] )
  {
    if ( LOBYTE(v88[1]) == 3 )
    {
      v39 = v88[2];
      (**(void (__fastcall ***)(_DWORD))(v88[2] + 4))(*(_DWORD *)v88[2]);
      if ( *(_DWORD *)(*(_DWORD *)(v39 + 4) + 4) )
        _rust_dealloc(*(void **)v39);
      _rust_dealloc((void *)v39);
    }
    goto LABEL_41;
  }
  v40 = (void *)v88[2];
  if ( v88[2] )
  {
    v41 = v88[1];
    v86[2] = v88[3];
    v86[1] = v88[2];
    v86[0] = v88[1];
    if ( v88[3] )
      v42 = *(_BYTE *)v88[2] == 47;
    else
      v42 = 0;
    BYTE2(v88[7]) = v42;
    v88[1] = v88[3];
    LOBYTE(v88[2]) = 6;
    v88[0] = (unsigned int)v40;
    LOWORD(v88[7]) = 512;
    <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)dest, (int)v88);
    _R0 = LOBYTE(dest[2]);
    if ( LOBYTE(dest[2]) == 10 )
      goto LABEL_50;
    _R1 = 5;
    __asm { UQSUB8          R0, R0, R1 }
    if ( (unsigned int)(unsigned __int8)_R0 - 2 > 2 || (v49 = std::path::Components::as_path((int)v88)) == 0 )
    {
LABEL_50:
      v85[1] = 0;
      if ( !v41 )
        goto LABEL_69;
LABEL_51:
      _rust_dealloc(v40);
      goto LABEL_69;
    }
    v61 = v49;
    na = v50;
    if ( v50 )
    {
      if ( v50 <= -1 )
        alloc::raw_vec::capacity_overflow();
      v64 = _rust_alloc(v50);
      if ( !v64 )
        alloc::alloc::handle_alloc_error();
      memcpy((void *)v64, v61, na);
      v88[2] = na;
      v88[1] = v64;
      v51 = *(unsigned __int8 *)(na + v64 - 1);
      v88[0] = na;
      v52 = v51 != 47;
    }
    else
    {
      v52 = 0;
      v88[2] = 0;
      v64 = 1;
      v88[1] = 1;
      v88[0] = 0;
    }
    if ( !v21 || (v53 = 0, *v20 != 47) )
    {
      if ( !v52 )
      {
        v53 = na;
        goto LABEL_59;
      }
      sub_77DD8(v88, na, 1);
      na = v88[0];
      v64 = v88[1];
      v53 = v88[2] + 1;
      *(_BYTE *)(v88[1] + v88[2]) = 47;
    }
    v88[2] = v53;
LABEL_59:
    if ( na - v53 < v21 )
    {
      sub_77DD8(v88, v53, v21);
      v53 = v88[2];
      v64 = v88[1];
    }
    memcpy((void *)(v64 + v53), v20, v21);
    v54 = (void *)v88[1];
    v88[2] = v53 + v21;
    if ( !std::path::Path::is_file((_BYTE *)v88[1], v53 + v21) )
    {
      if ( v88[0] )
        _rust_dealloc(v54);
      if ( v41 )
        _rust_dealloc(v40);
LABEL_68:
      sub_1ECE5C(v85, v34, ~v21 + v6);
      goto LABEL_69;
    }
    v85[0] = v88[0];
    v85[1] = v88[1];
    v85[2] = v88[2];
    if ( !v41 )
      goto LABEL_69;
    goto LABEL_51;
  }
LABEL_41:
  v85[1] = 0;
LABEL_69:
  v36 = (_BYTE *)v85[1];
  if ( !v85[1] )
    goto LABEL_24;
  v37 = v85[0];
  v38 = v85[2];
LABEL_71:
  src[22] = v38;
  src[21] = v36;
  src[20] = v37;
  sub_1E6C28(&v82, v36, v38);
  if ( v82 != 1 )
    goto LABEL_79;
  if ( v74 == 1 )
    core::panicking::panic((int)aAssertionFaile_21, 36, (int)&off_2CAE94);
  len = v84;
  addr = v83;
  v74 = 1;
  sub_1EBF04(v85, (int)v83, v84);
  if ( !v85[6] )
    goto LABEL_79;
  memcpy(v86, v85, sizeof(v86));
  v55 = sub_1ECBF8((int)v86);
  if ( !v55 || ~v56 + v6 != v21 || bcmp(v55, v34, ~v21 + v6) )
  {
    if ( v86[16] )
      _rust_dealloc((void *)v86[17]);
LABEL_79:
    if ( v37 )
      _rust_dealloc(v36);
    goto LABEL_24;
  }
  memcpy(dest, src, sizeof(dest));
  memcpy(v88, v85, 0x50u);
  sub_1E5FF8(&v77, (unsigned int *)&v71, dest, (int *)v88);
  if ( v37 )
    _rust_dealloc(v36);
  v2 = v66;
  a1 = v65;
  v24 = v79;
  if ( !v79 )
    goto LABEL_84;
LABEL_25:
  v25 = v77;
  v26 = (int)v78;
  memcpy(a1 + 3, v80, 0x64u);
  v27 = a1 + 30;
  v28 = a1;
  v29 = v72;
  v30 = v73;
  v31 = v74;
  v32 = addr;
  v33 = len;
  *v27 = v71;
  v27[1] = (int)v29;
  v27[2] = v30;
  v27[3] = v31;
  v27[4] = (int)v32;
  v27[5] = v33;
  v28[28] = (int)v67;
  v28[29] = v68;
  *v28 = v25;
  v28[1] = v26;
  v28[2] = v24;
  if ( *v2 )
LABEL_26:
    _rust_dealloc((void *)v2[1]);
}
