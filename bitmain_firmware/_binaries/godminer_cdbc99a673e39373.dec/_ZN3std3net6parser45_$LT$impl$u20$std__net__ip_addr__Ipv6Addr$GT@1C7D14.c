int __fastcall std::net::parser::<impl std::net::ip_addr::Ipv6Addr>::parse_ascii(int a1, int a2, int a3)
{
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v8; // [sp+4h] [bp-1Ch] BYREF
  int v9; // [sp+8h] [bp-18h]
  char v10; // [sp+Ch] [bp-14h] BYREF
  int v11; // [sp+Dh] [bp-13h]
  int v12; // [sp+11h] [bp-Fh]
  int v13; // [sp+15h] [bp-Bh]
  int v14; // [sp+19h] [bp-7h]

  v8 = a2;
  v9 = a3;
  sub_1C6EF0((int)&v10, &v8);
  if ( v9 || !v10 )
  {
    *(_BYTE *)(a1 + 1) = 2;
    *(_BYTE *)a1 = 1;
    return 1;
  }
  else
  {
    v4 = v12;
    v5 = v13;
    v6 = v14;
    *(_DWORD *)(a1 + 1) = v11;
    *(_DWORD *)(a1 + 13) = v6;
    *(_DWORD *)(a1 + 9) = v5;
    *(_DWORD *)(a1 + 5) = v4;
    *(_BYTE *)a1 = 0;
    return 0;
  }
}
