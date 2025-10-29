int __fastcall std::path::Path::is_file(_BYTE *a1, size_t a2)
{
  int v2; // r4
  int v3; // r0
  int v4; // r5
  __int64 v6; // [sp+0h] [bp-B8h] BYREF
  __int64 v7; // [sp+8h] [bp-B0h]
  int v8; // [sp+60h] [bp-58h]

  std::sys::unix::fs::stat((int)&v6, a1, a2);
  if ( v6 != 2 )
  {
    LOBYTE(v3) = (v8 & 0xF000) == 0x8000;
LABEL_5:
    v4 = (unsigned __int8)v3;
    if ( (_BYTE)v3 )
      return 1;
    return v4;
  }
  v2 = HIDWORD(v7);
  if ( (unsigned __int8)v7 == 4 )
  {
    v3 = v7 >> 8;
    goto LABEL_5;
  }
  v4 = 0;
  if ( (unsigned __int8)v7 != 3 )
    return v4;
  (**(void (__fastcall ***)(_DWORD))(HIDWORD(v7) + 4))(*(_DWORD *)HIDWORD(v7));
  if ( *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4) )
    _rust_dealloc(*(void **)v2);
  _rust_dealloc((void *)v2);
  return 0;
}
