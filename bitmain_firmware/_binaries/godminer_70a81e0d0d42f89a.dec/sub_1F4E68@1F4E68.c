bool __fastcall sub_1F4E68(size_t *a1, int a2, _BYTE *src, size_t n)
{
  int v5; // r1
  _BOOL4 v9; // r0
  int v10; // r4
  const void *v11; // r1
  size_t v12; // r4
  int v13; // r6
  char v14; // r4
  _BYTE *v15; // r0
  size_t v16; // r7
  bool v17; // r1
  size_t v25; // r1
  unsigned int v27; // r2
  int v28; // r1
  char *v29; // r0
  int v30; // r1
  size_t v31; // r5
  int v32; // [sp+8h] [bp-1B8h] BYREF
  _UNKNOWN **v33; // [sp+Ch] [bp-1B4h]
  _BYTE *dest; // [sp+10h] [bp-1B0h] BYREF
  size_t v35; // [sp+14h] [bp-1ACh]
  char v36; // [sp+18h] [bp-1A8h]
  __int16 v37; // [sp+2Ch] [bp-194h]
  bool v38; // [sp+2Eh] [bp-192h]
  _DWORD v39[3]; // [sp+194h] [bp-2Ch] BYREF
  int fd[2]; // [sp+1A0h] [bp-20h] BYREF
  int v41; // [sp+1A8h] [bp-18h]
  __int16 v42; // [sp+1ACh] [bp-14h]

  v5 = a1[2];
  if ( v5 )
  {
    v9 = *(unsigned __int8 *)(v5 + a1[1] - 1) != 47;
    if ( !n )
      goto LABEL_6;
LABEL_5:
    v10 = 0;
    if ( *src == 47 )
      goto LABEL_10;
    goto LABEL_6;
  }
  v9 = 0;
  if ( n )
    goto LABEL_5;
LABEL_6:
  if ( !v9 )
  {
    v10 = v5;
    if ( *a1 - v5 >= n )
      goto LABEL_11;
    goto LABEL_19;
  }
  if ( *a1 == v5 )
  {
    sub_79AB0(a1, v5, 1);
    v5 = a1[2];
  }
  v10 = v5 + 1;
  *(_BYTE *)(a1[1] + v5) = 47;
LABEL_10:
  a1[2] = v10;
  if ( *a1 - v10 >= n )
    goto LABEL_11;
LABEL_19:
  sub_79AB0(a1, v10, n);
  v10 = a1[2];
LABEL_11:
  memcpy((void *)(a1[1] + v10), src, n);
  a1[2] = v10 + n;
  *(_DWORD *)(a2 + 8) = 0;
  fd[1] = 438;
  v41 = 0;
  v11 = (const void *)a1[1];
  v12 = a1[2];
  LOBYTE(v41) = 1;
  v42 = 0;
  fd[0] = 0;
  if ( v12 >> 7 > 2 )
  {
    sub_7B738(&v32, (int)v11, v12, (int)fd);
    if ( (unsigned __int8)v32 != 4 )
      goto LABEL_21;
  }
  else
  {
    memcpy(&dest, v11, v12);
    *((_BYTE *)&dest + v12) = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v39, &dest, v12 + 1);
    if ( v39[0] )
    {
      v32 = dword_2E1158;
      v33 = &off_2E114C;
      if ( (unsigned __int8)dword_2E1158 != 4 )
      {
LABEL_21:
        v14 = v32;
        v13 = (int)v33;
        v15 = (_BYTE *)a1[1];
        v16 = a1[2];
        if ( !v16 )
          goto LABEL_22;
        goto LABEL_17;
      }
    }
    else
    {
      sub_1ED79C((int)&v32, v39[1], v39[2], (int)fd);
      if ( (unsigned __int8)v32 != 4 )
        goto LABEL_21;
    }
  }
  v13 = (int)v33;
  v14 = 4;
  v15 = (_BYTE *)a1[1];
  v16 = a1[2];
  if ( !v16 )
  {
LABEL_22:
    v17 = 0;
    goto LABEL_23;
  }
LABEL_17:
  v17 = *v15 == 47;
LABEL_23:
  v38 = v17;
  dest = v15;
  v36 = 6;
  v35 = v16;
  v37 = 512;
  <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)fd, (int)&dest);
  _R0 = (unsigned __int8)v41;
  if ( (unsigned __int8)v41 != 10 )
  {
    _R1 = 5;
    __asm { UQSUB8          R0, R0, R1 }
    if ( (unsigned int)(unsigned __int8)_R0 - 2 < 3 && std::path::Components::as_path((int)&dest) && v16 >= v25 )
      a1[2] = v25;
  }
  if ( v14 != 4 )
  {
    if ( v14 == 3 )
    {
      (**(void (__fastcall ***)(_DWORD))(v13 + 4))(*(_DWORD *)v13);
      if ( *(_DWORD *)(*(_DWORD *)(v13 + 4) + 4) )
        _rust_dealloc(*(void **)v13);
      _rust_dealloc((void *)v13);
    }
    return 0;
  }
  if ( v13 == -1 )
    return 0;
  fd[0] = v13;
  v27 = sub_1CF820(fd);
  v28 = *(_DWORD *)(a2 + 8);
  if ( *(_DWORD *)a2 - v28 < v27 )
    sub_79AB0((size_t *)a2, v28, v27);
  sub_1D8394((int *)&dest, fd[0], (size_t *)a2);
  if ( (unsigned __int8)dest == 4 )
  {
    close(fd[0]);
    v29 = sub_1B196C(*(char **)(a2 + 4), *(_DWORD *)(a2 + 8));
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&dest, v29, v30);
    return !(_BYTE)dest;
  }
  if ( (unsigned __int8)dest == 3 )
  {
    v31 = v35;
    (**(void (__fastcall ***)(_DWORD))(v35 + 4))(*(_DWORD *)v35);
    if ( *(_DWORD *)(*(_DWORD *)(v31 + 4) + 4) )
      _rust_dealloc(*(void **)v31);
    _rust_dealloc((void *)v31);
  }
  close(fd[0]);
  return 0;
}
