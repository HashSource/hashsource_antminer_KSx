int __fastcall sub_1CE0D0(_DWORD *a1)
{
  __int64 v2; // r6
  int v3; // r5
  __int64 v4; // r0
  _BOOL1 v5; // cf
  __int64 v7; // [sp+8h] [bp-B8h] BYREF
  char v8; // [sp+10h] [bp-B0h]
  int v9; // [sp+14h] [bp-ACh]
  __int64 v10; // [sp+88h] [bp-38h]

  std::fs::File::metadata(&v7, a1);
  if ( v7 == 2 )
  {
    v2 = 0;
    if ( v8 == 3 )
    {
      v3 = v9;
      (**(void (__fastcall ***)(_DWORD))(v3 + 4))(*(_DWORD *)v3);
      if ( *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4) )
        _rust_dealloc(*(void **)v3);
      _rust_dealloc((void *)v3);
      v2 = 0;
    }
  }
  else
  {
    v2 = v10;
  }
  v4 = lseek64(*a1, 1, 0, 0, 1);
  if ( ((unsigned int)v4 & HIDWORD(v4)) == 0xFFFFFFFF )
  {
    _errno_location();
    v4 = 0;
  }
  v5 = (unsigned int)v2 >= (unsigned int)v4;
  LODWORD(v4) = v2 - v4;
  if ( !__CFSUB__(HIDWORD(v2), HIDWORD(v4), v5) )
    LODWORD(v4) = 0;
  return v4;
}
