void __fastcall sub_7A6FC(_DWORD *a1, _BYTE *a2, size_t a3)
{
  void *v4; // r0
  bool v5; // zf
  _BYTE *v6; // r4
  int v7; // r5
  void *v8; // r0
  size_t v9; // r2
  int v10; // r0
  _BYTE *v11; // [sp+8h] [bp-13Ch] BYREF
  int v12; // [sp+Ch] [bp-138h]
  void *ptr; // [sp+10h] [bp-134h]
  _BYTE *v14; // [sp+18h] [bp-12Ch]
  int v15; // [sp+1Ch] [bp-128h]
  _QWORD src[9]; // [sp+20h] [bp-124h] BYREF
  _BYTE v17[104]; // [sp+68h] [bp-DCh] BYREF
  _BYTE s[108]; // [sp+D8h] [bp-6Ch] BYREF

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v11, a2, a3);
  v4 = ptr;
  if ( !ptr )
  {
    v6 = v11;
    v7 = v12;
    v15 = v12;
    v14 = v11;
    sub_1F7EF0(src, -100, v11, 0);
    if ( src[0] == 3 )
    {
      memset(s, 0, 0x68u);
      if ( sub_272CC8(v6, s) == -1 )
      {
        v10 = *_errno_location();
        *((_BYTE *)a1 + 11) = 0;
        *(_WORD *)((char *)a1 + 9) = 0;
        *(_QWORD *)a1 = 2;
        *((_BYTE *)a1 + 8) = 0;
        a1[3] = v10;
        *v6 = 0;
        if ( !v7 )
          return;
LABEL_9:
        _rust_dealloc(v6);
        return;
      }
      memcpy(v17, s, sizeof(v17));
      v8 = a1 + 2;
      v9 = 176;
      *a1 = 0;
      a1[1] = 0;
    }
    else
    {
      v8 = a1;
      v9 = 184;
    }
    memcpy(v8, src, v9);
    *v6 = 0;
    if ( !v7 )
      return;
    goto LABEL_9;
  }
  *a1 = 2;
  a1[1] = 0;
  v5 = v12 == 0;
  *((_QWORD *)a1 + 1) = __PAIR64__(&off_2EA14C, dword_2EA158);
  if ( !v5 )
    _rust_dealloc(v4);
}
