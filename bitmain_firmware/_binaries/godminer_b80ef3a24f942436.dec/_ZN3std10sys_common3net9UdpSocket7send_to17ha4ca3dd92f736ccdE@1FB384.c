ssize_t __fastcall std::sys_common::net::UdpSocket::send_to(int a1, int *a2, void *buf, size_t n, int a5)
{
  int v5; // r9
  int v6; // r10
  int v7; // r11
  int v11; // r5
  int v12; // r12
  sa_family_t v13; // r7
  _DWORD *v14; // r2
  __int16 v15; // r6
  socklen_t v16; // r3
  int v17; // r0
  ssize_t result; // r0
  struct sockaddr v19; // [sp+8h] [bp-1Ch] BYREF
  int v20; // [sp+18h] [bp-Ch]
  int v21; // [sp+1Ch] [bp-8h]
  int v22; // [sp+20h] [bp-4h]

  if ( *(_WORD *)a5 )
  {
    v11 = *(_DWORD *)(a5 + 4);
    v12 = *(_DWORD *)(a5 + 8);
    v13 = 10;
    v6 = *(_DWORD *)(a5 + 12);
    v7 = *(_DWORD *)(a5 + 16);
    v5 = *(_DWORD *)(a5 + 24);
    v14 = (_DWORD *)(a5 + 20);
    v15 = __rev16(*(unsigned __int16 *)(a5 + 28));
    v16 = 28;
  }
  else
  {
    v14 = (_DWORD *)(a5 + 2);
    v11 = 0;
    v13 = 2;
    v15 = __rev16(*(unsigned __int16 *)(a5 + 6));
    v16 = 16;
    v12 = 0;
  }
  *(_DWORD *)&v19.sa_data[6] = v11;
  *(_DWORD *)&v19.sa_data[10] = v12;
  v20 = v6;
  v21 = v7;
  v17 = *a2;
  *(_DWORD *)&v19.sa_data[2] = *v14;
  *(_WORD *)v19.sa_data = v15;
  v19.sa_family = v13;
  v22 = v5;
  result = sendto(v17, buf, n, 0x4000, &v19, v16);
  if ( result == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
  }
  else
  {
    *(_BYTE *)a1 = 4;
  }
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
