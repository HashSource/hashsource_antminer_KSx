void __fastcall sub_79EE4(_DWORD *a1)
{
  void *v2; // r0
  bool v3; // zf
  _BYTE *v4; // r4
  int v5; // r5
  void *v6; // r0
  size_t v7; // r2
  int v8; // r0
  _BYTE *v9; // [sp+8h] [bp-13Ch] BYREF
  int v10; // [sp+Ch] [bp-138h]
  void *ptr; // [sp+10h] [bp-134h]
  _BYTE *v12; // [sp+18h] [bp-12Ch]
  int v13; // [sp+1Ch] [bp-128h]
  _QWORD src[9]; // [sp+20h] [bp-124h] BYREF
  _BYTE v15[104]; // [sp+68h] [bp-DCh] BYREF
  _BYTE s[108]; // [sp+D8h] [bp-6Ch] BYREF

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v9);
  v2 = ptr;
  if ( !ptr )
  {
    v4 = v9;
    v5 = v10;
    v13 = v10;
    v12 = v9;
    sub_1F3DD4(src, -100, v9, 256);
    if ( src[0] == 3 )
    {
      memset(s, 0, 0x68u);
      if ( sub_26EBC8(v4, s) == -1 )
      {
        v8 = *_errno_location();
        *((_BYTE *)a1 + 11) = 0;
        *(_WORD *)((char *)a1 + 9) = 0;
        *(_QWORD *)a1 = 2;
        *((_BYTE *)a1 + 8) = 0;
        a1[3] = v8;
        *v4 = 0;
        if ( !v5 )
          return;
LABEL_9:
        _rust_dealloc(v4);
        return;
      }
      memcpy(v15, s, sizeof(v15));
      v6 = a1 + 2;
      v7 = 176;
      *a1 = 0;
      a1[1] = 0;
    }
    else
    {
      v6 = a1;
      v7 = 184;
    }
    memcpy(v6, src, v7);
    *v4 = 0;
    if ( !v5 )
      return;
    goto LABEL_9;
  }
  *a1 = 2;
  a1[1] = 0;
  v3 = v10 == 0;
  *((_QWORD *)a1 + 1) = __PAIR64__(&off_2DE14C, dword_2DE158);
  if ( !v3 )
    _rust_dealloc(v2);
}
