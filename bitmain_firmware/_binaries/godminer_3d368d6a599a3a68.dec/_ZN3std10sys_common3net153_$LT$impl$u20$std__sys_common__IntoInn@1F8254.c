int __fastcall std::sys_common::net::<impl std::sys_common::IntoInner<(std::sys_common::net::SocketAddrCRepr,u32)> for &std::net::socket_addr::SocketAddr>::into_inner(
        int result,
        int a2)
{
  int v2; // r4
  int v3; // r5
  int v4; // r3
  int v5; // r12
  int v6; // lr
  int v7; // r2
  unsigned int v8; // r1
  unsigned int v9; // r3
  int v10; // r2

  if ( *(_WORD *)a2 )
  {
    v2 = *(_DWORD *)(a2 + 16);
    v3 = *(_DWORD *)(a2 + 24);
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(_DWORD *)(a2 + 8);
    v6 = *(_DWORD *)(a2 + 12);
    v7 = *(_DWORD *)(a2 + 20);
    v8 = *(unsigned __int16 *)(a2 + 28);
    *(_WORD *)result = 10;
    *(_DWORD *)(result + 8) = v4;
    *(_DWORD *)(result + 12) = v5;
    *(_DWORD *)(result + 16) = v6;
    *(_DWORD *)(result + 20) = v2;
    *(_DWORD *)(result + 24) = v3;
    *(_DWORD *)(result + 28) = 28;
    *(_DWORD *)(result + 4) = v7;
    *(_WORD *)(result + 2) = __rev16(v8);
  }
  else
  {
    v9 = *(unsigned __int16 *)(a2 + 6);
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 12) = 0;
    *(_WORD *)result = 2;
    v10 = *(_DWORD *)(a2 + 2);
    *(_DWORD *)(result + 28) = 16;
    *(_DWORD *)(result + 4) = v10;
    *(_WORD *)(result + 2) = __rev16(v9);
  }
  return result;
}
