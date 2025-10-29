int __fastcall std::fs::DirEntry::file_type(_DWORD *a1, int a2)
{
  unsigned __int8 v3; // r0
  int result; // r0
  __int64 v5; // [sp+0h] [bp-B8h] BYREF
  int v6; // [sp+8h] [bp-B0h]
  int v7; // [sp+Ch] [bp-ACh]
  int v8; // [sp+60h] [bp-58h]

  v3 = *(_BYTE *)(a2 + 8) - 1;
  if ( v3 < 0xCu && ((0xAABu >> v3) & 1) != 0 )
  {
    result = dword_2A7278[(char)v3];
  }
  else
  {
    sub_1EB414(&v5);
    if ( v5 == 2 )
    {
      result = v7;
      if ( (unsigned __int8)v6 != 4 )
      {
        *a1 = v6;
        a1[1] = result;
        return result;
      }
    }
    else
    {
      result = v8;
    }
  }
  *(_BYTE *)a1 = 4;
  a1[1] = result;
  return result;
}
