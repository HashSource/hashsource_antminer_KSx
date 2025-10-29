int __fastcall <std::sys_common::net::TcpStream as core::fmt::Debug>::fmt(int *a1, int a2)
{
  int v3; // r8
  void **v4; // r5
  void **v5; // r5
  int v6; // r0
  _BYTE v8[8]; // [sp+8h] [bp-48h] BYREF
  int v9; // [sp+10h] [bp-40h] BYREF
  int v10; // [sp+14h] [bp-3Ch]
  void **v11; // [sp+18h] [bp-38h]
  int v12; // [sp+1Ch] [bp-34h]
  int v13; // [sp+20h] [bp-30h]
  int v14; // [sp+24h] [bp-2Ch]
  int v15; // [sp+28h] [bp-28h]
  int v16; // [sp+2Ch] [bp-24h]
  int v17; // [sp+30h] [bp-20h] BYREF
  int v18; // [sp+34h] [bp-1Ch]
  void **v19; // [sp+38h] [bp-18h]
  int v20; // [sp+3Ch] [bp-14h]
  int v21; // [sp+40h] [bp-10h]
  int v22; // [sp+44h] [bp-Ch]
  int v23; // [sp+48h] [bp-8h]
  int v24; // [sp+4Ch] [bp-4h]

  core::fmt::Formatter::debug_struct(v8, a2, aTcpstream, 9);
  v3 = *a1;
  sub_1F6E50(&v9, *a1);
  if ( (unsigned __int16)v9 == 2 )
  {
    if ( (unsigned __int8)v10 == 3 )
    {
      v4 = v11;
      (*(void (__fastcall **)(void *))v11[1])(*v11);
      if ( *((_DWORD *)v4[1] + 1) )
        _rust_dealloc(*v4);
      _rust_dealloc(v4);
    }
  }
  else
  {
    v17 = v9;
    v18 = v10;
    v19 = v11;
    v20 = v12;
    v21 = v13;
    v22 = v14;
    v23 = v15;
    v24 = v16;
    core::fmt::builders::DebugStruct::field(v8, aAddr, 4, &v17, &off_2DEE44);
  }
  sub_1F6908((int)&v9, v3);
  if ( (unsigned __int16)v9 == 2 )
  {
    if ( (unsigned __int8)v10 == 3 )
    {
      v5 = v11;
      (*(void (__fastcall **)(void *))v11[1])(*v11);
      if ( *((_DWORD *)v5[1] + 1) )
        _rust_dealloc(*v5);
      _rust_dealloc(v5);
    }
  }
  else
  {
    v17 = v9;
    v18 = v10;
    v19 = v11;
    v20 = v12;
    v21 = v13;
    v22 = v14;
    v23 = v15;
    v24 = v16;
    core::fmt::builders::DebugStruct::field(v8, aPeer, 4, &v17, &off_2DEE44);
  }
  v17 = v3;
  v6 = core::fmt::builders::DebugStruct::field(v8, aFd, 2, &v17, &off_2DDA5C);
  return core::fmt::builders::DebugStruct::finish(v6);
}
