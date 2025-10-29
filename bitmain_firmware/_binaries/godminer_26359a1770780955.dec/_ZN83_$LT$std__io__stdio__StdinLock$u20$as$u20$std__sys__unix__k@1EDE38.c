__int64 __fastcall <std::io::stdio::StdinLock as std::sys::unix::kernel_copy::CopyRead>::properties(int a1)
{
  int v2; // r9
  __int64 v3; // r6
  int v4; // r5
  _BYTE v6[176]; // [sp+0h] [bp-170h] BYREF
  int v7; // [sp+B4h] [bp-BCh] BYREF
  __int64 v8; // [sp+B8h] [bp-B8h] BYREF
  _DWORD v9[44]; // [sp+C0h] [bp-B0h] BYREF

  v2 = 0;
  v7 = 0;
  std::fs::File::metadata(&v8, &v7);
  v3 = v8;
  if ( v8 == 2 )
  {
    LODWORD(v3) = 4;
    if ( LOBYTE(v9[0]) == 3 )
    {
      v4 = v9[1];
      (**(void (__fastcall ***)(_DWORD))(v9[1] + 4))(*(_DWORD *)v9[1]);
      if ( *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4) )
        _rust_dealloc(*(void **)v4);
      LODWORD(v3) = 4;
      _rust_dealloc((void *)v4);
    }
  }
  else
  {
    memcpy(v6, v9, sizeof(v6));
    v2 = HIDWORD(v8);
  }
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = v2;
  memcpy((void *)(a1 + 16), v6, 0xB0u);
  *(_QWORD *)a1 = 1;
  return 1;
}
