unsigned int __fastcall miniz_oxide::deflate::core::compress(
        unsigned int *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7)
{
  int v8[7]; // [sp+4h] [bp-1Ch] BYREF

  v8[5] = a5;
  v8[6] = a6;
  v8[4] = 1;
  v8[0] = a3;
  v8[1] = a4;
  v8[2] = 0;
  v8[3] = 0;
  return miniz_oxide::deflate::core::compress_inner(a1, a2, v8, a7);
}
