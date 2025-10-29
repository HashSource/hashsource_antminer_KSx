int __fastcall miniz_oxide::deflate::core::LZOxide::new(_DWORD *a1)
{
  _DWORD *v1; // r4

  v1 = a1;
  memset(a1, 0, 0x10000u);
  v1[0x4000] = 1;
  v1 += 0x4000;
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 8;
  return 8;
}
