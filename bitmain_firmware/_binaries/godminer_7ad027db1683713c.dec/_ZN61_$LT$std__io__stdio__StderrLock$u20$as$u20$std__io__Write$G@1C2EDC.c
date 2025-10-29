int __fastcall <std::io::stdio::StderrLock as std::io::Write>::write_all_vectored(
        int a1,
        _DWORD *a2,
        int a3,
        unsigned int a4)
{
  int v5; // r0
  _DWORD *v6; // r4
  bool v7; // zf
  int v8; // r1
  int result; // r0
  int v10; // [sp+8h] [bp-10h] BYREF
  int v11; // [sp+Ch] [bp-Ch]
  _BYTE v12[4]; // [sp+14h] [bp-4h] BYREF

  v5 = *a2;
  v6 = (_DWORD *)(*a2 + 12);
  if ( *v6 )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v12, (int)&off_2C92E8, (int)&off_2C9B84);
  *(_DWORD *)(v5 + 12) = -1;
  sub_1C4318((int)&v10, v5 + 16, a3, a4);
  v7 = (unsigned __int8)v10 == 0;
  if ( !(_BYTE)v10 )
    v7 = v11 == 9;
  if ( v7 )
  {
    *(_BYTE *)a1 = 4;
  }
  else
  {
    v8 = v11;
    *(_DWORD *)a1 = v10;
    *(_DWORD *)(a1 + 4) = v8;
  }
  result = *v6 + 1;
  *v6 = result;
  return result;
}
