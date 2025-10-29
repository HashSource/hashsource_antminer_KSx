int __fastcall <miniz_oxide::inflate::stream::InflateState as core::default::Default>::default(_DWORD *a1)
{
  _DWORD *v1; // r4

  v1 = a1;
  a1[10818] = 0;
  a1[10819] = 0;
  a1[10820] = 0;
  memset(a1 + 10823, 0, 0x1C9u);
  memset(v1 + 0x2000, 0, 0x28E0u);
  memset(v1, 0, 0x8000u);
  memset(v1 + 10808, 0, 0x28u);
  v1[10822] = 0;
  v1 += 10822;
  *((_BYTE *)v1 + 461) = 0;
  *(v1 - 1) = 0;
  v1[116] = 0;
  v1[117] = 0;
  v1[118] = 66049;
  return 66049;
}
