unsigned int __fastcall sub_B17D0(int *a1)
{
  int v1; // r2
  int v2; // r12
  unsigned int v3; // r1
  unsigned int v4; // r3
  int v5; // r3

  v1 = HIWORD(*a1) + 36969 * (unsigned __int16)*a1;
  v2 = HIWORD(a1[1]) + 18000 * (unsigned __int16)a1[1];
  v3 = (unsigned int)&loc_12D684 + 69069 * a1[3] + 3;
  v4 = a1[2] ^ (a1[2] << 17);
  *a1 = v1;
  a1[1] = v2;
  v5 = v4 ^ (v4 >> 13) ^ (32 * (v4 ^ (v4 >> 13)));
  a1[2] = v5;
  a1[3] = v3;
  return ((v2 + (v1 << 16)) ^ v3) + v5;
}
