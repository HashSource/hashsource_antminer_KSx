void *__fastcall <miniz_oxide::deflate::buffer::HashBuffers as core::default::Default>::default(int a1)
{
  memset((void *)(a1 + 0x20000), 0, 0x8102u);
  memset((void *)a1, 0, 0x10000u);
  return memset((void *)(a1 + 0x10000), 0, 0x10000u);
}
