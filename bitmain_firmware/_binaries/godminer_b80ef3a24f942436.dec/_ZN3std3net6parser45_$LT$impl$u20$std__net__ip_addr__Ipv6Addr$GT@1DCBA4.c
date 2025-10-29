int __fastcall std::net::parser::<impl std::net::ip_addr::Ipv6Addr>::parse_ascii(
        int a1,
        int a2,
        int a3,
        unsigned int a4)
{
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v9; // [sp+4h] [bp-1Ch] BYREF
  int v10; // [sp+8h] [bp-18h]
  char v11; // [sp+Ch] [bp-14h] BYREF
  int v12; // [sp+Dh] [bp-13h]
  int v13; // [sp+11h] [bp-Fh]
  int v14; // [sp+15h] [bp-Bh]
  int v15; // [sp+19h] [bp-7h]

  v9 = a2;
  v10 = a3;
  sub_1DBD80((int)&v11, &v9);
  if ( v10 || !v11 )
  {
    *(_BYTE *)(a1 + 1) = 2;
    *(_BYTE *)a1 = 1;
    return 1;
  }
  else
  {
    v5 = v13;
    v6 = v14;
    v7 = v15;
    *(_DWORD *)(a1 + 1) = v12;
    *(_DWORD *)(a1 + 13) = v7;
    *(_DWORD *)(a1 + 9) = v6;
    *(_DWORD *)(a1 + 5) = v5;
    *(_BYTE *)a1 = 0;
    return 0;
  }
}
