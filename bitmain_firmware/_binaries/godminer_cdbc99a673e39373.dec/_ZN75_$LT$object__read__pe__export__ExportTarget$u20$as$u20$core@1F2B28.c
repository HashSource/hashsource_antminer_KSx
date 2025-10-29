int __fastcall <object::read::pe::export::ExportTarget as core::fmt::Debug>::fmt(_DWORD *a1, int a2)
{
  _DWORD *v3; // r1
  int v4; // r0
  int v5; // r1
  int v6; // r3
  _DWORD *v7; // lr
  int v8; // r0
  _DWORD v10[2]; // [sp+0h] [bp-38h] BYREF
  char **v11; // [sp+8h] [bp-30h]
  int v12; // [sp+Ch] [bp-2Ch]
  _DWORD **v13; // [sp+10h] [bp-28h]
  int v14; // [sp+14h] [bp-24h]
  _DWORD *v15; // [sp+18h] [bp-20h] BYREF
  int (__fastcall *v16)(_DWORD *, int); // [sp+1Ch] [bp-1Ch]
  _DWORD *v17; // [sp+20h] [bp-18h]
  int (__fastcall *v18)(_DWORD *, int); // [sp+24h] [bp-14h]
  _DWORD v19[2]; // [sp+28h] [bp-10h] BYREF
  _DWORD *v20; // [sp+30h] [bp-8h] BYREF
  int v21; // [sp+34h] [bp-4h]

  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      v11 = &off_2CC2C0;
      v19[0] = a1 + 1;
      v14 = 2;
      v13 = &v15;
      v12 = 3;
      v10[0] = 0;
      v18 = sub_1F13A8;
      v17 = v19;
      v16 = <object::read::util::ByteString as core::fmt::Debug>::fmt;
      v3 = (_DWORD *)a1[2];
      v4 = a1[3];
      v15 = &v20;
      v21 = v4;
      v20 = v3;
    }
    else
    {
      v12 = 3;
      v5 = a1[2];
      v14 = 2;
      v13 = &v15;
      v10[0] = 0;
      v19[1] = v5;
      v6 = a1[1];
      v7 = (_DWORD *)a1[3];
      v8 = a1[4];
      v19[0] = v6;
      v18 = <object::read::util::ByteString as core::fmt::Debug>::fmt;
      v16 = <object::read::util::ByteString as core::fmt::Debug>::fmt;
      v17 = &v20;
      v15 = v19;
      v11 = &off_2CC2A8;
      v21 = v8;
      v20 = v7;
    }
  }
  else
  {
    v20 = a1 + 1;
    v12 = 2;
    v11 = &off_2CC2D8;
    v14 = 1;
    v10[1] = 1;
    v13 = &v15;
    v10[0] = &unk_290D20;
    v16 = sub_1F13B0;
    v15 = &v20;
  }
  return core::fmt::Formatter::write_fmt(a2, v10);
}
