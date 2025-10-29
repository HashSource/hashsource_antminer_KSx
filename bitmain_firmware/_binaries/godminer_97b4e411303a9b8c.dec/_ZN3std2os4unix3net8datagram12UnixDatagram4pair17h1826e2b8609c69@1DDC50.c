int __fastcall std::os::unix::net::datagram::UnixDatagram::pair(int *a1)
{
  int v2; // r1
  bool v3; // zf
  int result; // r0
  _DWORD v5[3]; // [sp+4h] [bp-Ch] BYREF

  sub_1EF1C8(v5, 2);
  v2 = v5[2];
  v3 = v5[0] == 0;
  a1[1] = v5[1];
  a1[2] = v2;
  result = !v3;
  *a1 = result;
  return result;
}
