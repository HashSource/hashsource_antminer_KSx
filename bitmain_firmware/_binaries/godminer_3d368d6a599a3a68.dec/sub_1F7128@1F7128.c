int __fastcall sub_1F7128(int a1, __int16 a2, char *name)
{
  int v5; // r0
  int v6; // r6
  _BOOL4 v7; // r2
  int v8; // r5
  signed __int64 v9; // r0
  const char *v10; // r5
  int v11; // r1
  size_t v12; // r6
  void *v13; // r7
  int v14; // r5
  void *v15; // r6
  unsigned int v16; // r7
  unsigned int v17; // r9
  int result; // r0
  int v19; // r2
  struct addrinfo req; // [sp+8h] [bp-74h] BYREF
  struct addrinfo *pai; // [sp+28h] [bp-54h] BYREF
  size_t v22; // [sp+2Ch] [bp-50h] BYREF
  void *ptr; // [sp+30h] [bp-4Ch]
  size_t v24; // [sp+34h] [bp-48h]
  void *v25; // [sp+38h] [bp-44h]
  int v26; // [sp+3Ch] [bp-40h]
  size_t v27; // [sp+40h] [bp-3Ch]
  void *v28; // [sp+48h] [bp-34h] BYREF
  int v29; // [sp+4Ch] [bp-30h]
  size_t size; // [sp+50h] [bp-2Ch]
  _DWORD v31[2]; // [sp+58h] [bp-24h] BYREF
  unsigned int v32; // [sp+60h] [bp-1Ch] BYREF
  void *src; // [sp+64h] [bp-18h]
  size_t n; // [sp+68h] [bp-14h]
  int v35; // [sp+6Ch] [bp-10h]
  _DWORD *v36; // [sp+70h] [bp-Ch]
  int v37; // [sp+74h] [bp-8h]

  memset(&req.ai_protocol, 0, 20);
  req.ai_socktype = 1;
  req.ai_family = 0;
  req.ai_flags = 0;
  pai = 0;
  v5 = getaddrinfo(name, 0, &req, &pai);
  if ( !v5 )
    goto LABEL_18;
  v6 = v5;
  sub_1EF8A0((int *)&v32);
  if ( v32 == 1 )
  {
    v7 = (unsigned int)src < 2;
    if ( src == (void *)2 )
      v7 = n < 0x1A;
    if ( v7 )
      _res_init();
  }
  if ( v6 != -11 )
  {
    v10 = gai_strerror(v6);
    core::ffi::c_str::CStr::from_ptr::strlen_rt(v10);
    core::str::converts::from_utf8(&v32, v10);
    if ( v32 )
    {
      v28 = src;
      v29 = n;
      core::result::unwrap_failed((int)&unk_2A4DCA, 43, (int)&v28, (int)&off_2DE328, (int)&off_2DF868);
    }
    v12 = n;
    v13 = src;
    v14 = 1;
    if ( n )
    {
      if ( (int)n <= -1 )
        alloc::raw_vec::capacity_overflow(0, v11);
      v14 = _rust_alloc(n);
      if ( !v14 )
        alloc::alloc::handle_alloc_error();
    }
    memcpy((void *)v14, v13, v12);
    v31[1] = sub_1BD360;
    v24 = v12;
    v22 = v12;
    v36 = v31;
    ptr = (void *)v14;
    v31[0] = &v22;
    v37 = 1;
    v35 = 1;
    n = (size_t)&off_2DF878;
    v32 = 0;
    alloc::fmt::format::format_inner(&v28, &v32);
    v15 = (void *)v29;
    v25 = v28;
    v26 = v29;
    v27 = size;
    sub_1D05E4(&v32, (const void *)v29, size);
    v16 = v32;
    v17 = (unsigned int)src;
    if ( v22 )
      _rust_dealloc(ptr);
    v8 = (unsigned __int8)v16;
    if ( v25 )
      _rust_dealloc(v15);
    if ( (unsigned __int8)v16 != 4 )
    {
      HIDWORD(v9) = v17 >> 8;
      LODWORD(v9) = (v16 >> 8) | (v17 << 24);
      goto LABEL_20;
    }
LABEL_18:
    result = (int)pai;
    *(_WORD *)(a1 + 12) = a2;
    *(_DWORD *)(a1 + 4) = result;
    *(_DWORD *)(a1 + 8) = result;
    *(_DWORD *)a1 = 0;
    return result;
  }
  v8 = 0;
  v9 = (unsigned __int64)(unsigned int)*_errno_location() << 24;
LABEL_20:
  v19 = v8 | ((_DWORD)v9 << 8);
  result = v9 >> 24;
  *(_DWORD *)(a1 + 4) = v19;
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)a1 = 1;
  return result;
}
