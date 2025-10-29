int __fastcall softreset_all_chip_kda(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[2]; // [sp+0h] [bp-14h] BYREF
  __int64 v5; // [sp+8h] [bp-Ch]

  sub_E9BF8(a1);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 268);
  v4[1] = 0;
  v4[0] = 0;
  v5 = 0xFF00080001LL;
  v2(a1, v4);
  sub_E9D20(a1, 255);
  return 0;
}
