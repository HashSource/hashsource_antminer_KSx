int __fastcall sph_groestl384_init(int result)
{
  int v1; // r3

  *(_DWORD *)(result + 128) = 0;
  v1 = result + 128;
  do
  {
    *(_QWORD *)(v1 + 8) = 0;
    v1 += 8;
  }
  while ( v1 != result + 248 );
  *(_QWORD *)(result + 264) = 0;
  *(_DWORD *)(result + 256) = 0;
  *(_DWORD *)(result + 260) = -2147418112;
  return result;
}
