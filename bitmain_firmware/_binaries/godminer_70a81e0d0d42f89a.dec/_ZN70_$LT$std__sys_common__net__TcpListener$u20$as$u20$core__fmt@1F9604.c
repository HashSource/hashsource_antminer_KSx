int __fastcall <std::sys_common::net::TcpListener as core::fmt::Debug>::fmt(int *a1, int a2)
{
  int v3; // r8
  int v4; // r5
  int v5; // r0
  _BYTE v7[8]; // [sp+8h] [bp-48h] BYREF
  int v8; // [sp+10h] [bp-40h] BYREF
  int v9; // [sp+14h] [bp-3Ch]
  int v10; // [sp+18h] [bp-38h]
  int v11; // [sp+1Ch] [bp-34h]
  int v12; // [sp+20h] [bp-30h]
  int v13; // [sp+24h] [bp-2Ch]
  int v14; // [sp+28h] [bp-28h]
  int v15; // [sp+2Ch] [bp-24h]
  _DWORD v16[8]; // [sp+30h] [bp-20h] BYREF

  core::fmt::Formatter::debug_struct(v7, a2, aTcplistener, 11);
  v3 = *a1;
  sub_1F9490((int)&v8, *a1);
  if ( (unsigned __int16)v8 == 2 )
  {
    if ( (unsigned __int8)v9 == 3 )
    {
      v4 = v10;
      (**(void (__fastcall ***)(_DWORD))(v10 + 4))(*(_DWORD *)v10);
      if ( *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4) )
        _rust_dealloc(*(void **)v4);
      _rust_dealloc((void *)v4);
    }
  }
  else
  {
    v16[0] = v8;
    v16[1] = v9;
    v16[2] = v10;
    v16[3] = v11;
    v16[4] = v12;
    v16[5] = v13;
    v16[6] = v14;
    v16[7] = v15;
    core::fmt::builders::DebugStruct::field(v7, aAddr, 4, v16, &off_2E1E44);
  }
  v16[0] = v3;
  v5 = core::fmt::builders::DebugStruct::field(v7, aFd, 2, v16, &off_2E0A5C);
  return core::fmt::builders::DebugStruct::finish(v5);
}
