unsigned int __fastcall std::env::vars(_DWORD *a1)
{
  unsigned int result; // r0
  unsigned int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r3
  unsigned int v6[4]; // [sp+0h] [bp-10h] BYREF

  std::env::vars_os(v6);
  result = v6[0];
  v3 = v6[1];
  v4 = v6[2];
  v5 = v6[3];
  *a1 = v6[0];
  a1[1] = v3;
  a1[2] = v4;
  a1[3] = v5;
  return result;
}
