int __fastcall std::net::parser::<impl core::str::traits::FromStr for std::net::ip_addr::Ipv4Addr>::from_str(
        _BYTE *a1,
        unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned __int8 *v5; // [sp+0h] [bp-10h] BYREF
  unsigned int v6; // [sp+4h] [bp-Ch]
  char v7; // [sp+8h] [bp-8h] BYREF
  int v8; // [sp+9h] [bp-7h]

  if ( a3 <= 0xF )
  {
    v5 = a2;
    v6 = a3;
    sub_1D9A58((int)&v7, &v5);
    if ( v6 || !v7 )
    {
      a1[1] = 1;
      *a1 = 1;
      return 1;
    }
    else
    {
      *(_DWORD *)(a1 + 1) = v8;
      *a1 = 0;
      return 0;
    }
  }
  else
  {
    *(_WORD *)a1 = 257;
    return 257;
  }
}
