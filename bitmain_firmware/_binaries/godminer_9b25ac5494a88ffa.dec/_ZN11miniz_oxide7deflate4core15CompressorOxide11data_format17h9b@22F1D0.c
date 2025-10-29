int __fastcall miniz_oxide::deflate::core::CompressorOxide::data_format(int a1)
{
  return ~(*(_DWORD *)(a1 + 65552) >> 11) & 2;
}
