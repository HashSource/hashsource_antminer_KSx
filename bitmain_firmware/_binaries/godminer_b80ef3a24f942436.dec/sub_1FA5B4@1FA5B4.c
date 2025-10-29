int __fastcall sub_1FA5B4(int a1, __int16 a2, char *name)
{
  int v5; // r0
  int v6; // r6
  _BOOL4 v7; // r2
  int v8; // r5
  signed __int64 v9; // r0
  const char *v10; // r5
  size_t v11; // r0
  int v12; // r1
  size_t v13; // r6
  void *v14; // r7
  int v15; // r5
  void *v16; // r6
  unsigned int v17; // r7
  unsigned int v18; // r9
  int result; // r0
  int v20; // r2
  struct addrinfo req; // [sp+8h] [bp-74h] BYREF
  struct addrinfo *pai; // [sp+28h] [bp-54h] BYREF
  size_t v23; // [sp+2Ch] [bp-50h] BYREF
  void *ptr; // [sp+30h] [bp-4Ch]
  size_t v25; // [sp+34h] [bp-48h]
  void *v26; // [sp+38h] [bp-44h]
  int v27; // [sp+3Ch] [bp-40h]
  size_t v28; // [sp+40h] [bp-3Ch]
  void *v29; // [sp+48h] [bp-34h] BYREF
  int v30; // [sp+4Ch] [bp-30h]
  size_t size; // [sp+50h] [bp-2Ch]
  _DWORD v32[2]; // [sp+58h] [bp-24h] BYREF
  unsigned int v33; // [sp+60h] [bp-1Ch] BYREF
  void *src; // [sp+64h] [bp-18h]
  size_t n; // [sp+68h] [bp-14h]
  int v36; // [sp+6Ch] [bp-10h]
  _DWORD *v37; // [sp+70h] [bp-Ch]
  int v38; // [sp+74h] [bp-8h]

  memset(&req.ai_protocol, 0, 20);
  req.ai_socktype = 1;
  req.ai_family = 0;
  req.ai_flags = 0;
  pai = 0;
  v5 = getaddrinfo(name, 0, &req, &pai);
  if ( !v5 )
    goto LABEL_18;
  v6 = v5;
  sub_1F2D2C((int *)&v33);
  if ( v33 == 1 )
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
    v11 = core::ffi::c_str::CStr::from_ptr::strlen_rt(v10);
    core::str::converts::from_utf8((int)&v33, (int)v10, v11);
    if ( v33 )
    {
      v29 = src;
      v30 = n;
      core::result::unwrap_failed((int)&unk_2AFC2A, 43, (int)&v29, (int)&off_2E9328, (int)&off_2EA868);
    }
    v13 = n;
    v14 = src;
    v15 = 1;
    if ( n )
    {
      if ( (int)n <= -1 )
        alloc::raw_vec::capacity_overflow(0, v12);
      v15 = _rust_alloc(n);
      if ( !v15 )
        alloc::alloc::handle_alloc_error();
    }
    memcpy((void *)v15, v14, v13);
    v32[1] = sub_1C07EC;
    v25 = v13;
    v23 = v13;
    v37 = v32;
    ptr = (void *)v15;
    v32[0] = &v23;
    v38 = 1;
    v36 = 1;
    n = (size_t)&off_2EA878;
    v33 = 0;
    alloc::fmt::format::format_inner((signed int *)&v29, (int *)&v33);
    v16 = (void *)v30;
    v26 = v29;
    v27 = v30;
    v28 = size;
    sub_1D3A70(&v33, (const void *)v30, size);
    v17 = v33;
    v18 = (unsigned int)src;
    if ( v23 )
      _rust_dealloc(ptr);
    v8 = (unsigned __int8)v17;
    if ( v26 )
      _rust_dealloc(v16);
    if ( (unsigned __int8)v17 != 4 )
    {
      HIDWORD(v9) = v18 >> 8;
      LODWORD(v9) = (v17 >> 8) | (v18 << 24);
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
  v20 = v8 | ((_DWORD)v9 << 8);
  result = v9 >> 24;
  *(_DWORD *)(a1 + 4) = v20;
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)a1 = 1;
  return result;
}
