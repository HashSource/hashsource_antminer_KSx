int __fastcall <std::io::stdio::StderrLock as std::io::Write>::write_all_vectored(int a1, int a2)
{
  int *v3; // r4
  bool v4; // zf
  int v5; // r1
  int result; // r0
  int v7; // [sp+8h] [bp-10h] BYREF
  int v8; // [sp+Ch] [bp-Ch]
  _BYTE v9[4]; // [sp+14h] [bp-4h] BYREF

  v3 = (int *)(*(_DWORD *)a2 + 12);
  if ( *v3 )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v9, (int)&off_2DE2E8, (int)&off_2DEB84);
  *(_DWORD *)(*(_DWORD *)a2 + 12) = -1;
  sub_1D66DC(&v7);
  v4 = (unsigned __int8)v7 == 0;
  if ( !(_BYTE)v7 )
    v4 = v8 == 9;
  if ( v4 )
  {
    *(_BYTE *)a1 = 4;
  }
  else
  {
    v5 = v8;
    *(_DWORD *)a1 = v7;
    *(_DWORD *)(a1 + 4) = v5;
  }
  result = *v3 + 1;
  *v3 = result;
  return result;
}
