int __fastcall <std::sys::unix::fs::File as core::fmt::Debug>::fmt(int *a1, _DWORD *a2)
{
  _BYTE *v2; // r0
  _BYTE *v3; // r5
  unsigned int v4; // r6
  void *v5; // r7
  int v6; // r4
  unsigned int v7; // r0
  size_t v8; // r4
  void *v9; // r5
  void *v10; // r4
  int v11; // r0
  bool v12; // zf
  char v13; // r0
  _BYTE *v14; // r0
  int fd; // [sp+4h] [bp-1BCh] BYREF
  unsigned __int8 v17[8]; // [sp+8h] [bp-1B8h] BYREF
  int v18; // [sp+10h] [bp-1B0h] BYREF
  unsigned int v19; // [sp+14h] [bp-1ACh] BYREF
  void *v20; // [sp+18h] [bp-1A8h]
  int v21; // [sp+1Ch] [bp-1A4h]
  int v22; // [sp+20h] [bp-1A0h] BYREF
  void *src; // [sp+24h] [bp-19Ch]
  size_t n; // [sp+28h] [bp-198h]
  unsigned int v25; // [sp+2Ch] [bp-194h]
  void *v26; // [sp+30h] [bp-190h] BYREF
  void *ptr; // [sp+34h] [bp-18Ch]
  unsigned int v28; // [sp+38h] [bp-188h]
  _DWORD v29[3]; // [sp+1B4h] [bp-Ch] BYREF

  fd = *a1;
  core::fmt::Formatter::debug_struct((int)v17, a2, (int)"FilepathreadHOMEargs && ", 4);
  core::fmt::builders::DebugStruct::field(v17, (int)aFd, 2u, (int)&fd, (int)&off_2C9A5C);
  v18 = fd;
  v2 = (_BYTE *)_rust_alloc(0xDu);
  if ( !v2 )
    alloc::alloc::handle_alloc_error();
  v3 = v2;
  v21 = 13;
  v20 = v2;
  qmemcpy(v2, "/proc/self/fd", 13);
  v19 = 13;
  n = 0;
  src = (void *)1;
  v22 = 0;
  core::fmt::Formatter::new((int)&v26, (int)&v22, (int)&off_2C8FF8);
  if ( core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt((unsigned int *)&v18, (int)&v26) )
    core::result::unwrap_failed((int)aADisplayImplem, 55, (int)v29, (int)&off_2C9318, (int)&off_2C9010);
  v4 = n;
  v5 = src;
  if ( n && *(_BYTE *)src == 47 )
  {
    v6 = 0;
    v7 = 13;
  }
  else
  {
    v7 = 13;
    v6 = 13;
    if ( v3[12] == 47 )
      goto LABEL_9;
    sub_77DD8(&v19, 13, 1);
    v3 = v20;
    v7 = v19;
    v6 = v21 + 1;
    *((_BYTE *)v20 + v21) = 47;
  }
  v21 = v6;
LABEL_9:
  if ( v7 - v6 < v4 )
  {
    sub_77DD8(&v19, v6, v4);
    v3 = v20;
    v6 = v21;
  }
  memcpy(&v3[v6], v5, v4);
  v8 = v6 + v4;
  v21 = v8;
  if ( v22 )
    _rust_dealloc(src);
  v9 = v20;
  if ( v8 >> 7 <= 2 )
  {
    memcpy(&v26, v20, v8);
    *((_BYTE *)&v26 + v8) = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v29, &v26, v8 + 1);
    if ( v29[0] )
    {
      src = (void *)dword_2CA158;
      v22 = 1;
      n = (size_t)&off_2CA14C;
      goto LABEL_16;
    }
    sub_1D9F94((int)&v22, (const char *)v29[1]);
  }
  else
  {
    sub_78D9C(&v22, v20, v8);
  }
  if ( !v22 )
  {
    v5 = src;
    v10 = (void *)n;
    v4 = v25;
    if ( !v19 )
      goto LABEL_22;
    goto LABEL_21;
  }
LABEL_16:
  v10 = 0;
  if ( (unsigned __int8)src == 3 )
  {
    v4 = n;
    (**(void (__fastcall ***)(_DWORD))(n + 4))(*(_DWORD *)n);
    if ( *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4) )
      _rust_dealloc(*(void **)v4);
    _rust_dealloc((void *)v4);
  }
  if ( v19 )
LABEL_21:
    _rust_dealloc(v9);
LABEL_22:
  if ( v10 )
  {
    v28 = v4;
    ptr = v10;
    v26 = v5;
    core::fmt::builders::DebugStruct::field(v17, (int)"pathreadHOMEargs && ", 4u, (int)&v26, (int)&off_2C993C);
    if ( v26 )
      _rust_dealloc(ptr);
  }
  v11 = fcntl(fd, 3);
  v12 = v11 == -1;
  if ( v11 != -1 )
  {
    v11 &= 3u;
    v12 = v11 == 3;
  }
  if ( !v12 )
  {
    v13 = 8 * v11;
    LOBYTE(v22) = ((unsigned int)&dword_10000 + 1) >> v13;
    LOBYTE(v26) = (unsigned int)&dword_10100 >> v13;
    v14 = core::fmt::builders::DebugStruct::field(v17, (int)"readHOMEargs && ", 4u, (int)&v22, (int)&off_2C9758);
    core::fmt::builders::DebugStruct::field(v14, (int)aWrite, 5u, (int)&v26, (int)&off_2C9758);
  }
  return core::fmt::builders::DebugStruct::finish(v17);
}
