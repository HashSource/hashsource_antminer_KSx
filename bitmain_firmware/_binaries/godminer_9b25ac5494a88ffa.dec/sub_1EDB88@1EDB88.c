void __fastcall sub_1EDB88(_DWORD *a1, int a2)
{
  int v3; // r0
  int v4; // r4
  int v5; // [sp+4h] [bp-C4h] BYREF
  _QWORD src[23]; // [sp+8h] [bp-C0h] BYREF
  int v7; // [sp+C4h] [bp-4h] BYREF

  v7 = a2;
  if ( a2 == -1 )
  {
    LODWORD(src[1]) = 0;
    sub_796F4(1, (int)&v7, (int)&unk_2A44BC, src, (int)&off_2DDEAC);
  }
  v5 = a2;
  std::fs::File::metadata(src, &v5);
  if ( src[0] == 2 )
  {
    v3 = LOBYTE(src[1]);
    *a1 = 4;
    a1[1] = 0;
    if ( v3 == 3 )
    {
      v4 = HIDWORD(src[1]);
      (**(void (__fastcall ***)(_DWORD))(HIDWORD(src[1]) + 4))(*(_DWORD *)HIDWORD(src[1]));
      if ( *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4) )
        _rust_dealloc(*(void **)v4);
      _rust_dealloc((void *)v4);
    }
  }
  else
  {
    memcpy(a1, src, 0xB8u);
  }
}
